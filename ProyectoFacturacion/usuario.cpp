#include "usuario.h"
#include <QString>

//CONSTRUCTOR
Usuario::Usuario(int id, const QString& nombre, const QString& contrasena)
    : mId(id), mNombre(nombre), mContrasena(contrasena)
{}

//GETTERS
int Usuario::getId() const{
    return mId;
}

const QString& Usuario::getNombre() const{
    return mNombre;
}

const QString& Usuario::getContrasena() const{
    return mContrasena;
}

//SETTERS
void Usuario::setNombre(const QString& nombre){
    mNombre = nombre;
}

void Usuario::setContrasena(const QString& contrasena){
    mContrasena = contrasena;
}
