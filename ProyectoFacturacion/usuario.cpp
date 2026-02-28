#include "usuario.h"
#include <QString>

Usuario::Usuario() {} //constructor vacio

Usuario::Usuario(int id, const QString& nombre, const QString& contrasena)
    : mId(id), mNombre(nombre), mContrasena(contrasena) {}
