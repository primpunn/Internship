#include "setting_selectprogram.h"
#include "ui_setting_selectprogram.h"
#include "setting.h"
#include "QPixmap"
#include "QBitmap"
#include "setting.h"

Setting_selectprogram::Setting_selectprogram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting_selectprogram)
{
    ui->setupUi(this);
    this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::Dialog);
        ;ui->comboBox->addItem("Standrad")
        ;ui->comboBox->addItem("Program 1")
        ;ui->comboBox->addItem("Program 2")
        ;ui->comboBox->addItem("Program 3")
        ;ui->comboBox->addItem("Program 4")
        ;ui->comboBox->addItem("Program 5")
        ;ui->comboBox->addItem("Program 6")
        ;ui->comboBox->addItem("Program 7")
        ;ui->comboBox->addItem("Program 8")
        ;ui->comboBox->addItem("Program 9")
        ;ui->comboBox->addItem("Program 10");

    QPixmap pic(":/Button/setting_selectprogram/ok.png");
    QPixmap p = pic.scaled(ui->ok->size(),Qt::IgnoreAspectRatio);
    ui->ok->setMask(p.mask());

    QPixmap pic1(":/Button/setting_selectprogram/cancel.png");
    QPixmap p1 = pic1.scaled(ui->cancel->size(),Qt::IgnoreAspectRatio);
    ui->cancel->setMask(p1.mask());
}


Setting_selectprogram::~Setting_selectprogram()
{
    delete ui;
}

void Setting_selectprogram::on_pushButton_clicked(bool checked)
{
    Setting*setting;
    setting = new Setting(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         setting->showFullScreen();
    #elif _WIN32
         setting->show();
    #elif __APPLE__
         setting->show();
    #endif
    this->hide();
    //delete this;

}

void Setting_selectprogram::on_cancel_pressed()
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

/*void Setting_selectprogram::on_ok_pressed()
{
    Setting *setting;
    setting = new Setting(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         setting->showFullScreen();
    #elif _WIN32
         setting->show();
    #elif __APPLE__
         setting->show();
    #endif
    this->hide();
    this->accept();
}*/
