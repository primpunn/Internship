#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QScreen>
#include <QTimer>
#include "setting.h"
#include "dialog.h"
#include "manual.h"
#include "autorun.h"
#include "QPixmap"
#include "QBitmap"
#include "machine_status.h"
#include "main_success.h"
#include "QMessageBox"
#include "setting_selectprogram.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

    QPixmap pic(":/new/prefix1/GUI_Pic/start auto.png");
    QPixmap p = pic.scaled(ui->startauto->size(),Qt::IgnoreAspectRatio);
    ui->startauto->setMask(p.mask());

    QPixmap pic1(":/Button/main menu/HOME.png");
    QPixmap p1 = pic1.scaled(ui->home->size(),Qt::IgnoreAspectRatio);
    ui->home->setMask(p1.mask());

    QPixmap pic2(":/Button/main menu/MANUAL.png");
    QPixmap p2 = pic2.scaled(ui->manual->size(),Qt::IgnoreAspectRatio);
    ui->manual->setMask(p2.mask());

    QPixmap pic3(":/Button/main menu/SETTING.png");
    QPixmap p3 = pic3.scaled(ui->setting->size(),Qt::IgnoreAspectRatio);
    ui->setting->setMask(p3.mask());

    QPixmap pic4(":/Button/main menu/close.png");
    QPixmap p4 = pic4.scaled(ui->close->size(),Qt::IgnoreAspectRatio);
    ui->close->setMask(p4.mask());

    QPixmap pic5(":/Button/main menu/off button.png");
    QPixmap p5 = pic5.scaled(ui->slide1->size(),Qt::IgnoreAspectRatio);
    ui->slide1->setMask(p5.mask());

    QPixmap pic6(":/Button/main menu/on button.png");
    QPixmap p6 = pic6.scaled(ui->slide1->size(),Qt::IgnoreAspectRatio);
    ui->slide1->setMask(p6.mask());

    QPixmap pic7(":/Button/main menu/off button.png");
    QPixmap p7 = pic7.scaled(ui->slide2->size(),Qt::IgnoreAspectRatio);
    ui->slide2->setMask(p7.mask());

    QPixmap pic8(":/Button/main menu/on button.png");
    QPixmap p8 = pic8.scaled(ui->slide2->size(),Qt::IgnoreAspectRatio);
    ui->slide2->setMask(p8.mask());

    QPixmap pic9(":/Button/main menu/off button.png");
    QPixmap p9 = pic9.scaled(ui->slide3->size(),Qt::IgnoreAspectRatio);
    ui->slide3->setMask(p9.mask());

    QPixmap pic10(":/Button/main menu/on button.png");
    QPixmap p10 = pic10.scaled(ui->slide3->size(),Qt::IgnoreAspectRatio);
    ui->slide3->setMask(p10.mask());

    QPixmap pic11(":/Button/main menu/off button.png");
    QPixmap p11 = pic11.scaled(ui->slide4->size(),Qt::IgnoreAspectRatio);
    ui->slide4->setMask(p11.mask());

    QPixmap pic12(":/Button/main menu/on button.png");
    QPixmap p12 = pic12.scaled(ui->slide4->size(),Qt::IgnoreAspectRatio);
    ui->slide4->setMask(p12.mask());

    QPixmap pic13(":/Button/main menu/off button.png");
    QPixmap p13 = pic13.scaled(ui->slide5->size(),Qt::IgnoreAspectRatio);
    ui->slide5->setMask(p13.mask());

    QPixmap pic14(":/Button/main menu/on button.png");
    QPixmap p14 = pic14.scaled(ui->slide5->size(),Qt::IgnoreAspectRatio);
    ui->slide5->setMask(p14.mask());

    QPixmap pic15(":/Button/main menu/off button.png");
    QPixmap p15 = pic15.scaled(ui->slide6->size(),Qt::IgnoreAspectRatio);
    ui->slide6->setMask(p15.mask());

    QPixmap pic16(":/Button/main menu/on button.png");
    QPixmap p16 = pic16.scaled(ui->slide6->size(),Qt::IgnoreAspectRatio);
    ui->slide6->setMask(p16.mask());

    QPixmap pic17(":/Button/main menu/off button.png");
    QPixmap p17 = pic17.scaled(ui->slide7->size(),Qt::IgnoreAspectRatio);
    ui->slide7->setMask(p17.mask());

    QPixmap pic18(":/Button/main menu/on button.png");
    QPixmap p18 = pic18.scaled(ui->slide7->size(),Qt::IgnoreAspectRatio);
    ui->slide7->setMask(p18.mask());

    QPixmap pic19(":/Button/main menu/off button.png");
    QPixmap p19 = pic19.scaled(ui->slide8->size(),Qt::IgnoreAspectRatio);
    ui->slide8->setMask(p19.mask());

    QPixmap pic20(":/Button/main menu/on button.png");
    QPixmap p20 = pic20.scaled(ui->slide8->size(),Qt::IgnoreAspectRatio);
    ui->slide8->setMask(p20.mask());

    QPixmap pic21(":/Button/main menu/off button.png");
    QPixmap p21 = pic21.scaled(ui->slide9->size(),Qt::IgnoreAspectRatio);
    ui->slide9->setMask(p21.mask());

    QPixmap pic22(":/Button/main menu/on button.png");
    QPixmap p22 = pic22.scaled(ui->slide9->size(),Qt::IgnoreAspectRatio);
    ui->slide9->setMask(p22.mask());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_close_clicked()
{
        close();
}




