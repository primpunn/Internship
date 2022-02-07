#ifndef SETTINGPARAMETER_H
#define SETTINGPARAMETER_H


#include <QList>
#include <QString>
#include <QStringList>
#include <QSettings>


//#define COUNT_PER_REV_X         3200
//#define MM_PER_REV_X            90
//#define SCALE_AXIS_X            COUNT_PER_REV_X/MM_PER_REV_X
//#define SCALE_AXIS_X            35.5555555556   //count per mm
#define SCALE_AXIS_X            100.0 // count per mm
#define MAX_AXIS_X              703.12         // mm
#define MIN_AXIS_X              -7.0        // mm

//#define COUNT_PER_REV_Y         3200
//#define MM_PER_REV_Y            70
//#define SCALE_AXIS_Y            COUNT_PER_REV_Y/MM_PER_REV_Y
//#define SCALE_AXIS_Y   77700070007000000000         45.7142857143   //count per mm
#define SCALE_AXIS_Y            -100.0  //countA per mm
#define MAX_AXIS_Y              455.6        // mm
#define MIN_AXIS_Y              -5.47           // mm

//#define COUNT_PER_REV_Z         1600
//#define MM_PER_REV_Z            12
//#define SCALE_AXIS_Z            COUNT_PER_REV_Z/MM_PER_REV_Z
//#define SCALE_AXIS_Z            133.33333       //count per mm
#define SCALE_AXIS_Z            -100.0       //count per mm
#define MAX_AXIS_Z              0.25           // mm
#define MIN_AXIS_Z              -138.75        // mm

#define HOME_POS_Y              0           // mm
#define HOME_POS_X              0           // mm
#define HOME_POS_Z              0           // mm

#define VEL_AXIS_X              50000.0           // 0.01 mm/s
#define VEL_AXIS_Y              50000.0           // 0.01 mm/s
#define VEL_AXIS_Z              20000.0           // 0.01 mm/s
#define VEL_AXIS_Z_DIPS         90000.0           // 0.01 mm/s
#define VEL_AXIS_Z_UP           50000.0           // 0.01 mm/s
#define VEL_CLEAR_ERROR         3000.0

#define ACC_AXIS_X              20.0             // 0.01 G
#define ACC_AXIS_Y              20.0             // 0.01 G
#define ACC_AXIS_Z              100.0             // 0.01 G

#define VEL_AVG_X           210.0 // for Planning
#define VEL_AVG_Y           210.0
#define VEL_AVG_Z           100
#define VEL_AVG_Z_UP        150
#define VEL_AVG_Z_DIPS      45
// mm/s2 per G -9806.65


#define STATION_COUNT 31 //9 for slide, 9 for reagent, 12 for nozzle, 1 for drop

enum class station_type
{
    slide, reagent, nozzle, drop
};

class PositionSetting
{
public:
    QString name;
    station_type type;
    double x;
    double y;
    double z;
    //double shake_distance;
    double width;
    double height;
    bool enable;
};

class RunSetting
{
public:
    QString station_name;
    int soak_pattern;
    double soak_volumn;
    double soak_sec;
    int delay_before; //msec
    int delay_after; //msec
    double allow_wait_sec;
};

class DelayTimeSetting
{
    public:
        double GrabDelay;
        double ReleaseDelay;
        double WaterOn;
        double DryDelay;
        double HeatDelay;
};

class NetpieSetting
{
    public:
        QString AppID;
        QString MachineName;
        QString Key;
        QString Secret;
        QString ClientKey;
        QString ClientSecret;

};


class SettingParameter
{
public:
    SettingParameter();
    QList<PositionSetting*> PositionList;
    QList<RunSetting*> RunList;
    DelayTimeSetting timesetting;
    NetpieSetting netpiesetting;

    int setting_number;
    int current_setting_screen;

    QStringList program_setting_list;

    //QSettings allsetting;

    //double scaleX;
    //double scaleY;
    //double scaleZ;

    void LoadSettingName();

    void SaveCurrentSettingNumber(int number);
    void LoadCurrentSettingNumber();

    void LoadPositionSetting(int set_no);
    void SavePositionSetting(int set_no);
    void LoadRunSetting(int set_no);
    void SaveRunSetting(int set_no);
    void LoadTimeSetting(int set_no);
    void SaveTimeSetting(int set_no);
    void LoadNetpieSetting();
    void LoadAll();
    void LoadAll(int prog_number);


};

extern SettingParameter setting_param;
extern const station_type sta_type[STATION_COUNT];

#endif // SETTINGPARAMETER_H
