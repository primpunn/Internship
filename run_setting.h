#ifndef RUN_SETTING_H
#define RUN_SETTING_H

#include <QDialog>

namespace Ui {
class Run_setting;
}

class Run_setting : public QDialog
{
    Q_OBJECT

public:
    explicit Run_setting(QWidget *parent = nullptr);
    ~Run_setting();

private slots:
    void on_back_pressed();

private:
    Ui::Run_setting *ui;
};

#endif // RUN_SETTING_H
