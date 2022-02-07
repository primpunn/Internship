/********************************************************************************
** Form generated from reading UI file 'autorun.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORUN_H
#define UI_AUTORUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Autorun
{
public:
    QPushButton *pause;
    QPushButton *cancel;
    QPushButton *back;
    QProgressBar *slide1_2;
    QProgressBar *slide2_2;
    QProgressBar *slide3_2;
    QProgressBar *slide4_2;
    QProgressBar *slide5_2;
    QProgressBar *slide6_2;
    QProgressBar *slide7_2;
    QProgressBar *slide8_2;
    QProgressBar *slide9_2;
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

    void setupUi(QDialog *Autorun)
    {
        if (Autorun->objectName().isEmpty())
            Autorun->setObjectName(QString::fromUtf8("Autorun"));
        Autorun->resize(1280, 800);
        Autorun->setStyleSheet(QString::fromUtf8("QDialog#Autorun {\n"
"background-image: url(:/BG/autorun/autorun.jpg);\n"
"}\n"
"\n"
"QPushButton#pause {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/pause.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#cancel {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/cancel.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/back.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide1_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide2_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
""
                        "background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide3_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide4_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide5_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide6_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide7_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
""
                        "background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide8_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QProgressBar#slide9_2 {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun/percentage slide.png);\n"
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
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide2:checked {\n"
"border-image: url(:/Button/main menu/on button.p"
                        "ng);\n"
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
"QPushButton#slide5:checked {\n"
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide6 {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png)"
                        ";\n"
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
"background-color:transparent;\n"
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#slide9:checked {\n"
"border-image"
                        ": url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
""));
        pause = new QPushButton(Autorun);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(470, 714, 288, 90));
        cancel = new QPushButton(Autorun);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(750, 713, 268, 90));
        back = new QPushButton(Autorun);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(1014, 713, 268, 90));
        slide1_2 = new QProgressBar(Autorun);
        slide1_2->setObjectName(QString::fromUtf8("slide1_2"));
        slide1_2->setGeometry(QRect(53, 195, 81, 140));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        slide1_2->setFont(font);
        slide1_2->setLayoutDirection(Qt::LeftToRight);
        slide1_2->setValue(24);
        slide1_2->setAlignment(Qt::AlignCenter);
        slide1_2->setTextVisible(true);
        slide1_2->setOrientation(Qt::Vertical);
        slide1_2->setTextDirection(QProgressBar::TopToBottom);
        slide2_2 = new QProgressBar(Autorun);
        slide2_2->setObjectName(QString::fromUtf8("slide2_2"));
        slide2_2->setGeometry(QRect(230, 196, 81, 140));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        slide2_2->setFont(font1);
        slide2_2->setLayoutDirection(Qt::LeftToRight);
        slide2_2->setValue(24);
        slide2_2->setAlignment(Qt::AlignCenter);
        slide2_2->setOrientation(Qt::Vertical);
        slide2_2->setTextDirection(QProgressBar::TopToBottom);
        slide3_2 = new QProgressBar(Autorun);
        slide3_2->setObjectName(QString::fromUtf8("slide3_2"));
        slide3_2->setGeometry(QRect(407, 195, 81, 140));
        slide3_2->setFont(font1);
        slide3_2->setLayoutDirection(Qt::LeftToRight);
        slide3_2->setValue(24);
        slide3_2->setAlignment(Qt::AlignCenter);
        slide3_2->setOrientation(Qt::Vertical);
        slide3_2->setTextDirection(QProgressBar::TopToBottom);
        slide4_2 = new QProgressBar(Autorun);
        slide4_2->setObjectName(QString::fromUtf8("slide4_2"));
        slide4_2->setGeometry(QRect(584, 196, 81, 140));
        slide4_2->setFont(font1);
        slide4_2->setLayoutDirection(Qt::LeftToRight);
        slide4_2->setValue(24);
        slide4_2->setAlignment(Qt::AlignCenter);
        slide4_2->setOrientation(Qt::Vertical);
        slide4_2->setTextDirection(QProgressBar::TopToBottom);
        slide5_2 = new QProgressBar(Autorun);
        slide5_2->setObjectName(QString::fromUtf8("slide5_2"));
        slide5_2->setGeometry(QRect(761, 196, 81, 140));
        slide5_2->setFont(font1);
        slide5_2->setLayoutDirection(Qt::LeftToRight);
        slide5_2->setValue(24);
        slide5_2->setAlignment(Qt::AlignCenter);
        slide5_2->setOrientation(Qt::Vertical);
        slide5_2->setTextDirection(QProgressBar::TopToBottom);
        slide6_2 = new QProgressBar(Autorun);
        slide6_2->setObjectName(QString::fromUtf8("slide6_2"));
        slide6_2->setGeometry(QRect(144, 466, 81, 140));
        slide6_2->setFont(font1);
        slide6_2->setLayoutDirection(Qt::LeftToRight);
        slide6_2->setValue(24);
        slide6_2->setAlignment(Qt::AlignCenter);
        slide6_2->setOrientation(Qt::Vertical);
        slide6_2->setTextDirection(QProgressBar::TopToBottom);
        slide7_2 = new QProgressBar(Autorun);
        slide7_2->setObjectName(QString::fromUtf8("slide7_2"));
        slide7_2->setGeometry(QRect(319, 466, 81, 140));
        slide7_2->setFont(font1);
        slide7_2->setLayoutDirection(Qt::LeftToRight);
        slide7_2->setValue(24);
        slide7_2->setAlignment(Qt::AlignCenter);
        slide7_2->setOrientation(Qt::Vertical);
        slide7_2->setTextDirection(QProgressBar::TopToBottom);
        slide8_2 = new QProgressBar(Autorun);
        slide8_2->setObjectName(QString::fromUtf8("slide8_2"));
        slide8_2->setGeometry(QRect(495, 466, 81, 140));
        slide8_2->setFont(font1);
        slide8_2->setLayoutDirection(Qt::LeftToRight);
        slide8_2->setValue(24);
        slide8_2->setAlignment(Qt::AlignCenter);
        slide8_2->setOrientation(Qt::Vertical);
        slide8_2->setTextDirection(QProgressBar::TopToBottom);
        slide9_2 = new QProgressBar(Autorun);
        slide9_2->setObjectName(QString::fromUtf8("slide9_2"));
        slide9_2->setGeometry(QRect(670, 466, 81, 140));
        slide9_2->setFont(font1);
        slide9_2->setLayoutDirection(Qt::LeftToRight);
        slide9_2->setValue(24);
        slide9_2->setAlignment(Qt::AlignCenter);
        slide9_2->setOrientation(Qt::Vertical);
        slide9_2->setTextDirection(QProgressBar::TopToBottom);
        holder_x = new QLabel(Autorun);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(928, 232, 47, 41));
        holder_y = new QLabel(Autorun);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(996, 232, 47, 41));
        holder_z = new QLabel(Autorun);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(1064, 232, 47, 41));
        heater = new QLabel(Autorun);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(1140, 232, 47, 41));
        cylinder = new QLabel(Autorun);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(1206, 232, 47, 41));
        slide1 = new QLabel(Autorun);
        slide1->setObjectName(QString::fromUtf8("slide1"));
        slide1->setGeometry(QRect(990, 360, 81, 51));
        slide2 = new QLabel(Autorun);
        slide2->setObjectName(QString::fromUtf8("slide2"));
        slide2->setGeometry(QRect(990, 400, 81, 51));
        slide3 = new QLabel(Autorun);
        slide3->setObjectName(QString::fromUtf8("slide3"));
        slide3->setGeometry(QRect(990, 450, 81, 51));
        slide4 = new QLabel(Autorun);
        slide4->setObjectName(QString::fromUtf8("slide4"));
        slide4->setGeometry(QRect(990, 490, 81, 51));
        slide5 = new QLabel(Autorun);
        slide5->setObjectName(QString::fromUtf8("slide5"));
        slide5->setGeometry(QRect(990, 530, 81, 51));
        slide6 = new QLabel(Autorun);
        slide6->setObjectName(QString::fromUtf8("slide6"));
        slide6->setGeometry(QRect(990, 580, 81, 51));
        slide7 = new QLabel(Autorun);
        slide7->setObjectName(QString::fromUtf8("slide7"));
        slide7->setGeometry(QRect(990, 620, 81, 51));
        slide8 = new QLabel(Autorun);
        slide8->setObjectName(QString::fromUtf8("slide8"));
        slide8->setGeometry(QRect(1160, 350, 81, 51));
        slide9 = new QLabel(Autorun);
        slide9->setObjectName(QString::fromUtf8("slide9"));
        slide9->setGeometry(QRect(1160, 400, 81, 51));

        retranslateUi(Autorun);

        QMetaObject::connectSlotsByName(Autorun);
    } // setupUi

    void retranslateUi(QDialog *Autorun)
    {
        Autorun->setWindowTitle(QApplication::translate("Autorun", "Dialog", nullptr));
        pause->setText(QString());
        cancel->setText(QString());
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
    class Autorun: public Ui_Autorun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORUN_H
