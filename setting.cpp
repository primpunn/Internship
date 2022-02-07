#include "setting.h"
#include "ui_setting.h"
#include "position_setting.h"
#include "time_setting.h"
#include "run_setting.h"
#include "machine_status.h"
#include "QPixmap"
#include "QBitmap"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    this->setGeometry(parent->geometry());
    this->setParent(parent);
    /*ui->slide1->setChecked(machine_status.slide1);
    ui->slide2->setChecked(machine_status.slide2);
    ui->slide3->setChecked(machine_status.slide3);
    ui->slide4->setChecked(machine_status.slide4);
    ui->slide5->setChecked(machine_status.slide5);
    ui->slide6->setChecked(machine_status.slide6);
    ui->slide7->setChecked(machine_status.slide7);
    ui->slide8->setChecked(machine_status.slide8);
    ui->slide9->setChecked(machine_status.slide9);*/

    QPixmap pic1(":/Button/setting/back.png");
    QPixmap p1 = pic1.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p1.mask());

    QPixmap pic2(":/Button/setting/position.png");
    QPixmap p2 = pic2.scaled(ui->position->size(),Qt::IgnoreAspectRatio);
    ui->position->setMask(p2.mask());

    QPixmap pic3(":/Button/setting/run.png");
    QPixmap p3 = pic3.scaled(ui->run->size(),Qt::IgnoreAspectRatio);
    ui->run->setMask(p3.mask());

    QPixmap pic4(":/Button/setting/time.png");
    QPixmap p4 = pic4.scaled(ui->time->size(),Qt::IgnoreAspectRatio);
    ui->time->setMask(p4.mask());

    update_screen();
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_back_pressed()
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

void Setting::on_position_pressed()
{
    Position_setting *position_setting;
    position_setting = new Position_setting(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         position_setting->showFullScreen();
    #elif _WIN32
         position_setting->show();
    #elif __APPLE__
         position_setting->show();
    #endif
    this->hide();
    //delete this;
}

void Setting::on_time_pressed()
{
    Time_setting *time_setting;
    time_setting = new Time_setting(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         time_setting->showFullScreen();
    #elif _WIN32
         time_setting->show();
    #elif __APPLE__
         time_setting->show();
    #endif
    this->hide();
    //delete this;
}

void Setting::on_run_pressed()
{
    Run_setting *run_setting;
    run_setting = new Run_setting(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         run_setting->showFullScreen();
    #elif _WIN32
         run_setting->show();
    #elif __APPLE__
         run_setting->show();
    #endif
    this->hide();
    //delete this;
}

void Setting::update_screen()
{
    if (machine_status.slide[0].is_active == true)
        ui->slide1->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");
    else
        ui->slide1->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[1].is_active  == true)
        ui->slide2->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide2->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[2].is_active  == true)
        ui->slide3->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide3->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[3].is_active == true)
        ui->slide4->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide4->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[4].is_active  == true)
        ui->slide5->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide5->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[5].is_active  == true)
        ui->slide6->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide6->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[6].is_active  == true)
        ui->slide7->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide7->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[7].is_active  == true)
        ui->slide8->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide8->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");

    if (machine_status.slide[8].is_active  == true)
        ui->slide9->setStyleSheet("border-image:url(:/Button/main menu/on button.png);");
    else
        ui->slide9->setStyleSheet("border-image:url(:/Button/main menu/off button.png);");
}