void MainWindow::on_setting_clicked()
{
    Setting_selectprogram *ss;
    ss = new Setting_selectprogram(this);

    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         ss->showFullScreen();
    #elif _WIN32
         ss->show();
    #elif __APPLE__
         ss->show();
    #endif
}

void MainWindow::on_setting_pressed()
{
    Setting_selectprogram* select_program;
    select_program = new Setting_selectprogram(this);




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
}

void MainWindow::on_startauto_pressed()
{
    Autorun *autorun;
    autorun = new Autorun(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         autorun->showFullScreen();
    #elif _WIN32
         autorun->show();
    #elif __APPLE__
         autorun->show();
    #endif
    this->hide();
}

void MainWindow::on_manual_pressed()
{
    Manual *manual;
    manual = new Manual(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         manual->showFullScreen();
    #elif _WIN32
         manual->show();
    #elif __APPLE__
         manual->show();
    #endif
    this->hide();
}

void MainWindow::on_slide1_pressed()
{
   //machine_status.slide1 = ui->slide1->isChecked();
}

void MainWindow::on_slide1_toggled(bool checked)
{
    machine_status.slide[0].is_active = checked;
}

void MainWindow::on_slide2_toggled(bool checked)
{
    machine_status.slide[1].is_active = checked;
}

void MainWindow::on_slide3_toggled(bool checked)
{
    machine_status.slide[2].is_active = checked;
}

void MainWindow::on_slide4_toggled(bool checked)
{
    machine_status.slide[3].is_active = checked;
}

void MainWindow::on_slide5_toggled(bool checked)
{
    machine_status.slide[4].is_active = checked;
}

void MainWindow::on_slide6_toggled(bool checked)
{
    machine_status.slide[5].is_active = checked;
}

void MainWindow::on_slide7_toggled(bool checked)
{
    machine_status.slide[6].is_active = checked;
}

void MainWindow::on_slide8_toggled(bool checked)
{
    machine_status.slide[7].is_active = checked;
}

void MainWindow::on_slide9_toggled(bool checked)
{
    machine_status.slide[8].is_active = checked;
}

void MainWindow::on_home_clicked()
{
    /*QMessageBox msgBox;
    msgBox.setStyleSheet("background-color: rgb(101, 99, 100)");
    msgBox.setText("SUCCESS");
    msgBox.exec();
    msgBox.setStyleSheet("QLabel{min-width: 700px;}");*/

    Main_success*success;
    success = new Main_success(this);
    //setting->parent = this;
    //setting->showFullScreen();
    //setting->show();
    #ifdef __linux__
         success->showFullScreen();
    #elif _WIN32
         success->show();
    #elif __APPLE__
         success->show();
    #endif
    success->Close_LastMsg();
    delete success;

}
