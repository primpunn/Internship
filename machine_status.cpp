#include "machine_status.h"
#include <QMessageBox>
#include "settingparameter.h"
#include <QDebug>
#include <QApplication>

#ifdef Q_OS_WIN
#include <windows.h> // for Sleep
#endif

Machine_status machine_status;

void qSleep(int ms)
{
    //QTEST_ASSERT(ms > 0);

#ifdef Q_OS_WIN
    Sleep(uint(ms));
#else
    struct timespec ts = { ms / 1000, (ms % 1000) * 1000 * 1000 };
    nanosleep(&ts, NULL);
#endif
}

Machine_status::Machine_status()
{
    for (int i = 0;i < SlideCount;i++)
    {
         slide[i].step_no = 0;
         slide[i].is_active = false;
         slide[i].step_time = 0;
         slide[i].total_time = 0;
         slide[i].waiting_time = 0;
         slide[i].start_time = QDateTime::currentDateTimeUtc();
    }

    header.PosX = 0;
    header.PosY = 0;
    header.PosZ = 0;
    header.NozzleNo = -1;
    header.Nozzle_Level = 0;
    header.Nozzle_Status = 0;

    heat.is_On = false;
    heat.PosHeater = 0;

    tray.is_pour = false;

    pos_count_x = 0;
    pos_count_y = 0;
    pos_count_z = 0;
    is_serial_connected = false;
    is_command_cancel = false;
}

