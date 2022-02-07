/********************************************************************************
** Form generated from reading UI file 'main_success.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_SUCCESS_H
#define UI_MAIN_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Main_success
{
public:
    QLabel *label;

    void setupUi(QDialog *Main_success)
    {
        if (Main_success->objectName().isEmpty())
            Main_success->setObjectName(QString::fromUtf8("Main_success"));
        Main_success->resize(500, 160);
        Main_success->setStyleSheet(QString::fromUtf8("QDialog#Mian_success {\n"
"background-color: rgb(212, 212, 212);\n"
"}\n"
"\n"
"QLabel#label {\n"
"background-color: rgb(212, 212, 212);\n"
"color:rgb(101, 99, 100);\n"
"}\n"
""));
        label = new QLabel(Main_success);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 500, 160));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(32);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Main_success);

        QMetaObject::connectSlotsByName(Main_success);
    } // setupUi

    void retranslateUi(QDialog *Main_success)
    {
        Main_success->setWindowTitle(QApplication::translate("Main_success", "Dialog", nullptr));
        label->setText(QApplication::translate("Main_success", "SUCCESS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_success: public Ui_Main_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SUCCESS_H
