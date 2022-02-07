/********************************************************************************
** Form generated from reading UI file 'manual.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_H
#define UI_MANUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manual
{
public:
    QPushButton *back;
    QLabel *holder_x;
    QLabel *holder_y;
    QLabel *holder_z;
    QLabel *heater;
    QLabel *cylinder;
    QLabel *water;
    QLabel *heater_2;
    QLabel *rotate;
    QLabel *suction;
    QTabWidget *widget;
    QWidget *tabWidgetPage1;
    QPushButton *up;
    QPushButton *down;
    QPushButton *upmiddle;
    QPushButton *rightmiddle;
    QPushButton *downmiddle;
    QPushButton *leftmiddle;
    QPushButton *go;
    QPushButton *rotatebutton;
    QPushButton *release;
    QLabel *rotate_2;
    QLabel *release_2;
    QWidget *tabWidgetPage2;
    QPushButton *leftcylinder;
    QPushButton *rightcylinder;
    QPushButton *x1;
    QWidget *widget_2;
    QPushButton *x01;
    QPushButton *fast;
    QLabel *label;
    QWidget *tabWidgetPage3;
    QPushButton *water_2;
    QPushButton *heater_3;
    QPushButton *left;
    QPushButton *right;
    QLabel *slide1;
    QLabel *slide2;
    QLabel *slide3;
    QLabel *slide4;
    QLabel *slide5;
    QLabel *slide6;
    QLabel *slide7;
    QLabel *slide8;
    QLabel *slide9;

    void setupUi(QDialog *Manual)
    {
        if (Manual->objectName().isEmpty())
            Manual->setObjectName(QString::fromUtf8("Manual"));
        Manual->resize(1280, 800);
        Manual->setAutoFillBackground(false);
        Manual->setStyleSheet(QString::fromUtf8("QDialog#Manual {\n"
"background-image: url(:/BG/manual/manual.jpg);\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/back.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#rotate_2 {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/rotate.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#release {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/release.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#water_2 {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/water.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#water_2:checked {\n"
"border-image: url(:/Button/manual/water on.png);\n"
"}\n"
"\n"
"QPushButton#heater_3 {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/m"
                        "anual/heater.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#heater_3:checked {\n"
"border-image: url(:/Button/manual/heater on.png);\n"
"}\n"
"\n"
"QPushButton#left {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/left.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#right {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/right.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#left_cylinder {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/left cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#right_cylinder {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/right cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#x01 {\n"
"background-color:tra"
                        "nsparent;\n"
"border-image:url(:/Button/manual/0.1.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#x01:checked {\n"
"border-image: url(:/Button/manual/0.1 on.png);\n"
"}\n"
"\n"
"QPushButton#x1 {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/1.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#x1:checked {\n"
"border-image: url(:/Button/manual/1 on.png);\n"
"}\n"
"\n"
"QPushButton#fast {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/fast.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#fast:checked {\n"
"border-image: url(:/Button/manual/fast on.png);\n"
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
"border-image: url(:/Button/mai"
                        "n menu/on button.png);\n"
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
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide5 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main me"
                        "nu/off button.png);\n"
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
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide8:checked "
                        "{\n"
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
"QPushButton#up {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/up.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#up:pressed {\n"
"border-image: url(:/Button/manual/up on.png);\n"
"}\n"
"\n"
"QPushButton#down {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/down.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#down:pressed {\n"
"border-image: url(:/Button/manual/down on.png);\n"
"}\n"
"\n"
"QPushButton#upmiddle {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/up middle.png"
                        ");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#upmiddle:pressed {\n"
"border-image: url(:/Button/manual/up middle on.png);\n"
"}\n"
"\n"
"QPushButton#rightmiddle {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/right middle.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#rightmiddle:pressed {\n"
"border-image: url(:/Button/manual/right middle on.png);\n"
"}\n"
"\n"
"QPushButton#downmiddle {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/down middle.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#downmiddle:pressed {\n"
"border-image: url(:/Button/manual/down middle on.png);\n"
"}\n"
"\n"
"QPushButton#leftmiddle {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/left middle.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#leftmiddle:pressed {\n"
""
                        "border-image: url(:/Button/manual/left middle on.png);\n"
"}\n"
"\n"
"QPushButton#go {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/go.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#go:pressed {\n"
"border-image: url(:/Button/manual/go on.png);\n"
"}\n"
"\n"
"QPushButton#rotatebutton {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/rotate.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#rotatebutton:pressed {\n"
"border-image: url(:/Button/manual/rotate on.png);\n"
"}\n"
"\n"
"QPushButton#release {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/release.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#release:pressed {\n"
"border-image: url(:/Button/manual/release on.png);\n"
"}\n"
"\n"
"QPushButton#leftcylinder {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/lef"
                        "t cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#leftcylinder:pressed {\n"
"border-image: url(:/Button/manual/left cylinder on.png);\n"
"}\n"
"\n"
"QPushButton#rightcylinder {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/right cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#rightcylinder:pressed {\n"
"border-image: url(:/Button/manual/right cylinder on.png);\n"
"}\n"
"\n"
"QPushButton#left {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/left cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#left:pressed {\n"
"border-image: url(:/Button/manual/left cylinder on.png);\n"
"}\n"
"\n"
"QPushButton#right {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/manual/right cylinder.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"QPushButton#right"
                        ":pressed {\n"
"border-image: url(:/Button/manual/right cylinder on.png);\n"
"}\n"
"\n"
"QWidget#tabWidgetPage1 {\n"
"background-color: rgb(101, 99, 100)\n"
"}\n"
"\n"
"QWidget#tabWidgetPage2 {\n"
"background-color: rgb(101, 99, 100)\n"
"}\n"
"\n"
"QWidget#tabWidgetPage3 {\n"
"background-color: rgb(101, 99, 100)\n"
"}\n"
"\n"
"QWidget#tabWidgetPage4 {\n"
"background-color: rgb(101, 99, 100)\n"
"}\n"
"\n"
"QWidget#widget_2 {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/manual/speed.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QLabel#rotate_2 {\n"
"color:white;\n"
"}\n"
"\n"
"QLabel#release_2 {\n"
"color:white;\n"
"}\n"
"\n"
"QLabel#label {\n"
"color:white;\n"
"}\n"
"\n"
""));
        back = new QPushButton(Manual);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(613, 720, 668, 90));
        holder_x = new QLabel(Manual);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(42, 213, 47, 41));
        holder_y = new QLabel(Manual);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(110, 213, 47, 41));
        holder_z = new QLabel(Manual);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(178, 213, 47, 41));
        heater = new QLabel(Manual);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(254, 213, 47, 41));
        cylinder = new QLabel(Manual);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(320, 213, 47, 41));
        water = new QLabel(Manual);
        water->setObjectName(QString::fromUtf8("water"));
        water->setGeometry(QRect(310, 450, 47, 14));
        heater_2 = new QLabel(Manual);
        heater_2->setObjectName(QString::fromUtf8("heater_2"));
        heater_2->setGeometry(QRect(310, 495, 47, 14));
        rotate = new QLabel(Manual);
        rotate->setObjectName(QString::fromUtf8("rotate"));
        rotate->setGeometry(QRect(310, 540, 47, 14));
        suction = new QLabel(Manual);
        suction->setObjectName(QString::fromUtf8("suction"));
        suction->setGeometry(QRect(310, 585, 47, 14));
        widget = new QTabWidget(Manual);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(397, 142, 889, 577));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        widget->setFont(font);
        widget->setMouseTracking(false);
        widget->setTabletTracking(false);
        widget->setAcceptDrops(false);
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setAutoFillBackground(true);
        widget->setStyleSheet(QString::fromUtf8(""));
        widget->setTabPosition(QTabWidget::East);
        widget->setTabShape(QTabWidget::Rounded);
        widget->setIconSize(QSize(107, 173));
        widget->setElideMode(Qt::ElideNone);
        widget->setUsesScrollButtons(true);
        widget->setDocumentMode(true);
        widget->setTabsClosable(false);
        widget->setMovable(false);
        widget->setTabBarAutoHide(false);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        up = new QPushButton(tabWidgetPage1);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(20, 10, 401, 411));
        down = new QPushButton(tabWidgetPage1);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(20, 208, 401, 411));
        upmiddle = new QPushButton(tabWidgetPage1);
        upmiddle->setObjectName(QString::fromUtf8("upmiddle"));
        upmiddle->setGeometry(QRect(120, 100, 200, 200));
        rightmiddle = new QPushButton(tabWidgetPage1);
        rightmiddle->setObjectName(QString::fromUtf8("rightmiddle"));
        rightmiddle->setGeometry(QRect(208, 192, 187, 188));
        downmiddle = new QPushButton(tabWidgetPage1);
        downmiddle->setObjectName(QString::fromUtf8("downmiddle"));
        downmiddle->setGeometry(QRect(120, 270, 200, 200));
        leftmiddle = new QPushButton(tabWidgetPage1);
        leftmiddle->setObjectName(QString::fromUtf8("leftmiddle"));
        leftmiddle->setGeometry(QRect(44, 183, 193, 195));
        go = new QPushButton(tabWidgetPage1);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(20, 87, 407, 411));
        rotatebutton = new QPushButton(tabWidgetPage1);
        rotatebutton->setObjectName(QString::fromUtf8("rotatebutton"));
        rotatebutton->setGeometry(QRect(430, 100, 120, 120));
        release = new QPushButton(tabWidgetPage1);
        release->setObjectName(QString::fromUtf8("release"));
        release->setGeometry(QRect(430, 360, 120, 120));
        rotate_2 = new QLabel(tabWidgetPage1);
        rotate_2->setObjectName(QString::fromUtf8("rotate_2"));
        rotate_2->setGeometry(QRect(560, 140, 81, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        rotate_2->setFont(font1);
        release_2 = new QLabel(tabWidgetPage1);
        release_2->setObjectName(QString::fromUtf8("release_2"));
        release_2->setGeometry(QRect(560, 400, 171, 41));
        release_2->setFont(font1);
        widget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        leftcylinder = new QPushButton(tabWidgetPage2);
        leftcylinder->setObjectName(QString::fromUtf8("leftcylinder"));
        leftcylinder->setGeometry(QRect(90, 170, 281, 181));
        rightcylinder = new QPushButton(tabWidgetPage2);
        rightcylinder->setObjectName(QString::fromUtf8("rightcylinder"));
        rightcylinder->setGeometry(QRect(370, 170, 251, 181));
        x1 = new QPushButton(tabWidgetPage2);
        x1->setObjectName(QString::fromUtf8("x1"));
        x1->setGeometry(QRect(330, 400, 171, 91));
        widget_2 = new QWidget(tabWidgetPage2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 350, 201, 191));
        x01 = new QPushButton(tabWidgetPage2);
        x01->setObjectName(QString::fromUtf8("x01"));
        x01->setGeometry(QRect(160, 400, 171, 91));
        fast = new QPushButton(tabWidgetPage2);
        fast->setObjectName(QString::fromUtf8("fast"));
        fast->setGeometry(QRect(498, 400, 171, 91));
        QFont font2;
        font2.setPointSize(20);
        fast->setFont(font2);
        label = new QLabel(tabWidgetPage2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 110, 231, 61));
        label->setFont(font2);
        widget->addTab(tabWidgetPage2, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        water_2 = new QPushButton(tabWidgetPage3);
        water_2->setObjectName(QString::fromUtf8("water_2"));
        water_2->setGeometry(QRect(90, 70, 190, 190));
        heater_3 = new QPushButton(tabWidgetPage3);
        heater_3->setObjectName(QString::fromUtf8("heater_3"));
        heater_3->setGeometry(QRect(390, 70, 190, 190));
        left = new QPushButton(tabWidgetPage3);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(70, 320, 280, 190));
        right = new QPushButton(tabWidgetPage3);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(350, 320, 280, 190));
        widget->addTab(tabWidgetPage3, QString());
        slide1 = new QLabel(Manual);
        slide1->setObjectName(QString::fromUtf8("slide1"));
        slide1->setGeometry(QRect(120, 340, 81, 51));
        slide2 = new QLabel(Manual);
        slide2->setObjectName(QString::fromUtf8("slide2"));
        slide2->setGeometry(QRect(120, 390, 81, 51));
        slide3 = new QLabel(Manual);
        slide3->setObjectName(QString::fromUtf8("slide3"));
        slide3->setGeometry(QRect(120, 430, 81, 51));
        slide4 = new QLabel(Manual);
        slide4->setObjectName(QString::fromUtf8("slide4"));
        slide4->setGeometry(QRect(120, 480, 81, 51));
        slide5 = new QLabel(Manual);
        slide5->setObjectName(QString::fromUtf8("slide5"));
        slide5->setGeometry(QRect(120, 520, 81, 51));
        slide6 = new QLabel(Manual);
        slide6->setObjectName(QString::fromUtf8("slide6"));
        slide6->setGeometry(QRect(120, 570, 81, 51));
        slide7 = new QLabel(Manual);
        slide7->setObjectName(QString::fromUtf8("slide7"));
        slide7->setGeometry(QRect(120, 610, 81, 51));
        slide8 = new QLabel(Manual);
        slide8->setObjectName(QString::fromUtf8("slide8"));
        slide8->setGeometry(QRect(290, 340, 81, 51));
        slide9 = new QLabel(Manual);
        slide9->setObjectName(QString::fromUtf8("slide9"));
        slide9->setGeometry(QRect(290, 390, 81, 51));

        retranslateUi(Manual);

        widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Manual);
    } // setupUi

    void retranslateUi(QDialog *Manual)
    {
        Manual->setWindowTitle(QApplication::translate("Manual", "Dialog", nullptr));
        back->setText(QString());
        holder_x->setText(QString());
        holder_y->setText(QString());
        holder_z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
        water->setText(QString());
        heater_2->setText(QString());
        rotate->setText(QString());
        suction->setText(QString());
        up->setText(QString());
        down->setText(QString());
        upmiddle->setText(QString());
        rightmiddle->setText(QString());
        downmiddle->setText(QString());
        leftmiddle->setText(QString());
        go->setText(QString());
        rotatebutton->setText(QString());
        release->setText(QString());
        rotate_2->setText(QApplication::translate("Manual", "ROTATE", nullptr));
        release_2->setText(QApplication::translate("Manual", "RELEASE", nullptr));
        widget->setTabText(widget->indexOf(tabWidgetPage1), QApplication::translate("Manual", "HOLDER", nullptr));
        leftcylinder->setText(QString());
        rightcylinder->setText(QString());
        x1->setText(QString());
        x01->setText(QString());
        fast->setText(QString());
        label->setText(QApplication::translate("Manual", "CYLINDER", nullptr));
        widget->setTabText(widget->indexOf(tabWidgetPage2), QApplication::translate("Manual", "CYLINDER", nullptr));
        water_2->setText(QString());
        heater_3->setText(QString());
        left->setText(QString());
        right->setText(QString());
        widget->setTabText(widget->indexOf(tabWidgetPage3), QApplication::translate("Manual", "WATER/HEATER", nullptr));
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
    class Manual: public Ui_Manual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_H