bool Machine_status::DecodeSerialData(QByteArray & data, const int iNoData)
{
    if( iNoData > 5 )
    {
        //----------  debug only--------------

//        for(int i=0; i<data[4]+5; i++)
//        {
//            QString hex = QString::number( (unsigned char)data[i], 16 );
//            qDebug() << "data[" << i << "] =" << hex;
//        }

        //----------------------------------

        if( (unsigned char)data[5] == _UP_LOAD_CONFIG )
        {
            unsigned int chksum = 0;
            for( int idx = 5; idx < iNoData; ++idx )
            {
                chksum += (data[idx] & 0xFF); // wut add
            }

            unsigned int rcvChkSum = ((unsigned char)data[1]) << 16 | ((unsigned char)data[2]) << 8 | (unsigned char)data[3];

            //qDebug() << "chk = " << chksum;
            //qDebug() << "rcvchk = " << rcvChkSum;



            if( chksum != rcvChkSum )
                return false;
            /*
                Following this order ....
                uiRotationSpeed;
                uiOffset_Camera_1;
                uiOffset_Camera_2;
                uiOffset_Camera_3;
                uiOffset_Eject_1;
                uiOffset_Eject_2;
                uiOffset_Sensor_2;
                */

            return true;
        }






        if((unsigned char)data[5] == _SEND_POS_X)
        {
            long posX   = ((unsigned char)data[6] << 24) | ((unsigned char)data[7] << 16) | ((unsigned char)data[8] << 8) | ((unsigned char)data[9]);


            header.PosX = posX*SCALE_AXIS_X;
        }
        if((unsigned char)data[5] == _SEND_POS_Y)
        {
            long posY   = ((unsigned char)data[6] << 24) | ((unsigned char)data[7] << 16) | ((unsigned char)data[8] << 8) | ((unsigned char)data[9]);


            header.PosY = posY*SCALE_AXIS_Y;
        }
        if((unsigned char)data[5] == _SEND_POS_Z)
        {
            long posZ   = ((unsigned char)data[6] << 24) | ((unsigned char)data[7] << 16) | ((unsigned char)data[8] << 8) | ((unsigned char)data[9]);

            header.PosZ = posZ*SCALE_AXIS_Z;
        }

        if((unsigned char)data[5] == _SEND_ALL)
        {
            long posX   = ((unsigned char)data[6] << 24) | ((unsigned char)data[7] << 16) | ((unsigned char)data[8] << 8) | ((unsigned char)data[9]);
            long posY   = ((unsigned char)data[10] << 24) | ((unsigned char)data[11] << 16) | ((unsigned char)data[12] << 8) | ((unsigned char)data[13]);
            long posZ   = ((unsigned char)data[14] << 24) | ((unsigned char)data[15] << 16) | ((unsigned char)data[16] << 8) | ((unsigned char)data[17]);

            pos_count_x = posX;
            pos_count_y = posY;
            pos_count_z = posZ;



            header.PosX = posX/SCALE_AXIS_X;
            header.PosY = posY/SCALE_AXIS_Y;
            header.PosZ = posZ/SCALE_AXIS_Z;

            char ip1 = (unsigned char)data[18];
            char ip2 = (unsigned char)data[19];

           //do not have slide sensor
            /*
            InputStatus[0] =  !(bool)(ip2 & 0x20);
            InputStatus[1] =  !(bool)(ip2 & 0x10);
            InputStatus[2] =  !(bool)(ip2 & 0x8);
            InputStatus[3] =  !(bool)(ip2 & 0x4);
            InputStatus[4] =  !(bool)(ip2 & 0x2);
            InputStatus[5] =  !(bool)(ip2 & 0x1);

            OutputStatus[0] =  !(bool)(ip1 & 0x20);
            OutputStatus[1] =  !(bool)(ip1 & 0x10);
            OutputStatus[2] =  !(bool)(ip1 & 0x8);
            OutputStatus[3] =  !(bool)(ip1 & 0x4);
            OutputStatus[4] =  !(bool)(ip1 & 0x2);
            OutputStatus[5] =  !(bool)(ip1 & 0x1);
            */

            emergency_sw = !(bool)(ip1 & 0x80);


            char limit = (unsigned char)data[20];
             limit_x_plus = (bool)(limit & 0x1);
             limit_x_neg = (bool)(limit & 0x2);
             limit_y_plus = (bool)(limit & 0x4);
             limit_y_neg = (bool)(limit & 0x8);
             limit_z_plus = (bool)(limit & 010);
             limit_z_neg = (bool)(limit & 0x20);

         /*    if ((!limit_x_plus)||(!limit_x_neg)||(!limit_y_plus)||(!limit_y_neg)||(!limit_z_plus)||(!limit_z_neg))
             {
                emit limit_sw();
             }*/



             if (limit_head != !(bool)(limit & 0x40))
             {
                 if (!limit_head)
                    emit head__impact_limit();
             }
             limit_head = !(bool)(limit & 0x40);

            //qDebug() << "count _z = " << pos_count_z << "input5" << InputStatus[4] ;

            char status = (unsigned char)data[21];
            is_x_move = !(bool)(status & 0x1);
            is_y_move = !(bool)(status & 0x2);
            is_z_move = !(bool)(status & 0x4);
            is_dry_on = (bool)(status & 0x8);
            is_water1_on = (bool)(status & 0x10);
            is_water2_on = (bool)(status & 0x20);
            is_gripper_on = (bool)(status & 0x40);
            is_home_comp = (bool)(status & 0x80);
            QApplication::processEvents();



        }

    }
    return false;
}

bool Machine_status::EncodeSerialData(QByteArray & data)
{
    if( data.size() > 250 )
        return false;
    QByteArray header(5,0);
    //header[0] = 0xFF;                                   // Header
    header[0] = _HEADER;
    unsigned int chksum = 0;
    for( int i = 0; i < data.size(); ++i )
    {
        chksum += (data[i] & 0xFF);  // wut add
        //QString hex = QString::number( data[i], 16 );
        //qDebug() << "chksum data[i] = " << hex;

    }

    //QString hex = QString::number( chksum, 16 );
    //qDebug() << "chksum is = " << hex;



    header[1] = (unsigned char)((chksum >> 16) & 0xFF); // check sum
    header[2] = (unsigned char)((chksum >> 8) & 0xFF);  // check sum
    header[3] = (unsigned char)((chksum & 0xFF));       // check sum
    header[4] = data.size();                         // Size of Raw Data
    data.prepend(header);

    //----------  debug only--------------
//    for(int i=0; i<header.size(); i++)
//    {
//        QString hex = QString::number( (unsigned char)header[i], 16 );
//        qDebug() << "data = " << hex;
//    }

    return true;
}

