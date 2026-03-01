#include "Producto.h"

//CONSTRUCTOR
Producto::Producto(const QString& codigo, const QString& descripcion)
    : mCodigo(codigo), mDescripcion(descripcion)
{}

//GETTERS
const QString& Producto::getCodigo() const{
    return mCodigo;
}

const QString& Producto::getDescripcion() const{
    return mDescripcion;
}

//SETTERS
void Producto::setDescripcion(const QString& descripcion){
    mDescripcion = descripcion;
}
