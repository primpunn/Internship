#ifndef PRIM_H
#define PRIM_H

#include <QDialog>

namespace Ui {
class prim;
}

class prim : public QDialog
{
    Q_OBJECT

public:
    explicit prim(QWidget *parent = nullptr);
    ~prim();

private:
    Ui::prim *ui;
};

#endif // PRIM_H
