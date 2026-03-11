#include "registroui.h"
#include "ui_registroui.h"

RegistroUI::RegistroUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistroUI)
{
    ui->setupUi(this);
}

RegistroUI::~RegistroUI()
{
    delete ui;
}

void RegistroUI::on_txtUsuario_cursorPositionChanged(int arg1, int arg2)
{

}

