#include "prim.h"
#include "ui_prim.h"

prim::prim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prim)
{
    ui->setupUi(this);
}

prim::~prim()
{
    delete ui;
}
