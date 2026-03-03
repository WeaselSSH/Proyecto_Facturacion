#include "UsuarioRepo.h"
#include <QSqlQuery>
#include <QVariant>

bool UsuarioRepo::existeUsername(const QString& username) const{
    QSqlQuery q;
    q.prepare("SELECT 1 FROM usuarios WHERE username=?");
    q.addBindValue(username);
    if(!q.exec()) return false;
    return q.next();
}

bool UsuarioRepo::insertar(const QString& username, const QString& password) const{
    QSqlQuery q;
    q.prepare("INSERT INTO usuarios(username,password) VALUES(?,?)");
    q.addBindValue(username);
    q.addBindValue(password);
    return q.exec();
}

bool UsuarioRepo::validarLogin(const QString& username, const QString& password, int& outId) const{
    QSqlQuery q;
    q.prepare("SELECT id FROM usuarios WHERE username=? AND password=?");
    q.addBindValue(username);
    q.addBindValue(password);
    if(!q.exec()) return false;
    if(!q.next()) return false;
    outId = q.value(0).toInt();
    return true;
}
