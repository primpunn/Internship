#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_close_clicked();



    void on_setting_clicked();

    void on_setting_pressed();

    void on_startauto_pressed();

    void on_manual_pressed();

    void on_slide1_pressed();

    void on_slide1_toggled(bool checked);

    void on_slide2_toggled(bool checked);

    void on_slide3_toggled(bool checked);

    void on_slide4_toggled(bool checked);

    void on_slide5_toggled(bool checked);

    void on_slide6_toggled(bool checked);

    void on_slide7_toggled(bool checked);

    void on_slide8_toggled(bool checked);

    void on_slide9_toggled(bool checked);

    void on_home_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
