#include "autorun.h"
#include "ui_autorun.h"
#include "machine_status.h"
#include "QPixmap"
#include "QBitmap"

Autorun::Autorun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autorun)
{
    ui->setupUi(this);
    /*ui->slide1->setChecked(machine_status.slide1);
    ui->slide2->setChecked(machine_status.slide2);
    ui->slide3->setChecked(machine_status.slide3);
    ui->slide4->setChecked(machine_status.slide4);
    ui->slide5->setChecked(machine_status.slide5);
    ui->slide6->setChecked(machine_status.slide6);
    ui->slide7->setChecked(machine_status.slide7);
    ui->slide8->setChecked(machine_status.slide8);
    ui->slide9->setChecked(machine_status.slide9);*/

    QPixmap pic1(":/Button/autorun/back.png");
    QPixmap p1 = pic1.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p1.mask());

    QPixmap pic2(":/Button/autorun/cancel.png");
    QPixmap p2 = pic2.scaled(ui->cancel->size(),Qt::IgnoreAspectRatio);
    ui->cancel->setMask(p2.mask());

    QPixmap pic3(":/Button/autorun/pause.png");
    QPixmap p3 = pic3.scaled(ui->pause->size(),Qt::IgnoreAspectRatio);
    ui->pause->setMask(p3.mask());

    update_screen();
}

Autorun::~Autorun()
{
    delete ui;
}

void Autorun::on_back_pressed()
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

void Autorun::update_screen()
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
