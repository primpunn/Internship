#ifndef POSITION_SETTING_H
#define POSITION_SETTING_H

#include <QDialog>

namespace Ui {
class Position_setting;
}

class Position_setting : public QDialog
{
    Q_OBJECT

public:
    explicit Position_setting(QWidget *parent = nullptr);
    ~Position_setting();

private slots:
    void on_back_pressed();

    void on_manual_pressed();

    //void on_up_pressed();

private:
    Ui::Position_setting *ui;
};

#endif // POSITION_SETTING_H
