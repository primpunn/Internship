/********************************************************************************
** Form generated from reading UI file 'time_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_SETTING_H
#define UI_TIME_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Time_setting
{
public:
    QSlider *release_slide;
    QSlider *grab_slide;
    QSlider *absorbsub_slide;
    QSlider *releasesub_slide;
    QSlider *heater_slide;
    QSlider *water_slide;
    QSlider *rotate_slide;
    QPushButton *manual;
    QPushButton *save;
    QPushButton *back;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *minus1;
    QPushButton *plus1;
    QPushButton *plus2;
    QPushButton *plus3;
    QPushButton *plus4;
    QPushButton *minus2;
    QPushButton *minus3;
    QPushButton *minus4;
    QPushButton *minus5;
    QPushButton *minus6;
    QPushButton *minus7;
    QPushButton *plus5;
    QPushButton *plus6;
    QPushButton *plus7;

    void setupUi(QDialog *Time_setting)
    {
        if (Time_setting->objectName().isEmpty())
            Time_setting->setObjectName(QString::fromUtf8("Time_setting"));
        Time_setting->resize(1280, 800);
        Time_setting->setStyleSheet(QString::fromUtf8("QDialog#Time_setting {\n"
"background-image: url(:/BG/time setting/time setting.jpg);\n"
"}\n"
"\n"
"QPushButton#manual {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/position setting/manual button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#save {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/position setting/save.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/position setting/back position setting.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#minus1 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus1:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton"
                        "#plus1 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus1:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus2:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus2:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus3 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"backgr"
                        "ound-repeat: none;\n"
"}\n"
"QPushButton#minus3:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus3 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus3:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus4 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus4:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus4 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus4:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus5 "
                        "{\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus5:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus5 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus5:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus6 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus6:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus6 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-r"
                        "epeat: none;\n"
"}\n"
"QPushButton#plus6:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QPushButton#minus7 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/minus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#minus7:pressed {\n"
"border-image: url(:/Button/time setting/minus on.png);\n"
"}\n"
"\n"
"QPushButton#plus7 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/plus.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#plus7:pressed {\n"
"border-image: url(:/Button/time setting/plus on.png);\n"
"}\n"
"\n"
"QLabel#label_1 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: n"
                        "one;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_3 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_4 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_5 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_6 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#label_7 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/time setting/label.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
""));
        release_slide = new QSlider(Time_setting);
        release_slide->setObjectName(QString::fromUtf8("release_slide"));
        release_slide->setGeometry(QRect(100, 340, 451, 41));
        release_slide->setMaximum(10000);
        release_slide->setOrientation(Qt::Horizontal);
        grab_slide = new QSlider(Time_setting);
        grab_slide->setObjectName(QString::fromUtf8("grab_slide"));
        grab_slide->setGeometry(QRect(100, 230, 451, 41));
        grab_slide->setMaximum(10000);
        grab_slide->setSingleStep(1);
        grab_slide->setOrientation(Qt::Horizontal);
        absorbsub_slide = new QSlider(Time_setting);
        absorbsub_slide->setObjectName(QString::fromUtf8("absorbsub_slide"));
        absorbsub_slide->setGeometry(QRect(100, 450, 451, 41));
        absorbsub_slide->setMaximum(10000);
        absorbsub_slide->setOrientation(Qt::Horizontal);
        releasesub_slide = new QSlider(Time_setting);
        releasesub_slide->setObjectName(QString::fromUtf8("releasesub_slide"));
        releasesub_slide->setGeometry(QRect(100, 570, 451, 41));
        releasesub_slide->setMaximum(10000);
        releasesub_slide->setOrientation(Qt::Horizontal);
        heater_slide = new QSlider(Time_setting);
        heater_slide->setObjectName(QString::fromUtf8("heater_slide"));
        heater_slide->setGeometry(QRect(730, 220, 451, 41));
        heater_slide->setMaximum(10000);
        heater_slide->setOrientation(Qt::Horizontal);
        water_slide = new QSlider(Time_setting);
        water_slide->setObjectName(QString::fromUtf8("water_slide"));
        water_slide->setGeometry(QRect(730, 380, 451, 41));
        water_slide->setMaximum(10000);
        water_slide->setOrientation(Qt::Horizontal);
        rotate_slide = new QSlider(Time_setting);
        rotate_slide->setObjectName(QString::fromUtf8("rotate_slide"));
        rotate_slide->setGeometry(QRect(730, 550, 451, 41));
        rotate_slide->setMaximum(10000);
        rotate_slide->setOrientation(Qt::Horizontal);
        manual = new QPushButton(Time_setting);
        manual->setObjectName(QString::fromUtf8("manual"));
        manual->setGeometry(QRect(470, 714, 288, 90));
        save = new QPushButton(Time_setting);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(751, 713, 268, 90));
        back = new QPushButton(Time_setting);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(1014, 712, 270, 90));
        label_1 = new QLabel(Time_setting);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(290, 260, 47, 41));
        QFont font;
        font.setPointSize(12);
        label_1->setFont(font);
        label_1->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Time_setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 370, 81, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Time_setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 480, 47, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Time_setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 600, 47, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Time_setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(940, 250, 47, 41));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Time_setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(940, 410, 47, 41));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Time_setting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(940, 580, 47, 51));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        minus1 = new QPushButton(Time_setting);
        minus1->setObjectName(QString::fromUtf8("minus1"));
        minus1->setGeometry(QRect(110, 265, 30, 30));
        minus1->setCheckable(true);
        plus1 = new QPushButton(Time_setting);
        plus1->setObjectName(QString::fromUtf8("plus1"));
        plus1->setGeometry(QRect(510, 265, 30, 30));
        plus1->setCheckable(true);
        plus2 = new QPushButton(Time_setting);
        plus2->setObjectName(QString::fromUtf8("plus2"));
        plus2->setGeometry(QRect(510, 380, 30, 30));
        plus2->setCheckable(true);
        plus3 = new QPushButton(Time_setting);
        plus3->setObjectName(QString::fromUtf8("plus3"));
        plus3->setGeometry(QRect(510, 490, 30, 30));
        plus3->setCheckable(true);
        plus4 = new QPushButton(Time_setting);
        plus4->setObjectName(QString::fromUtf8("plus4"));
        plus4->setGeometry(QRect(510, 610, 30, 30));
        plus4->setCheckable(true);
        minus2 = new QPushButton(Time_setting);
        minus2->setObjectName(QString::fromUtf8("minus2"));
        minus2->setGeometry(QRect(110, 380, 30, 30));
        minus2->setCheckable(true);
        minus3 = new QPushButton(Time_setting);
        minus3->setObjectName(QString::fromUtf8("minus3"));
        minus3->setGeometry(QRect(110, 490, 30, 30));
        minus3->setCheckable(true);
        minus4 = new QPushButton(Time_setting);
        minus4->setObjectName(QString::fromUtf8("minus4"));
        minus4->setGeometry(QRect(110, 610, 30, 30));
        minus4->setCheckable(true);
        minus5 = new QPushButton(Time_setting);
        minus5->setObjectName(QString::fromUtf8("minus5"));
        minus5->setGeometry(QRect(740, 260, 30, 30));
        minus5->setCheckable(true);
        minus6 = new QPushButton(Time_setting);
        minus6->setObjectName(QString::fromUtf8("minus6"));
        minus6->setGeometry(QRect(740, 420, 30, 30));
        minus6->setCheckable(true);
        minus7 = new QPushButton(Time_setting);
        minus7->setObjectName(QString::fromUtf8("minus7"));
        minus7->setGeometry(QRect(740, 590, 30, 30));
        minus7->setCheckable(true);
        plus5 = new QPushButton(Time_setting);
        plus5->setObjectName(QString::fromUtf8("plus5"));
        plus5->setGeometry(QRect(1140, 260, 30, 30));
        plus5->setCheckable(true);
        plus6 = new QPushButton(Time_setting);
        plus6->setObjectName(QString::fromUtf8("plus6"));
        plus6->setGeometry(QRect(1140, 420, 30, 30));
        plus6->setCheckable(true);
        plus7 = new QPushButton(Time_setting);
        plus7->setObjectName(QString::fromUtf8("plus7"));
        plus7->setGeometry(QRect(1140, 590, 30, 30));
        plus7->setCheckable(true);

        retranslateUi(Time_setting);

        QMetaObject::connectSlotsByName(Time_setting);
    } // setupUi

    void retranslateUi(QDialog *Time_setting)
    {
        Time_setting->setWindowTitle(QApplication::translate("Time_setting", "Dialog", nullptr));
        manual->setText(QString());
        save->setText(QString());
        back->setText(QString());
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        minus1->setText(QString());
        plus1->setText(QString());
        plus2->setText(QString());
        plus3->setText(QString());
        plus4->setText(QString());
        minus2->setText(QString());
        minus3->setText(QString());
        minus4->setText(QString());
        minus5->setText(QString());
        minus6->setText(QString());
        minus7->setText(QString());
        plus5->setText(QString());
        plus6->setText(QString());
        plus7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Time_setting: public Ui_Time_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_SETTING_H
