#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario{
public:
    //CONSTRUCTOR
    Usuario(int id, const QString& nombre, const QString& contrasena);

    //GETTERS
    int getId() const;
    const QString& getNombre() const;
    const QString& getContrasena() const;

    //SETTERS
    void setNombre(const QString& nombre);
    void setContrasena(const QString& contrasena);

private:
    int mId;
    QString mNombre;
    QString mContrasena;
};

#endif // USUARIO_H