void Machine_status::On_SerialPort_ReadyRead()
{
    static QByteArray qbrRawData(256, 0);

    static int rcvCount = 0;
    static int rcvLength = 0;
    static bool bSync = false;
    if( mpSerialPort->bytesAvailable() )
    {
        QByteArray receivedBytes = mpSerialPort->readAll();

       // qDebug() << "Offset_Camera_1 = " << receivedBytes;              // wut add for test

        unsigned char *data = (unsigned char*) receivedBytes.data();
        unsigned char *rawData = (unsigned char*) qbrRawData.data();
        int dataSize = receivedBytes.size();

        //qDebug() << "datapos_count_zSize = " << dataSize;
//        for(int i=0; i<dataSize; i++)
//        {
//            QString hex = QString::number( (unsigned char)data[i], 16 );
//            qDebug() << "data[" << i << "] =" << hex;
//        }

        if( dataSize != 0 )
        {
            int idx = 0;
            while( idx < dataSize )
            {
                if( !bSync )
                {
                    while( idx < dataSize )
                    {
                        if( data[idx] == 0xFF )
                            break;
                        else
                            idx++;
                    }
                    if( idx == dataSize )
                        break;
                    bSync = true;
                }
                if( rcvCount < 4 )
                {
                    rawData[rcvCount] = data[idx];
                }
                else if( rcvCount == 4 )
                {
                    rawData[rcvCount] = data[idx];
                    rcvLength = 5 + data[idx];
                }
                else if( rcvCount < rcvLength )
                {
                    rawData[rcvCount] = data[idx];
                }
                rcvCount++;
                if( rcvCount == rcvLength )
                {
                    DecodeSerialData(qbrRawData, rcvCount);
                    rcvCount = 0;
                    rcvLength = 0;
                    break;
                }
                idx++;
            }
        }
    }
}

void Machine_status::JogX(bool direction,double distance)
{
    unsigned char cmd;
    if (distance <= 0)
    {
        if (direction)
            cmd = _JOG_PLUS_START_X;
        else
            cmd = _JOG_MINUS_START_X;

        QByteArray data(1,0);
        data[0] = cmd;
        if( EncodeSerialData(data) )
            mpSerialPort->write(data, data.size());
    }
    else
    {
        // step command
        long target;
        if (direction)
            target = pos_count_x+distance*SCALE_AXIS_X;
        else
            target = pos_count_x-distance*SCALE_AXIS_X;

        moveX(target);
    }

}

void Machine_status::stopX()
{
    QByteArray data(1,0);
    data[0] = _JOG_STOP_X;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());
}

void Machine_status::JogY(bool direction,double distance)
{
    unsigned char cmd;

    if (distance <= 0)
    {
        if (direction)
            cmd = _JOG_PLUS_START_Y;
        else
            cmd = _JOG_MINUS_START_Y;

        QByteArray data(1,0);
        data[0] = cmd;
        if( EncodeSerialData(data) )
            mpSerialPort->write(data, data.size());
    }
    else
    {


        // step commapos_count_znd
        long target;
        if (direction)
            target = pos_count_y+distance*SCALE_AXIS_Y;
        else
            target = pos_count_y-distance*SCALE_AXIS_Y;

        moveY(target);
    }
}

void Machine_status::stopY()
{
    QByteArray data(1,0);
    data[0] = _JOG_STOP_Y;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());
}

