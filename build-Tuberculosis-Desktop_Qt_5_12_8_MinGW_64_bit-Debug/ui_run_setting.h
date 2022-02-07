/********************************************************************************
** Form generated from reading UI file 'run_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_SETTING_H
#define UI_RUN_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Run_setting
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
    QTableWidget *tableWidget;

    void setupUi(QDialog *Run_setting)
    {
        if (Run_setting->objectName().isEmpty())
            Run_setting->setObjectName(QString::fromUtf8("Run_setting"));
        Run_setting->resize(1280, 800);
        Run_setting->setStyleSheet(QString::fromUtf8("QDialog#Run_setting {\n"
"background-image: url(:/BG/autorun setting/autorun setting.jpg);\n"
"}\n"
"\n"
"QPushButton#add {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun setting/add.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#remove {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun setting/remove.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#save {\n"
"background-color: transparent;\n"
"border-image: url(:/Button/autorun setting/save.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QPushButton#back {\n"
"background-color:transparent;\n"
"border-image:url(:/Button/autorun setting/back.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"QTableWidget#tableWidget {\n"
"background-color:rgb(212, 212, 212)\n"
"}\n"
"\n"
""));
        add = new QPushButton(Run_setting);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(464, 716, 197, 90));
        remove = new QPushButton(Run_setting);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(648, 713, 248, 90));
        save = new QPushButton(Run_setting);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(884, 713, 196, 90));
        back = new QPushButton(Run_setting);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(1067, 713, 215, 90));
        holder_x = new QLabel(Run_setting);
        holder_x->setObjectName(QString::fromUtf8("holder_x"));
        holder_x->setGeometry(QRect(887, 239, 47, 41));
        holder_y = new QLabel(Run_setting);
        holder_y->setObjectName(QString::fromUtf8("holder_y"));
        holder_y->setGeometry(QRect(955, 239, 47, 41));
        holder_z = new QLabel(Run_setting);
        holder_z->setObjectName(QString::fromUtf8("holder_z"));
        holder_z->setGeometry(QRect(1023, 239, 47, 41));
        heater = new QLabel(Run_setting);
        heater->setObjectName(QString::fromUtf8("heater"));
        heater->setGeometry(QRect(1099, 239, 47, 41));
        cylinder = new QLabel(Run_setting);
        cylinder->setObjectName(QString::fromUtf8("cylinder"));
        cylinder->setGeometry(QRect(1165, 239, 47, 41));
        tableWidget = new QTableWidget(Run_setting);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 190, 761, 471));

        retranslateUi(Run_setting);

        QMetaObject::connectSlotsByName(Run_setting);
    } // setupUi

    void retranslateUi(QDialog *Run_setting)
    {
        Run_setting->setWindowTitle(QApplication::translate("Run_setting", "Dialog", nullptr));
        add->setText(QString());
        remove->setText(QString());
        save->setText(QString());
        back->setText(QString());
        holder_x->setText(QString());
        holder_y->setText(QString());
        holder_z->setText(QString());
        heater->setText(QString());
        cylinder->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Run_setting", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Run_setting", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Run_setting", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Run_setting", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Run_setting", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Run_setting", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Run_setting", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("Run_setting", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("Run_setting", "New Row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Run_setting: public Ui_Run_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_SETTING_H
