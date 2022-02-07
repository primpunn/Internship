/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QPushButton *run;
    QPushButton *position;
    QPushButton *time;
    QLabel *label_heater;
    QLabel *label_rotate;
    QLabel *label_suction;
    QPushButton *back;
    QLabel *holder_x;
    QLabel *holder_y;
    QLabel *holder_z;
    QLabel *heater;
    QLabel *cylinder;
    QLabel *slide1;
    QLabel *slide2;
    QLabel *slide3;
    QLabel *slide4;
    QLabel *slide5;
    QLabel *slide6;
    QLabel *slide7;
    QLabel *slide8;
    QLabel *slide9;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(1280, 800);
        Setting->setStyleSheet(QString::fromUtf8("QDialog#Setting {\n"
"background-image: url(:/BG/setting/setting page.jpg);\n"
"}\n"
"\n"
"QPushButton#position {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/setting/position.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#time {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/setting/time.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#run {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/setting/run.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide1{\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide1:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide2 {\n"
"background-color:transparent;\n"
"border-i"
                        "mage: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide2:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide3 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide3:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide4 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide4:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide5 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"Q"
                        "PushButton#slide5:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide6 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide6:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide7 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide7:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide8 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide8:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide9 {\n"
"backgr"
                        "ound-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide9:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/setting/back.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#x{	\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#y{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#z{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#heater{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#cylinder{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
""));
        run = new QPushButton(Setting);
        run->setObjectName(QString::fromUtf8("run"));
        run->setGeometry(QRect(660, 510, 441, 221));
        position = new QPushButton(Setting);
        position->setObjectName(QString::fromUtf8("position"));
        position->setGeometry(QRect(660, 110, 441, 221));
        position->setStyleSheet(QString::fromUtf8(""));
        time = new QPushButton(Setting);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(800, 310, 441, 221));
        label_heater = new QLabel(Setting);
        label_heater->setObjectName(QString::fromUtf8("label_heater"));
        label_heater->setGeometry(QRect(390, 480, 47, 14));
        label_rotate = new QLabel(Setting);
        label_rotate->setObjectName(QString::fromUtf8("label_rotate"));
        label_rotate->setGeometry(QRect(390, 520, 47, 14));
        label_suction = new QLabel(Setting);
        label_suction->setObjectName(QString::fromUtf8("label_suction"));
        label_suction->setGeometry(QRect(390, 560, 47, 14));
        back = new QPushButton(Setting);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(613, 718, 680, 90));
        back->setCheckable(true);
        holder_x = new QLabel(Setting);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(128, 227, 47, 41));
        holder_y = new QLabel(Setting);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(195, 227, 47, 41));
        holder_z = new QLabel(Setting);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(263, 227, 47, 41));
        heater = new QLabel(Setting);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(339, 227, 47, 41));
        cylinder = new QLabel(Setting);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(405, 227, 47, 41));
        slide1 = new QLabel(Setting);
        slide1->setObjectName(QString::fromUtf8("slide1"));
        slide1->setGeometry(QRect(200, 340, 81, 51));
        slide2 = new QLabel(Setting);
        slide2->setObjectName(QString::fromUtf8("slide2"));
        slide2->setGeometry(QRect(200, 380, 81, 51));
        slide3 = new QLabel(Setting);
        slide3->setObjectName(QString::fromUtf8("slide3"));
        slide3->setGeometry(QRect(200, 420, 81, 51));
        slide4 = new QLabel(Setting);
        slide4->setObjectName(QString::fromUtf8("slide4"));
        slide4->setGeometry(QRect(200, 460, 81, 51));
        slide5 = new QLabel(Setting);
        slide5->setObjectName(QString::fromUtf8("slide5"));
        slide5->setGeometry(QRect(200, 500, 81, 51));
        slide6 = new QLabel(Setting);
        slide6->setObjectName(QString::fromUtf8("slide6"));
        slide6->setGeometry(QRect(200, 540, 81, 51));
        slide7 = new QLabel(Setting);
        slide7->setObjectName(QString::fromUtf8("slide7"));
        slide7->setGeometry(QRect(200, 580, 81, 51));
        slide8 = new QLabel(Setting);
        slide8->setObjectName(QString::fromUtf8("slide8"));
        slide8->setGeometry(QRect(360, 340, 81, 51));
        slide9 = new QLabel(Setting);
        slide9->setObjectName(QString::fromUtf8("slide9"));
        slide9->setGeometry(QRect(360, 380, 81, 51));
        slide9->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", nullptr));
        run->setText(QString());
        position->setText(QString());
        time->setText(QString());
        label_heater->setText(QString());
        label_rotate->setText(QString());
        label_suction->setText(QString());
        back->setText(QString());
        holder_x->setText(QString());
        holder_y->setText(QString());
        holder_z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
        slide1->setText(QString());
        slide2->setText(QString());
        slide3->setText(QString());
        slide4->setText(QString());
        slide5->setText(QString());
        slide6->setText(QString());
        slide7->setText(QString());
        slide8->setText(QString());
        slide9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