void Machine_status::moveXY(long count_x, long count_y)
{
    //is_command_cancel = false;
    QByteArray data(12,0);

    //int dstx = (x - pos_x)*SCALE_AXIS_X;
   // int dsty = (y - pos_y)*SCALE_AXIS_Y;

    long dstx = count_x - pos_count_x;
    long dsty = count_y - pos_count_y;

    int vel = VEL_AXIS_Y;

    data[0] = _MOVE_XY;
    data[1] = (unsigned char)((abs(dstx) >> 24) & 0xFF );
    data[2] = (unsigned char)((abs(dstx) >> 16) & 0xFF );
    data[3] = (unsigned char)((abs(dstx) >> 8) & 0xFF );
    data[4] = (unsigned char)(abs(dstx) & 0xFF);

    if(dstx > 0) data[5] = 1;
    else if(dstx < 0) data[5] = 0;
    else if(dstx == 0) data[5] = 2;

    data[6] = (unsigned char)((abs(dsty) >> 24) & 0xFF );
    data[7] = (unsigned char)((abs(dsty) >> 16) & 0xFF );
    data[8] = (unsigned char)((abs(dsty) >> 8) & 0xFF );
    data[9] = (unsigned char)(abs(dsty) & 0xFF);

    if(dsty > 0) data[10] = 1;
    else if(dsty < 0) data[10] = 0;
    else if(dsty == 0) data[10] = 2;


    data[11] = (unsigned char)((vel >> 8) & 0xFF );
    data[12] = (unsigned char)(vel & 0xFF);

    //qDebug() << "X = " << count_x << ", Y = " << count_y;
    //is_command_cancel = false;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());

    while(((pos_count_x != count_x)||(pos_count_y != count_y))&&(!is_command_cancel))
    {
        qSleep(20);
        QApplication::processEvents();

    }


}

void Machine_status::moveZ(long count_z)
{
    //is_command_cancel = false;
    QByteArray data(8,0);
    long dst = count_z - pos_count_z;
    //int dst = (z - pos_z)*SCALE_AXIS_Z;
    int vel = VEL_AXIS_Z;

    data[0] = _MOVE_Z;
    data[1] = (unsigned char)((abs(dst) >> 24) & 0xFF );
    data[2] = (unsigned char)((abs(dst) >> 16) & 0xFF );
    data[3] = (unsigned char)((abs(dst) >> 8) & 0xFF );
    data[4] = (unsigned char)(abs(dst) & 0xFF);

    if(dst > 0) data[5] = 1;
    else if(dst < 0) data[5] = 0;
    else if(dst == 0) data[5] = 2;

    data[6] = (unsigned char)((vel >> 8) & 0xFF );
    data[7] = (unsigned char)(vel & 0xFF);


    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());

    //is_command_cancel = false;
    qDebug() << "Z = " << (count_z);
    //Sleeper::msleep(1000);
    while((pos_count_z != count_z)&&(!is_command_cancel))
    {
        qSleep(20);
        QApplication::processEvents();

    }

}

void Machine_status::moveX(long count_x)
{
    //is_command_cancel = false;
    QByteArray data(8,0);
    //int dst = (x - pos_x)*SCALE_AXIS_X;
    long dst = count_x - pos_count_x;
    int vel = VEL_AXIS_X;

    data[0] = _MOVE_X;
    data[1] = (unsigned char)((abs(dst) >> 24) & 0xFF );
    data[2] = (unsigned char)((abs(dst) >> 16) & 0xFF );
    data[3] = (unsigned char)((abs(dst) >> 8) & 0xFF );
    data[4] = (unsigned char)(abs(dst) & 0xFF);

    if(dst > 0) data[5] = 1;
    else if(dst < 0) data[5] = 0;
    else if(dst == 0) data[5] = 2;

    data[6] = (unsigned char)((vel >> 8) & 0xFF );
    data[7] = (unsigned char)(vel & 0xFF);

    //is_command_cancel = false;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());

    while((pos_count_x != count_x)&&(!is_command_cancel))
    {
        qSleep(20);
        QApplication::processEvents();
    }

}

