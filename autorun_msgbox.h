#ifndef AUTORUN_MSGBOX_H
#define AUTORUN_MSGBOX_H

#include <QDialog>

namespace Ui {
class Autorun_msgbox;
}

class Autorun_msgbox : public QDialog
{
    Q_OBJECT

public:
    explicit Autorun_msgbox(QWidget *parent = nullptr);
    ~Autorun_msgbox();

private:
    Ui::Autorun_msgbox *ui;
};

#endif // AUTORUN_MSGBOX_H
