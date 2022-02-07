/********************************************************************************
** Form generated from reading UI file 'autorun_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORUN_SETTING_H
#define UI_AUTORUN_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_autorun_setting
{
public:
    QPushButton *add;
    QPushButton *remove;
    QPushButton *save;
    QPushButton *back;
    QLabel *holder_x;
    QLabel *holder_y;
    QLabel *holder_z;
    QLabel *heater;
    QLabel *cylinder;

    void setupUi(QDialog *autorun_setting)
    {
        if (autorun_setting->objectName().isEmpty())
            autorun_setting->setObjectName(QString::fromUtf8("autorun_setting"));
        autorun_setting->resize(1280, 800);
        autorun_setting->setStyleSheet(QString::fromUtf8("QWidget#autorun_setting {\n"
"background-image: url(:/BG/auto setting/autorun setting.jpg);\n"
"}\n"
"\n"
"QPushButton#add {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/auto setting/add.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#remove {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/auto setting/remove.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#save {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/auto setting/save.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color:transparent;\n"
"border-image: url(:/Button/auto setting/back.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
""));
        add = new QPushButton(autorun_setting);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(471, 711, 180, 90));
        remove = new QPushButton(autorun_setting);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(641, 701, 249, 100));
        save = new QPushButton(autorun_setting);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(883, 681, 188, 120));
        back = new QPushButton(autorun_setting);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(1065, 651, 213, 150));
        holder_x = new QLabel(autorun_setting);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(887, 239, 47, 41));
        holder_y = new QLabel(autorun_setting);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(955, 239, 47, 41));
        holder_z = new QLabel(autorun_setting);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(1023, 239, 47, 41));
        heater = new QLabel(autorun_setting);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(1099, 239, 47, 41));
        cylinder = new QLabel(autorun_setting);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(1165, 239, 47, 41));

        retranslateUi(autorun_setting);

        QMetaObject::connectSlotsByName(autorun_setting);
    } // setupUi

    void retranslateUi(QDialog *autorun_setting)
    {
        autorun_setting->setWindowTitle(QApplication::translate("autorun_setting", "Dialog", nullptr));
        add->setText(QString());
        remove->setText(QString());
        save->setText(QString());
        back->setText(QString());
        holder_x->setText(QString());
        holder_y->setText(QString());
        holder_z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class autorun_setting: public Ui_autorun_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORUN_SETTING_H
