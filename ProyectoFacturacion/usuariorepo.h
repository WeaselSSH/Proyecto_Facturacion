#ifndef USUARIOREPO_H
#define USUARIOREPO_H

#include <QString>

class UsuarioRepo
{
public:
    bool existeUsername(const QString& username) const;
    bool insertar(const QString& username, const QString& password) const;
    bool validarLogin(const QString& username, const QString& password, int& outId) const;
};

#endif
