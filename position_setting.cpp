#include "position_setting.h"
#include "ui_position_setting.h"
#include "setting.h"
#include "manual.h"
#include "QPixmap"
#include "QBitmap"

Position_setting::Position_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Position_setting)
{
    ui->setupUi(this);

    QPixmap pic1(":/Button/position setting/back position setting.png");
    QPixmap p1 = pic1.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p1.mask());

    QPixmap pic2(":/Button/position setting/down.png");
    QPixmap p2 = pic2.scaled(ui->down->size(),Qt::IgnoreAspectRatio);
    ui->down->setMask(p2.mask());

    QPixmap pic3(":/Button/position setting/manual button.png");
    QPixmap p3 = pic3.scaled(ui->manual->size(),Qt::IgnoreAspectRatio);
    ui->manual->setMask(p3.mask());

    QPixmap pic4(":/Button/position setting/save.png");
    QPixmap p4 = pic4.scaled(ui->save->size(),Qt::IgnoreAspectRatio);
    ui->save->setMask(p4.mask());

    QPixmap pic5(":/Button/position setting/up.png");
    QPixmap p5 = pic5.scaled(ui->up->size(),Qt::IgnoreAspectRatio);
    ui->up->setMask(p5.mask());
}

Position_setting::~Position_setting()
{
    delete ui;
}

void Position_setting::on_back_pressed()
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

void Position_setting::on_manual_pressed()
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




