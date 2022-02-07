#ifndef AUTORUN_SETTING_H
#define AUTORUN_SETTING_H

#include <QDialog>

namespace Ui {
class autorun_setting;
}

class autorun_setting : public QDialog
{
    Q_OBJECT

public:
    explicit autorun_setting(QWidget *parent = nullptr);
    ~autorun_setting();

private:
    Ui::autorun_setting *ui;
};

#endif // AUTORUN_SETTING_H
