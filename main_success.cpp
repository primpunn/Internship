#include "main_success.h"
#include "ui_main_success.h"
//#include <windows.h>

Main_success::Main_success(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main_success)
{
    ui->setupUi(this);
    this->setParent(parent);
    this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::Dialog);
}

Main_success::~Main_success()
{
    delete ui;
}

void Main_success::Close_LastMsg()
{
    QApplication::processEvents();
    qSleep(2000);
    this->close();
}

void Main_success::qSleep(int ms)
{
#ifdef Q_OS_WIN
    Sleep(uint(ms));
#else
    struct timespec ts = {ms/1000,(ms %1000)*1000*1000};
    nanosleep(&ts, NULL);
#endif
}



