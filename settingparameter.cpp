#include "settingparameter.h"

#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QDebug>



#ifdef __linux__
        #define ConfigFile "/home/pi/Config.cnf"
        #define NetpieFile "/home/pi/NetpieSetting.txt"
#elif _WIN32
        #define ConfigFile "C:/Users/hi_po/Dropbox/PapSmearV2/Config.cnf"
        #define NetpieFile "C:/Users/hi_po/Dropbox/PapSmearV2/NetpieSetting.txt"
#elif __APPLE__
        #define ConfigFile "/Users/poonoi/Downloads/Tuberculosis 3/Config.cnf"
        #define NetpieFile "/Users/poonoi/Downloads/Tuberculosis 3/NetpieSetting.txt"
#endif


//#define PositionFile "PositionSetting.txt"
//#define RunFile "RunSetting.txt"
//#define TimeFile "TimeSetting.txt"






SettingParameter setting_param;

const station_type sta_type[STATION_COUNT] = {
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::slide,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::reagent,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::nozzle,
    station_type::drop
};

SettingParameter::SettingParameter()
{
   // scaleX = 1;
   // scaleY = 1;
   // scaleZ = 1;
   // QCoreApplication::setOrganizationName("NECTEC");
   // QCoreApplication::setOrganizationDomain("nectec.com");
   // QCoreApplication::setApplicationName("PapSmearController");

}

void SettingParameter::LoadSettingName()
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    program_setting_list.clear();
    int program_count = 10;
    for (int i=0; i<program_count;i++ )
    {
        QString st = "set"+QString::number(i);
        program_setting_list << allsetting.value(st, st).toString();
    }
}



void SettingParameter::LoadCurrentSettingNumber()
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);
    setting_number = allsetting.value("current_set_no", 0).toInt();
}

void SettingParameter::SaveCurrentSettingNumber(int number)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);
    allsetting.setValue("current_set_no",number);
}

void SettingParameter::LoadPositionSetting(int set_no)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    qDebug() << m_sSettingsFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    PositionSetting* p = NULL;
    bool ok;

    for (int i = PositionList.count()-1;i >= 0;i-- )
    {
        p = PositionList[i];
        delete p;
    }
    PositionList.clear();

    QString position_set = "Position" + QString::number(set_no);

    for (int i = 0;i < STATION_COUNT; i++)
    {
        p = new PositionSetting();
        p->name = allsetting.value(position_set +"//"+QString::number(i)+"//"+"name","none").toString();
        p->x = allsetting.value(position_set +"//"+QString::number(i)+"//"+"x",0.00).toDouble(&ok);
        p->y = allsetting.value(position_set +"//"+QString::number(i)+"//"+"y",0.00).toDouble(&ok);
        p->z = allsetting.value(position_set +"//"+QString::number(i)+"//"+"z",0.00).toDouble(&ok);
        //p->shake_distance = allsetting.value(position_set +"//"+QString::number(i)+"//"+"shake_distance",0.00).toDouble(&ok);
        p->width = allsetting.value(position_set +"//"+QString::number(i)+"//"+"width",0.00).toDouble(&ok);
        p->height = allsetting.value(position_set +"//"+QString::number(i)+"//"+"height",0.00).toDouble(&ok);
        p->enable = allsetting.value(position_set +"//"+QString::number(i)+"//"+"enable",false).toBool();
        p->type = sta_type[i];
        PositionList.append(p);
    }
}

void SettingParameter::SavePositionSetting(int set_no)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    PositionSetting* p = NULL;
    QString position_set = "Position" + QString::number(set_no);

    allsetting.remove(position_set);

    for (int i = 0; i < STATION_COUNT;i++)
    {
        if (i < PositionList.count())
        {
            p = PositionList[i];
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"name", p->name);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"x", p->x);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"y", p->y);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"z", p->z);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"width", p->width);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"height", p->height);
            //allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"shake_distance", p->shake_distance);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"enable", p->enable);
         }
         else
         {
            p = PositionList[i];
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"name","none");
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"x", 0);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"y", 0);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"z", 0);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"width", 0);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"height", 0);
            //allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"shake_distance", 0);
            allsetting.setValue(position_set +"//"+QString::number(i)+"//"+"enable", false);
         }
    }

}

