#include "Cliente.h"

//CONSTRUCTOR
Cliente::Cliente(int id, const QString &nombre, const QString &rubro, const QString &ubicacion, TipoCliente tipo, bool credito)
    : mId(id), mNombre(nombre), mRubro(rubro), mUbicacion(ubicacion), mTipo(tipo), mCredito(credito)
{
}

//GETTERS
int Cliente::getId() const{
    return mId;
}

const QString& Cliente::getNombre() const{
    return mNombre;
}

const QString& Cliente::getRubro() const{
    return mRubro;
}

const QString& Cliente::getUbicacion() const{
    return mUbicacion;
}

TipoCliente Cliente::getTipo() const{
    return mTipo;
}

bool Cliente::getCredito() const{
    return mCredito;
}

//SETTERS
void Cliente::setNombre(const QString& nombre){
    mNombre = nombre;
}

void Cliente::setRubro(const QString& rubro){
    mRubro = rubro;
}

void Cliente::setUbicacion(const QString& ubicacion){
    mUbicacion = ubicacion;
}

void Cliente::setTipo(TipoCliente tipo){
    mTipo = tipo;
}

void Cliente::setCredito(bool credito){
    mCredito = credito;
}
