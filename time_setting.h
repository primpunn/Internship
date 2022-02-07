#ifndef TIME_SETTING_H
#define TIME_SETTING_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Time_setting;
}

class Time_setting : public QDialog
{
    Q_OBJECT

public:
    explicit Time_setting(QWidget *parent = nullptr);
    ~Time_setting();

private slots:
    void on_back_pressed();

    void on_manual_pressed();

    //void on_release_slide_sliderMoved(int position);

    void on_release_slide_valueChanged(int value);

    void on_grab_slide_valueChanged(int value);

    void on_absorbsub_slide_valueChanged(int value);

    void on_releasesub_slide_valueChanged(int value);

    void on_heater_slide_valueChanged(int value);

    void on_water_slide_valueChanged(int value);

    void on_rotate_slide_valueChanged(int value);

    void plus1();
    void minus1();
    void on_plus1_pressed();
    void on_plus1_released();
    void on_minus1_pressed();
    void on_minus1_released();

    void plus2();
    void minus2();
    void on_plus2_pressed();
    void on_plus2_released();
    void on_minus2_pressed();
    void on_minus2_released();

    void plus3();
    void minus3();

    void on_plus3_pressed();

    void on_plus3_released();

    void on_minus3_pressed();

    void on_minus3_released();

private:
    Ui::Time_setting *ui;
    QTimer timer_up;
    QTimer timer_down;
};

#endif // TIME_SETTING_H