void SettingParameter::LoadRunSetting(int set_no)
{

    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    RunSetting* p = NULL;
    bool ok;

    for (int i = RunList.count()-1;i >= 0;i-- )
    {
        p = RunList[i];
        delete p;
    }
    RunList.clear();

    QString run_set = "Run" + QString::number(set_no);

    int run_count =  allsetting.value(run_set +"//"+"run_count",0).toInt(&ok);

    for (int i = 0;i < run_count; i++)
    {
        p = new RunSetting();
        p->station_name = allsetting.value(run_set +"//"+QString::number(i)+"//"+"station_name","none").toString();
        p->soak_volumn = allsetting.value(run_set +"//"+QString::number(i)+"//"+"soak_volumn",0.00).toDouble(&ok);
        p->soak_pattern = allsetting.value(run_set +"//"+QString::number(i)+"//"+"soak_pattern",0).toInt(&ok);
        p->soak_sec = allsetting.value(run_set +"//"+QString::number(i)+"//"+"soak_sec",0.00).toDouble(&ok);
        p->delay_before = allsetting.value(run_set +"//"+QString::number(i)+"//"+"delay_before",0).toInt(&ok);
        p->delay_after = allsetting.value(run_set +"//"+QString::number(i)+"//"+"delay_after",0).toInt(&ok);
        p->allow_wait_sec = allsetting.value(run_set +"//"+QString::number(i)+"//"+"allow_wait_sec",0.00).toDouble(&ok);
        RunList.append(p);
    }


}

void SettingParameter::SaveRunSetting(int set_no)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    RunSetting* p = NULL;
    QString run_set = "Run" + QString::number(set_no);

    allsetting.remove(run_set);

    allsetting.setValue(run_set +"//"+"run_count",RunList.count());

    for (int i = 0; i < RunList.count() ;i++)
    {
            p = RunList[i];
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"station_name", p->station_name);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"soak_volumn", p->soak_volumn);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"soak_pattern", p->soak_pattern);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"soak_sec", p->soak_sec);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"delay_before", p->delay_before);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"delay_after", p->delay_after);
            allsetting.setValue(run_set +"//"+QString::number(i)+"//"+"allow_wait_sec", p->allow_wait_sec);
    }



}
void SettingParameter::LoadNetpieSetting()
{
    //QString filename = QCoreApplication::applicationDirPath() +"//"+ NetpieFile;
    QString filename = NetpieFile;
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;
    QString st = "";
    QTextStream in(&file);
    int LineNo = 0;


    while (!in.atEnd())
    {
       st = in.readLine();
       if (LineNo == 0)
           netpiesetting.AppID = st;
       else if (LineNo == 1)
           netpiesetting.MachineName = st;
       else if (LineNo == 2)
           netpiesetting.Key = st;
       else if (LineNo == 3)
           netpiesetting.Secret = st;
       else if (LineNo == 4)
           netpiesetting.ClientKey = st;
       else if (LineNo == 5)
           netpiesetting.ClientSecret = st;
       LineNo++;
    }
    file.close();
}



void SettingParameter::LoadTimeSetting(int set_no)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    bool ok;

    QString time_set = "Time" + QString::number(set_no);


    timesetting.GrabDelay = allsetting.value(time_set +"//"+"GrabDelay",0.50).toDouble(&ok);
    timesetting.ReleaseDelay = allsetting.value(time_set +"//"+"ReleaseDelay",0.50).toDouble(&ok);
    timesetting.WaterOn = allsetting.value(time_set +"//"+"WaterOn",3.00).toDouble(&ok);
    timesetting.DryDelay = allsetting.value(time_set +"//"+"DryDelay",3.00).toDouble(&ok);
    timesetting.HeatDelay = allsetting.value(time_set +"//"+"HeatDelay",3.00).toDouble(&ok);



}

void SettingParameter::SaveTimeSetting(int set_no)
{
    //QString m_sSettingsFile = QApplication::applicationDirPath() + "//"+ConfigFile;
    QString m_sSettingsFile = ConfigFile;
    QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);
    qDebug() << allsetting.fileName();

    QString time_set = "Time" + QString::number(set_no);

    allsetting.remove(time_set);
    allsetting.setValue(time_set +"//"+"GrabDelay", timesetting.GrabDelay);
    allsetting.setValue(time_set +"//"+"ReleaseDelay", timesetting.ReleaseDelay);
    allsetting.setValue(time_set +"//"+"WaterOn", timesetting.WaterOn);
    allsetting.setValue(time_set +"//"+"DryDelay", timesetting.DryDelay);
    allsetting.setValue(time_set +"//"+"HeatDelay", timesetting.HeatDelay);

    allsetting.sync();

}

void SettingParameter::LoadAll()
{
   // QString m_sSettingsFile = QApplication::applicationDirPath().left(1) + ":/"+ConfigFile;
   // QSettings allsetting(m_sSettingsFile, QSettings::IniFormat);

    //setting_number = allsetting.value("current_set_no", 0).toInt();
    LoadPositionSetting(setting_number);
    LoadRunSetting(setting_number);
    LoadTimeSetting(setting_number);
    //LoadNetpieSetting();
}

void SettingParameter::LoadAll(int prog_number)
{
    LoadPositionSetting(prog_number);
    LoadRunSetting(prog_number);
    LoadTimeSetting(prog_number);

}
