#ifndef AUTORUN_H
#define AUTORUN_H

#include <QDialog>


namespace Ui {
class Autorun;
}

class Autorun : public QDialog
{
    Q_OBJECT

public:
    explicit Autorun(QWidget *parent = nullptr);
    ~Autorun();

private slots:
    void on_back_pressed();
    void update_screen();


private:
    Ui::Autorun *ui;
};

#endif // AUTORUN_H
