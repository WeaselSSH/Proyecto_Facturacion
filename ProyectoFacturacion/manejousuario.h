#ifndef MANEJOUSUARIO_H
#define MANEJOUSUARIO_H

#include <QString>
#include "UsuarioRepo.h"

class ManejoUsuario
{
public:
    ManejoUsuario();

    bool registrar(const QString& username, const QString& password);
    bool login(const QString& username, const QString& password);
    void logout();

    bool haySesion() const;
    int getIdUsuarioActual() const;
    const QString& getUsernameActual() const;

private:
    UsuarioRepo mRepo;
    int mIdActual;
    QString mUsernameActual;
};

#endif
