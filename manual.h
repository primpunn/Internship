#ifndef MANUAL_H
#define MANUAL_H

#include <QDialog>


namespace Ui {
class Manual;
}

class Manual : public QDialog
{
    Q_OBJECT

public:
    explicit Manual(QWidget *parent = nullptr);
    ~Manual();

private slots:
    void on_back_pressed();

    void on_water_2_pressed();

    void on_heater_3_pressed();

    void on_x01_pressed();

    void on_x1_pressed();

    void on_fast_pressed();

private:
    Ui::Manual *ui;
};

#endif // MANUAL_H
