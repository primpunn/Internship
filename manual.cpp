#include "manual.h"
#include "ui_manual.h"
#include "machine_status.h"
#include "TabProxy.h"
#include "QPixmap"
#include "QBitmap"

Manual::Manual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manual)
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

    QPixmap pic1(":/Button/manual/back.png");
    QPixmap p1 = pic1.scaled(ui->back->size(),Qt::IgnoreAspectRatio);
    ui->back->setMask(p1.mask());

    QPixmap pic2(":/Button/manual/up.png");
    QPixmap p2 = pic2.scaled(ui->up->size(),Qt::IgnoreAspectRatio);
    ui->up->setMask(p2.mask());

    QPixmap pic3(":/Button/manual/down.png");
    QPixmap p3 = pic3.scaled(ui->down->size(),Qt::IgnoreAspectRatio);
    ui->down->setMask(p3.mask());

    QPixmap pic4(":/Button/manual/up middle.png");
    QPixmap p4 = pic4.scaled(ui->upmiddle->size(),Qt::IgnoreAspectRatio);
    ui->upmiddle->setMask(p4.mask());

    QPixmap pic5(":/Button/manual/right middle.png");
    QPixmap p5 = pic5.scaled(ui->rightmiddle->size(),Qt::IgnoreAspectRatio);
    ui->rightmiddle->setMask(p5.mask());

    QPixmap pic6(":/Button/manual/down middle.png");
    QPixmap p6 = pic6.scaled(ui->downmiddle->size(),Qt::IgnoreAspectRatio);
    ui->downmiddle->setMask(p6.mask());

    QPixmap pic7(":/Button/manual/left middle.png");
    QPixmap p7 = pic7.scaled(ui->leftmiddle->size(),Qt::IgnoreAspectRatio);
    ui->leftmiddle->setMask(p7.mask());

    QPixmap pic8(":/Button/manual/go.png");
    QPixmap p8 = pic8.scaled(ui->go->size(),Qt::IgnoreAspectRatio);
    ui->go->setMask(p8.mask());

    QPixmap pic9(":/Button/manual/rotate.png");
    QPixmap p9 = pic9.scaled(ui->rotatebutton->size(),Qt::IgnoreAspectRatio);
    ui->rotatebutton->setMask(p9.mask());

    QPixmap pic10(":/Button/manual/release.png");
    QPixmap p10 = pic10.scaled(ui->release->size(),Qt::IgnoreAspectRatio);
    ui->release->setMask(p10.mask());

    QPixmap pic11(":/Button/manual/right cylinder.png");
    QPixmap p11 = pic11.scaled(ui->rightcylinder->size(),Qt::IgnoreAspectRatio);
    ui->rightcylinder->setMask(p11.mask());

    QPixmap pic12(":/Button/manual/left cylinder.png");
    QPixmap p12 = pic12.scaled(ui->leftcylinder->size(),Qt::IgnoreAspectRatio);
    ui->leftcylinder->setMask(p12.mask());

    QPixmap pic13(":/Button/manual/heater.png");
    QPixmap p13 = pic13.scaled(ui->heater_3->size(),Qt::IgnoreAspectRatio);
    ui->heater_3->setMask(p13.mask());

    QPixmap pic14(":/Button/manual/water.png");
    QPixmap p14 = pic14.scaled(ui->water_2->size(),Qt::IgnoreAspectRatio);
    ui->water_2->setMask(p14.mask());

    QPixmap pic15(":/Button/manual/right.png");
    QPixmap p15 = pic15.scaled(ui->right->size(),Qt::IgnoreAspectRatio);
    ui->right->setMask(p15.mask());

    QPixmap pic16(":/Button/manual/left.png");
    QPixmap p16 = pic16.scaled(ui->left->size(),Qt::IgnoreAspectRatio);
    ui->left->setMask(p16.mask());

    QPixmap pic17(":/Button/manual/0.1.png");
    QPixmap p17 = pic17.scaled(ui->x01->size(),Qt::IgnoreAspectRatio);
    ui->x01->setMask(p17.mask());

    QPixmap pic18(":/Button/manual/1.png");
    QPixmap p18 = pic18.scaled(ui->x1->size(),Qt::IgnoreAspectRatio);
    ui->x1->setMask(p18.mask());

    QPixmap pic19(":/Button/manual/fast.png");
    QPixmap p19 = pic19.scaled(ui->fast->size(),Qt::IgnoreAspectRatio);
    ui->fast->setMask(p19.mask());

    ui->widget->tabBar()->setStyle(new CustomTabStyle);
    //ui->tabWidgetPage1->tabBar()->setStyle(new CustomTabStyle);
}

Manual::~Manual()
{
    delete ui;
}

void Manual::on_back_pressed()
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

void Manual::on_water_2_pressed()
{
    ui->water_2->setStyleSheet("border-image:url(:/Button/manual/water on.png);");
    ui->heater_3->setStyleSheet("border-image:url(:/Button/manual/heater.png);");
}


void Manual::on_heater_3_pressed()
{
    ui->water_2->setStyleSheet("border-image:url(:/Button/manual/water.png);");
    ui->heater_3->setStyleSheet("border-image:url(:/Button/manual/heater on.png);");
}

void Manual::on_x01_pressed()
{
    ui->x01->setStyleSheet("border-image:url(:/Button/manual/0.1 on.png);");
    ui->x1->setStyleSheet("border-image:url(:/Button/manual/1.png);");
    ui->fast->setStyleSheet("border-image:url(:/Button/manual/fast.png);");
}


void Manual::on_x1_pressed()
{
    ui->x01->setStyleSheet("border-image:url(:/Button/manual/0.1.png);");
    ui->x1->setStyleSheet("border-image:url(:/Button/manual/1 on.png);");
    ui->fast->setStyleSheet("border-image:url(:/Button/manual/fast.png);");
}

void Manual::on_fast_pressed()
{
    ui->x01->setStyleSheet("border-image:url(:/Button/manual/0.1.png);");
    ui->x1->setStyleSheet("border-image:url(:/Button/manual/1.png);");
    ui->fast->setStyleSheet("border-image:url(:/Button/manual/fast on.png);");
}