void Machine_status::moveY(long count_y)
{
    //is_command_cancel = false;
    QByteArray data(8,0);
    long dst = count_y - pos_count_y;
    //int dst = (y - pos_y)*SCALE_AXIS_Y;
    int vel = VEL_AXIS_Y;

    data[0] = _MOVE_Y;
    data[1] = (unsigned char)((abs(dst) >> 24) & 0xFF );
    data[2] = (unsigned char)((abs(dst) >> 16) & 0xFF );
    data[3] = (unsigned char)((abs(dst) >> 8) & 0xFF );
    data[4] = (unsigned char)(abs(dst) & 0xFF);

    if(dst > 0) data[5] = 1;
    else if(dst < 0) data[5] = 0;
    else if(dst == 0) data[5] = 2;

    data[6] = (unsigned char)((vel >> 8) & 0xFF );
    data[7] = (unsigned char)(vel & 0xFF);

    //is_command_cancel = false;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());

    while((pos_count_y != count_y)&&(!is_command_cancel))
    {
        qSleep(20);
        QApplication::processEvents();
    }

}

void Machine_status::JogZ(bool direction,double distance)
{
    unsigned char cmd;
    if (distance <= 0)
    {
        if (direction)
            cmd = _JOG_PLUS_START_Z;
        else
            cmd = _JOG_MINUS_START_Z;

        QByteArray data(1,0);
        data[0] = cmd;
        if( EncodeSerialData(data) )
            mpSerialPort->write(data, data.size());
    }
    else
    {
        // step command
        long target;
        if (direction)
            target = pos_count_z+distance*SCALE_AXIS_Z;
        else
            target = pos_count_z-distance*SCALE_AXIS_Z;

        moveZ(target);

    }
}

void Machine_status::stopZ()
{
    QByteArray data(1,0);
    data[0] = _JOG_STOP_Z;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());
}

void Machine_status::HomeAll()
{
    QByteArray data(1,0);
    data[0] = _ZRN_AXIS_ALL;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());
}

void Machine_status::CmdGripper(bool cmd_release)
{
    QByteArray data(1,0);
    if (cmd_release) //release
        data[0] = _GRIPER_RELEASE;
    else //grab
        data[0] = _GRIPER_PRESS;

    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());
}

void Machine_status::CmdWater1(bool cmd_on,double time_on)
{

        if (cmd_on)
        {
            QByteArray data(3,0);
            short int time = time_on*10.0;
            data[0] = _WATER1_ON;
            data[1] = (unsigned char)((time >> 8) & 0xFF );
            data[2] = (unsigned char)(time & 0xFF);

            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
        else
        {
            QByteArray data(1,0);
            data[0] = _WATER1_OFF;
            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
}

void Machine_status::CmdWater2(bool cmd_on,double time_on)
{
        if (cmd_on)
        {
            QByteArray data(3,0);
            short int time = time_on*10.0;
            data[0] = _WATER2_ON;
            data[1] = (unsigned char)((time >> 8) & 0xFF );
            data[2] = (unsigned char)(time & 0xFF);

            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
        else
        {
            QByteArray data(1,0);
            data[0] = _WATER2_OFF;
            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
}

void Machine_status::CmdDry(bool cmd_on,double time_on)
{
        if (cmd_on)
        {
            QByteArray data(3,0);
            short int time = time_on*10.0;
            data[0] = _AIR_DRY_ON;
            data[1] = (unsigned char)((time >> 8) & 0xFF );
            data[2] = (unsigned char)(time & 0xFF);

            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
        else
        {
            QByteArray data(1,0);
            data[0] = _AIR_DRY_OFF;
            if( EncodeSerialData(data) )
                mpSerialPort->write(data, data.size());
        }
}

void Machine_status::Pause()
{
    QByteArray data(1,0);
    data[0] = _PAUSE;
    //data[0] = _STOP;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());

}

void Machine_status::Resume()
{
   /* QByteArray data(1,0);
    data[0] = _RELEASE;
    if( EncodeSerialData(data) )
        mpSerialPort->write(data, data.size());*/


}

void Machine_status::cancel_command()
{
    is_command_cancel = true;
}
