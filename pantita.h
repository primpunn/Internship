#ifndef PANTITA_H
#define PANTITA_H

#include <QDialog>

namespace Ui {
class Pantita;
}

class Pantita : public QDialog
{
    Q_OBJECT

public:
    explicit Pantita(QWidget *parent = nullptr);
    ~Pantita();

private:
    Ui::Pantita *ui;
};

#endif // PANTITA_H
