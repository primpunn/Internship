#include "autorun_msgbox.h"
#include "ui_autorun_msgbox.h"

Autorun_msgbox::Autorun_msgbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autorun_msgbox)
{
    ui->setupUi(this);
}

Autorun_msgbox::~Autorun_msgbox()
{
    delete ui;
}
