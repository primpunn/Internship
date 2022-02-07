/********************************************************************************
** Form generated from reading UI file 'autorun_msgbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORUN_MSGBOX_H
#define UI_AUTORUN_MSGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Autorun_msgbox
{
public:
    QLabel *label;

    void setupUi(QDialog *Autorun_msgbox)
    {
        if (Autorun_msgbox->objectName().isEmpty())
            Autorun_msgbox->setObjectName(QString::fromUtf8("Autorun_msgbox"));
        Autorun_msgbox->resize(400, 200);
        Autorun_msgbox->setStyleSheet(QString::fromUtf8("QDialog#Autorun_msgbox {\n"
"background-color:rgb(212,212,212);\n"
"}\n"
"\n"
"QLabel#label {\n"
"background-color: rgb(212, 212, 212);\n"
"	color: rgb(101, 99, 100);\n"
"}\n"
""));
        label = new QLabel(Autorun_msgbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 40, 181, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"background-color: rgb(212, 212, 212);\n"
"color:rgb(101, 99, 100);\n"
"}\n"
""));

        retranslateUi(Autorun_msgbox);

        QMetaObject::connectSlotsByName(Autorun_msgbox);
    } // setupUi

    void retranslateUi(QDialog *Autorun_msgbox)
    {
        Autorun_msgbox->setWindowTitle(QApplication::translate("Autorun_msgbox", "Dialog", nullptr));
        label->setText(QApplication::translate("Autorun_msgbox", "Do you want to run with Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autorun_msgbox: public Ui_Autorun_msgbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORUN_MSGBOX_H
