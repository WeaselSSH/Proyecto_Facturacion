#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario(); //constructor vacio (quizas lo quito luego)
    Usuario(int id, const QString& nombre, const QString& contrasena);

private:
    int mId;
    QString mNombre;
    QString mContrasena;
};

#endif // USUARIO_H
