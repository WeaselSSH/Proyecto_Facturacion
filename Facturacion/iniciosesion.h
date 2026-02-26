#ifndef INICIOSESION_H
#define INICIOSESION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class InicioSesion;
}
QT_END_NAMESPACE

class InicioSesion : public QMainWindow
{
    Q_OBJECT

public:
    InicioSesion(QWidget *parent = nullptr);
    ~InicioSesion();

private:
    Ui::InicioSesion *ui;
};
#endif // INICIOSESION_H
