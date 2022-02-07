#ifndef MAIN_SUCCESS_H
#define MAIN_SUCCESS_H

#include <QDialog>
//#include <windows.h>
#include <QTimer>
#include <QThread>

namespace Ui {
class Main_success;
}

class Main_success : public QDialog
{
    Q_OBJECT

public:
    explicit Main_success(QWidget *parent = nullptr);
    ~Main_success();
    void Close_LastMsg();
    void qSleep(int);

private:
    Ui::Main_success *ui;
};

#endif // MAIN_SUCCESS_H
