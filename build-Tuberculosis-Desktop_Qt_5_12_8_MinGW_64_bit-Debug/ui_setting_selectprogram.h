/********************************************************************************
** Form generated from reading UI file 'setting_selectprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_SELECTPROGRAM_H
#define UI_SETTING_SELECTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting_selectprogram
{
public:
    QComboBox *comboBox;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *Setting_selectprogram)
    {
        if (Setting_selectprogram->objectName().isEmpty())
            Setting_selectprogram->setObjectName(QString::fromUtf8("Setting_selectprogram"));
        Setting_selectprogram->resize(500, 300);
        Setting_selectprogram->setStyleSheet(QString::fromUtf8("QDialog#Setting_selectprogram {\n"
"background-image:url( :/BG/setting_selectprogram/setting_selectprogram.png);\n"
"}\n"
"\n"
"QPushButton#ok {\n"
"background-color: transparent;\n"
"border-image: url( :/Button/setting_selectprogram/ok.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#cancel {\n"
"background-color: transparent;\n"
"border-image: url( :/Button/setting_selectprogram/cancel.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        comboBox = new QComboBox(Setting_selectprogram);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 130, 311, 71));
        ok = new QPushButton(Setting_selectprogram);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(-30, 231, 300, 95));
        cancel = new QPushButton(Setting_selectprogram);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(220, 230, 300, 95));

        retranslateUi(Setting_selectprogram);

        QMetaObject::connectSlotsByName(Setting_selectprogram);
    } // setupUi

    void retranslateUi(QDialog *Setting_selectprogram)
    {
        Setting_selectprogram->setWindowTitle(QApplication::translate("Setting_selectprogram", "Dialog", nullptr));
        ok->setText(QString());
        cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting_selectprogram: public Ui_Setting_selectprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_SELECTPROGRAM_H
