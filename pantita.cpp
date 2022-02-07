#include "pantita.h"
#include "ui_pantita.h"

Pantita::Pantita(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pantita)
{
    ui->setupUi(this);
}

Pantita::~Pantita()
{
    delete ui;
}
