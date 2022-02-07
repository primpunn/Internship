#include "time_setting.h"
#include "ui_time_setting.h"
#include "manual.h"
#include "QPixmap"
#include "QBitmap"
#include <QTimer>

int hold = 0;

Time_setting::Time_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Time_setting)
{
    ui->setupUi(this);

    QPixmap pic1(":/Button/position setting/back position setting.png");
    QPixmap p1 = pic1.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p1.mask());

    QPixmap pic2(":/Button/position setting/manual button.png");
    QPixmap p2 = pic2.scaled(ui->manual->size(),Qt::IgnoreAspectRatio);
    ui->manual->setMask(p2.mask());

    QPixmap pic3(":/Button/position setting/save.png");
    QPixmap p3 = pic3.scaled(ui->save->size(),Qt::IgnoreAspectRatio);
    ui->save->setMask(p3.mask());

    connect(&timer_up,SIGNAL(timeout()), this, SLOT(plus1()));
    connect(&timer_down,SIGNAL(timeout()), this, SLOT(minus1()));

    connect(&timer_up,SIGNAL(timeout()), this, SLOT(plus2()));
    connect(&timer_down,SIGNAL(timeout()), this, SLOT(minus2()));

    connect(&timer_up,SIGNAL(timeout()), this, SLOT(plus3()));
    connect(&timer_down,SIGNAL(timeout()), this, SLOT(minus3()));
}
Time_setting::~Time_setting()
{
    delete ui;
}
/*void Time_setting::plus1()
{
    ui->grab_slide->setValue(ui->grab_slide->value()+1);
}
void Time_setting::minus1()
{
    ui->grab_slide->setValue(ui->grab_slide->value()-1);
}*/
void Time_setting::on_back_pressed()
{
    #ifdef __linux__
        this->parentWidget()->showFullScreen();
    #elif _WIN32
        this->parentWidget()->show();
    #elif __APPLE__
        this->parentWidget()->show();
    #endif

    //this->hide();
    delete this;
}

void Time_setting::on_manual_pressed()
{
    Manual *manual;
    manual = new Manual(this);
    #ifdef __linux__
         manual->showFullScreen();
    #elif _WIN32
         manual->show();
    #elif __APPLE__
         manual->show();
    #endif
    this->hide();
}

void Time_setting::on_grab_slide_valueChanged(int value)
{
    ui->label_1->setText(QString::number(value));
}
void Time_setting::on_release_slide_valueChanged(int value)
{
    ui->label_2->setText(QString::number(value));
}
void Time_setting::on_absorbsub_slide_valueChanged(int value)
{
    ui->label_3->setText(QString::number(value));
}
void Time_setting::on_releasesub_slide_valueChanged(int value)
{
    ui->label_4->setText(QString::number(value));
}
void Time_setting::on_heater_slide_valueChanged(int value)
{
    ui->label_5->setText(QString::number(value));
}
void Time_setting::on_water_slide_valueChanged(int value)
{
    ui->label_6->setText(QString::number(value));
}
void Time_setting::on_rotate_slide_valueChanged(int value)
{
    ui->label_7->setText(QString::number(value));
}

void Time_setting::plus1()
{
    double step_val = 1;
    double st =  step_val;
    double value1 = ui->grab_slide->value();
    double min_val = 0;
    double max_val = 10000;


    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value1 >= min_val)&&( value1 < max_val))
        {
            value1 = value1 + st;
        }

        ui->grab_slide->setValue(value1);
    }
}
void Time_setting::minus1()
{
    double step_val = 1;
    double st =  step_val;
    double value1 = ui->grab_slide->value();
    double min_val = 0;
    double max_val = 10000;

    static int hold = 0;
    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value1 >= min_val)&&( value1 < max_val))
        {
            value1 = value1 - st;
        }

        ui->grab_slide->setValue(value1);
    }
}
void Time_setting::on_plus1_pressed()
{
    hold = 0;
    timer_up.start(100);
}
void Time_setting::on_plus1_released()
{
    timer_up.stop();
}
void Time_setting::on_minus1_pressed()
{
    hold = 0;
    timer_down.start(100);
}
void Time_setting::on_minus1_released()
{
    timer_down.stop();
}

void Time_setting::plus2()
{
    double step_val = 1;
    double st =  step_val;
    double value2 = ui->release_slide->value();
    double min_val = 0;
    double max_val = 10000;


    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value2 >= min_val)&&( value2 < max_val))
        {
            value2 = value2 + st;
        }

        ui->release_slide->setValue(value2);
    }
}
void Time_setting::minus2()
{
    double step_val = 1;
    double st =  step_val;
    double value2 = ui->release_slide->value();
    double min_val = 0;
    double max_val = 10000;

    static int hold = 0;
    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value2 >= min_val)&&( value2 < max_val))
        {
            value2 = value2 - st;
        }

        ui->release_slide->setValue(value2);
    }
}
void Time_setting::on_plus2_pressed()
{
    hold = 0;
    timer_up.start(100);
}
void Time_setting::on_plus2_released()
{
    timer_up.stop();
}
void Time_setting::on_minus2_pressed()
{
    hold = 0;
    timer_down.start(100);
}
void Time_setting::on_minus2_released()
{
    timer_down.stop();
}

void Time_setting::plus3()
{
    double step_val = 1;
    double st =  step_val;
    double value3 = ui->absorbsub_slide->value();
    double min_val = 0;
    double max_val = 10000;


    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value3 >= min_val)&&( value3 < max_val))
        {
            value3 = value3 + st;
        }

        ui->absorbsub_slide->setValue(value3);
    }
}
void Time_setting::minus3()
{
    double step_val = 1;
    double st =  step_val;
    double value3 = ui->absorbsub_slide->value();
    double min_val = 0;
    double max_val = 10000;

    static int hold = 0;
    hold = hold + 1;
    if (hold > 10)
        st = 10*step_val;

    if (hold > 20)
        st = 100*step_val;

    if (st > 1)
        st = 1;

    if ((hold > 3))
    {
        if ((value3 >= min_val)&&( value3 < max_val))
        {
            value3 = value3 - st;
        }

        ui->absorbsub_slide->setValue(value3);
    }
}
void Time_setting::on_plus3_pressed()
{
    hold = 0;
    timer_up.start(100);
}
void Time_setting::on_plus3_released()
{
    timer_up.stop();
}
void Time_setting::on_minus3_pressed()
{
    hold = 0;
    timer_down.start(100);
}
void Time_setting::on_minus3_released()
{
    timer_down.stop();
}
