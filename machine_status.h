#ifndef MACHINE_STATUS_H
#define MACHINE_STATUS_H

#include <QObject>
#include <QDateTime>
#include "settingparameter.h"
#include <QByteArray>
#include "3rdparty/qextserialport/src/qextserialport.h"


#define SlideCount 9

//----------comm cmd ---------------------
#define _HEADER                 0x7E

#define _START                  1                // start process
#define _STOP                   2                // stop process
#define _UP_LOAD_CONFIG         3                // Up load parameters from XMOS to PC
#define _DOWN_LOAD_CONFIG       4                // Down load parameters from PC to XMOS
#define _RESET					5

#define _LIGHT_ON               6
#define _LIGHT_OFF              7

#define _JOG_PLUS_START_X       10
#define _JOG_MINUS_START_X      11
#define _JOG_STOP_X             12

#define _JOG_PLUS_START_Y       13
#define _JOG_MINUS_START_Y      14
#define _JOG_STOP_Y             15

#define _JOG_PLUS_START_Z       16
#define _JOG_MINUS_START_Z      17
#define _JOG_STOP_Z             18

#define _ZRN_AXIS_X             19
#define _ZRN_AXIS_Y             20
#define _ZRN_AXIS_Z             21
#define _ZRN_AXIS_ALL           22

#define _GRIPER_PRESS           23
#define _GRIPER_RELEASE         24
#define _AIR_DRY_ON             27
#define _AIR_DRY_OFF            28
#define _WATER1_ON              45
#define _WATER1_OFF             46
#define _WATER2_ON              47
#define _WATER2_OFF             48

#define _SEND_POS_X             30
#define _SEND_POS_Y             31
#define _SEND_POS_Z             32
#define _SEND_POS_ALL           33


#define _SEND_ALL               39    // pos + io + status

#define _MOVE_X                 40    // need :  posx, velx, dirx
#define _MOVE_Y                 41    // need :  posy, vely, diry
#define _MOVE_Z                 42    // need :  posz, velz, dirz
#define _MOVE_XY                43    // need :  posx, velx, dirx, posy, vely, diry
#define _MOVE_ALL               44    // need :  posx, velx, dirx, posy, vely, diry, posz, velz, dirz
#define _PAUSE                   50
#define _RELEASE                 51 //resume

#define SAVE_MOVE_Z_POSITION    -12.0
#define DIPS_OFFSET    5.0


class Header_Status
{
public:
    double PosX;
    double PosY;
    double PosZ;
    int NozzleNo;// if -1 -> no nozzle
    int Nozzle_Status; // 0 -> up, 1 -> down
    int Nozzle_Level;
};


class Heater_Status
{
public:
    double PosHeater;
    bool is_On;
};

class Tray_Status
{
public:
    bool is_pour;
};

class Slide_Status
{
public:
    //int slide_no;
    int step_no;
    QDateTime start_time;
    int step_time;//msec
    int total_time; //msec
    int waiting_time; //msec
    bool is_active;
};

/*class Run_status
{
public:
    Slide_Status slideNo[SlideCount];
};*/




class Machine_status : public QObject
{
    Q_OBJECT
public:
    Machine_status();

    #ifdef __linux__
        QString qsComPort = "/dev/ttyACM0";
    #elif _WIN32
        QString qsComPort = "COM3";
    #endif

    Header_Status header;
    Heater_Status heat;
    Slide_Status slide[SlideCount];
    Tray_Status tray;

    bool limit_x_plus;
    bool limit_x_neg;
    bool limit_y_plus;
    bool limit_y_neg;
    bool limit_z_plus;
    bool limit_z_neg;
    bool limit_head;

    bool is_water1_on;
    bool is_water2_on;
    bool is_dry_on;
    bool is_gripper_on;
    bool is_home_comp;

    bool is_x_move;
    bool is_y_move;
    bool is_z_move;

    //double pos_x;
    //double pos_y;
    //double pos_z;

    long pos_count_x;
    long pos_count_y;
    long pos_count_z;

    bool emergency_sw;

    bool is_serial_connected;
    bool is_command_cancel;

    QextSerialPort *mpSerialPort;
    bool EncodeSerialData(QByteArray &data);
    bool DecodeSerialData(QByteArray &data, const int iNoData);

    void moveXY(long count_x, long count_y);
    void moveX(long count_x);
    void moveY(long count_y);
    void moveZ(long count_z);


    void JogX(bool direction,double distance);
    void stopX();
    void JogY(bool direction,double distance);
    void stopY();
    void JogZ(bool direction,double distance);
    void stopZ();

    void HomeAll();

    void CmdGripper(bool cmd_on);
    void CmdWater1(bool cmd_on,double time_on);
    void CmdWater2(bool cmd_on,double time_on);
    void CmdDry(bool cmd_on,double time_on);

    void Pause();
    void Resume();
signals:
    void head__impact_limit();
    void limit_sw();


public slots:
    void On_SerialPort_ReadyRead();
    void cancel_command();

private:


};

void qSleep(int ms);

extern Machine_status machine_status;
#endif // MACHINE_STATUS_H
