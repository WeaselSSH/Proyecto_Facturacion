#ifndef FRMCLIENTES_H
#define FRMCLIENTES_H

#include <QDialog>

namespace Ui {
class Frmclientes;
}

class Frmclientes : public QDialog
{
    Q_OBJECT

public:
    explicit Frmclientes(QWidget *parent = nullptr);
    ~Frmclientes();

private:
    Ui::Frmclientes *ui;
};

#endif // FRMCLIENTES_H
