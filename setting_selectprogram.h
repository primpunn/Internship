#ifndef SETTING_SELECTPROGRAM_H
#define SETTING_SELECTPROGRAM_H

#include <QDialog>

namespace Ui {
class Setting_selectprogram;
}

class Setting_selectprogram : public QDialog
{
    Q_OBJECT

public:
    explicit Setting_selectprogram(QWidget *parent = nullptr);
    ~Setting_selectprogram();

private slots:
    void on_pushButton_clicked(bool checked);

    void on_cancel_pressed();

    //void on_ok_pressed();

private:
    Ui::Setting_selectprogram *ui;
};

#endif // SETTING_SELECTPROGRAM_H
