#include "frmclientes.h"
#include "ui_frmclientes.h"

Frmclientes::Frmclientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Frmclientes)
{
    ui->setupUi(this);
}

Frmclientes::~Frmclientes()
{
    delete ui;
}
