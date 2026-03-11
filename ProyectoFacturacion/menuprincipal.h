#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MenuPrincipal;
}
QT_END_NAMESPACE

class MenuPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    MenuPrincipal(QWidget *parent = nullptr);
    ~MenuPrincipal();

private slots:
    void on_btnIniciarSesion_clicked();

private:
    Ui::MenuPrincipal *ui;
};
#endif // MENUPRINCIPAL_H
