#ifndef FRMGESTIONARPRODUCTOS_H
#define FRMGESTIONARPRODUCTOS_H

#include <QDialog>

namespace Ui {
class FrmGestionarProductos;
}

class FrmGestionarProductos : public QDialog
{
    Q_OBJECT

public:
    explicit FrmGestionarProductos(QWidget *parent = nullptr);
    ~FrmGestionarProductos();

private:
    Ui::FrmGestionarProductos *ui;
};

#endif // FRMGESTIONARPRODUCTOS_H
