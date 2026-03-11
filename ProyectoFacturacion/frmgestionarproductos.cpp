#include "frmgestionarproductos.h"
#include "ui_frmgestionarproductos.h"

FrmGestionarProductos::FrmGestionarProductos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FrmGestionarProductos)
{
    ui->setupUi(this);
}

FrmGestionarProductos::~FrmGestionarProductos()
{
    delete ui;
}
