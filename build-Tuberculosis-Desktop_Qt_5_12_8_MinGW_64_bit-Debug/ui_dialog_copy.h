/********************************************************************************
** Form generated from reading UI file 'dialog_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_COPY_H
#define UI_DIALOG_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *back;
    QPushButton *position;
    QPushButton *time;
    QPushButton *run;
    QPushButton *slide1;
    QPushButton *slide2;
    QPushButton *slide3;
    QPushButton *slide4;
    QPushButton *slide5;
    QPushButton *slide6;
    QPushButton *slide7;
    QPushButton *slide8;
    QPushButton *slide9;
    QPushButton *x;
    QPushButton *y;
    QPushButton *z;
    QPushButton *heater;
    QPushButton *cylinder;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1280, 800);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog#Dialog  {\n"
"background-image: url(:/BG/setting/setting.jpg);\n"
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
"QPushButton#position {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/setting/position.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#time {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/setting/time.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#run {\n"
"background-color:transparent;\n"
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
""
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
"border-image: url(:/Button/main menu/on button.png);\n"
"}\n"
"\n"
"QPushButton#slide5 "
                        "{\n"
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
"border-image: url(:/Button/main menu/off button.png);\n"
"background: none;\n"
"border: non"
                        "e;\n"
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
"}"));
        back = new QPushButton(Dialog);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(612, 606, 700, 200));
        position = new QPushButton(Dialog);
        position->setObjectName(QString::fromUtf8("position"));
        position->setGeometry(QRect(660, 110, 441, 221));
        time = new QPushButton(Dialog);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(830, 310, 441, 221));
        run = new QPushButton(Dialog);
        run->setObjectName(QString::fromUtf8("run"));
        run->setGeometry(QRect(650, 510, 441, 221));
        slide1 = new QPushButton(Dialog);
        slide1->setObjectName(QString::fromUtf8("slide1"));
        slide1->setGeometry(QRect(200, 340, 81, 51));
        slide2 = new QPushButton(Dialog);
        slide2->setObjectName(QString::fromUtf8("slide2"));
        slide2->setGeometry(QRect(200, 380, 81, 51));
        slide3 = new QPushButton(Dialog);
        slide3->setObjectName(QString::fromUtf8("slide3"));
        slide3->setGeometry(QRect(200, 420, 81, 51));
        slide3->setCheckable(true);
        slide4 = new QPushButton(Dialog);
        slide4->setObjectName(QString::fromUtf8("slide4"));
        slide4->setGeometry(QRect(200, 460, 81, 51));
        slide4->setCheckable(true);
        slide5 = new QPushButton(Dialog);
        slide5->setObjectName(QString::fromUtf8("slide5"));
        slide5->setGeometry(QRect(200, 500, 81, 51));
        slide5->setCheckable(true);
        slide6 = new QPushButton(Dialog);
        slide6->setObjectName(QString::fromUtf8("slide6"));
        slide6->setGeometry(QRect(200, 540, 81, 51));
        slide6->setCheckable(true);
        slide7 = new QPushButton(Dialog);
        slide7->setObjectName(QString::fromUtf8("slide7"));
        slide7->setGeometry(QRect(200, 580, 81, 51));
        slide7->setCheckable(true);
        slide8 = new QPushButton(Dialog);
        slide8->setObjectName(QString::fromUtf8("slide8"));
        slide8->setGeometry(QRect(370, 340, 81, 51));
        slide8->setCheckable(true);
        slide9 = new QPushButton(Dialog);
        slide9->setObjectName(QString::fromUtf8("slide9"));
        slide9->setGeometry(QRect(370, 380, 81, 51));
        slide9->setCheckable(true);
        x = new QPushButton(Dialog);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(127, 226, 47, 42));
        y = new QPushButton(Dialog);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(195, 226, 47, 42));
        z = new QPushButton(Dialog);
        z->setObjectName(QString::fromUtf8("z"));
        z->setGeometry(QRect(263, 226, 47, 42));
        heater = new QPushButton(Dialog);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(339, 226, 47, 42));
        cylinder = new QPushButton(Dialog);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(405, 226, 47, 42));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        back->setText(QString());
        position->setText(QString());
        time->setText(QString());
        run->setText(QString());
        slide1->setText(QString());
        slide2->setText(QString());
        slide3->setText(QString());
        slide4->setText(QString());
        slide5->setText(QString());
        slide6->setText(QString());
        slide7->setText(QString());
        slide8->setText(QString());
        slide9->setText(QString());
        x->setText(QString());
        y->setText(QString());
        z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_COPY_H
