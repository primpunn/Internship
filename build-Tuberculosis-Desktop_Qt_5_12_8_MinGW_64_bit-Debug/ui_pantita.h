/********************************************************************************
** Form generated from reading UI file 'pantita.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTITA_H
#define UI_PANTITA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Pantita
{
public:

    void setupUi(QDialog *Pantita)
    {
        if (Pantita->objectName().isEmpty())
            Pantita->setObjectName(QString::fromUtf8("Pantita"));
        Pantita->resize(400, 300);

        retranslateUi(Pantita);

        QMetaObject::connectSlotsByName(Pantita);
    } // setupUi

    void retranslateUi(QDialog *Pantita)
    {
        Pantita->setWindowTitle(QApplication::translate("Pantita", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pantita: public Ui_Pantita {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTITA_H
