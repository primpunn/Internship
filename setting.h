#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();

private slots:
    //void on_back_clicked();

    void on_back_pressed();

    void on_position_pressed();

    void on_time_pressed();

    void on_run_pressed();

    void update_screen();

    //void on_run_pressed();
    


private:
    Ui::Setting *ui;
};

#endif // SETTING_H
