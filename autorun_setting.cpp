#include "autorun_setting.h"
#include "ui_autorun_setting.h"

autorun_setting::autorun_setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autorun_setting)
{
    ui->setupUi(this);
}

autorun_setting::~autorun_setting()
{
    delete ui;
}
