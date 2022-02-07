#include "run_setting.h"
#include "ui_run_setting.h"
#include "QPixmap"
#include "QBitmap"

Run_setting::Run_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Run_setting)
{
    ui->setupUi(this);

    QPixmap pic1(":/Button/autorun setting/add.png");
    QPixmap p1 = pic1.scaled(ui->add->size(),Qt::IgnoreAspectRatio);
    ui->add->setMask(p1.mask());

    QPixmap pic2(":/Button/autorun setting/back.png");
    QPixmap p2 = pic2.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p2.mask());

    QPixmap pic3(":/Button/autorun setting/remove.png");
    QPixmap p3 = pic3.scaled(ui->remove->size(),Qt::IgnoreAspectRatio);
    ui->remove->setMask(p3.mask());

    QPixmap pic4(":/Button/autorun setting/save.png");
    QPixmap p4 = pic4.scaled(ui->save->size(),Qt::IgnoreAspectRatio);
    ui->save->setMask(p4.mask());
}

Run_setting::~Run_setting()
{
    delete ui;
}

void Run_setting::on_back_pressed()
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
