/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startauto;
    QPushButton *home;
    QPushButton *manual;
    QPushButton *setting;
    QComboBox *comboBox;
    QPushButton *slide1;
    QPushButton *slide2;
    QPushButton *slide3;
    QPushButton *slide4;
    QPushButton *slide5;
    QPushButton *slide6;
    QPushButton *slide7;
    QPushButton *slide8;
    QPushButton *slide9;
    QLabel *label;
    QPushButton *close;
    QLabel *holder_x;
    QLabel *holder_y;
    QLabel *holder_z;
    QLabel *heater;
    QLabel *cylinder;
    QLabel *label_water;
    QLabel *label_heater;
    QLabel *label_rotate;
    QLabel *label_suction;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"background-image: url(:/BG/main menu/main menu (new).jpg);\n"
"}\n"
"\n"
"QPushButton#startauto {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/main menu/start auto.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#home {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/main menu/HOME.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#manual {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/main menu/MANUAL.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#setting {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/main menu/SETTING.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide1{\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"bord"
                        "er: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide1:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide2 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
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
"border-image: url(:/Button/main menu/on butt"
                        "on.png);\n"
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
"QPushButton#slide5:checked {\n"
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
"border-image: url(:/Button/main menu/off button."
                        "png);\n"
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
"background-color:transparent;\n"
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
"QPushButton#close {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/close.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#holder_x{	\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#holder_y{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#holder_z{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#heater{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"QLabel#cylinder{\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""
                        "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        startauto = new QPushButton(centralwidget);
        startauto->setObjectName(QString::fromUtf8("startauto"));
        startauto->setGeometry(QRect(660, 110, 441, 221));
        startauto->setStyleSheet(QString::fromUtf8(""));
        home = new QPushButton(centralwidget);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(760, 240, 441, 221));
        manual = new QPushButton(centralwidget);
        manual->setObjectName(QString::fromUtf8("manual"));
        manual->setGeometry(QRect(760, 380, 441, 221));
        setting = new QPushButton(centralwidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(660, 560, 441, 131));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(920, 30, 251, 61));
        slide1 = new QPushButton(centralwidget);
        slide1->setObjectName(QString::fromUtf8("slide1"));
        slide1->setGeometry(QRect(210, 340, 81, 51));
        slide1->setCheckable(true);
        slide1->setChecked(false);
        slide1->setAutoRepeat(false);
        slide2 = new QPushButton(centralwidget);
        slide2->setObjectName(QString::fromUtf8("slide2"));
        slide2->setGeometry(QRect(210, 380, 81, 51));
        slide2->setCheckable(true);
        slide3 = new QPushButton(centralwidget);
        slide3->setObjectName(QString::fromUtf8("slide3"));
        slide3->setGeometry(QRect(210, 420, 81, 51));
        slide3->setCheckable(true);
        slide4 = new QPushButton(centralwidget);
        slide4->setObjectName(QString::fromUtf8("slide4"));
        slide4->setGeometry(QRect(210, 460, 81, 51));
        slide4->setCheckable(true);
        slide5 = new QPushButton(centralwidget);
        slide5->setObjectName(QString::fromUtf8("slide5"));
        slide5->setGeometry(QRect(210, 500, 81, 51));
        slide5->setCheckable(true);
        slide6 = new QPushButton(centralwidget);
        slide6->setObjectName(QString::fromUtf8("slide6"));
        slide6->setGeometry(QRect(210, 540, 81, 51));
        slide6->setCheckable(true);
        slide7 = new QPushButton(centralwidget);
        slide7->setObjectName(QString::fromUtf8("slide7"));
        slide7->setGeometry(QRect(210, 580, 81, 51));
        slide7->setCheckable(true);
        slide8 = new QPushButton(centralwidget);
        slide8->setObjectName(QString::fromUtf8("slide8"));
        slide8->setGeometry(QRect(370, 340, 81, 51));
        slide8->setCheckable(true);
        slide9 = new QPushButton(centralwidget);
        slide9->setObjectName(QString::fromUtf8("slide9"));
        slide9->setGeometry(QRect(370, 380, 81, 51));
        slide9->setCheckable(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(770, 30, 171, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        close = new QPushButton(centralwidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(613, 718, 680, 90));
        holder_x = new QLabel(centralwidget);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(127, 227, 47, 41));
        holder_y = new QLabel(centralwidget);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(195, 227, 47, 41));
        holder_z = new QLabel(centralwidget);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(264, 227, 47, 41));
        heater = new QLabel(centralwidget);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(339, 227, 47, 41));
        cylinder = new QLabel(centralwidget);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(405, 227, 47, 41));
        label_water = new QLabel(centralwidget);
        label_water->setObjectName(QString::fromUtf8("label_water"));
        label_water->setGeometry(QRect(380, 440, 47, 14));
        label_heater = new QLabel(centralwidget);
        label_heater->setObjectName(QString::fromUtf8("label_heater"));
        label_heater->setGeometry(QRect(380, 480, 47, 14));
        label_rotate = new QLabel(centralwidget);
        label_rotate->setObjectName(QString::fromUtf8("label_rotate"));
        label_rotate->setGeometry(QRect(380, 520, 47, 14));
        label_suction = new QLabel(centralwidget);
        label_suction->setObjectName(QString::fromUtf8("label_suction"));
        label_suction->setGeometry(QRect(380, 560, 47, 14));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        startauto->setText(QString());
        home->setText(QString());
        manual->setText(QString());
        setting->setText(QString());
        slide1->setText(QString());
        slide2->setText(QString());
        slide3->setText(QString());
        slide4->setText(QString());
        slide5->setText(QString());
        slide6->setText(QString());
        slide7->setText(QString());
        slide8->setText(QString());
        slide9->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Program", nullptr));
        close->setText(QString());
        holder_x->setText(QString());
        holder_y->setText(QString());
        holder_z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
        label_water->setText(QString());
        label_heater->setText(QString());
        label_rotate->setText(QString());
        label_suction->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
