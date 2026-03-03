#include "producto.h"

Producto::Producto(const QString& codigo, const QString& descripcion)
    : mCodigo(codigo), mDescripcion(descripcion), mPrecio(0.0), mStock(0), mCosto(0.0), mActivo(true)
{
}

const QString& Producto::getCodigo() const{
    return mCodigo;
}

const QString& Producto::getDescripcion() const{
    return mDescripcion;
}

double Producto::getPrecio() const{
    return mPrecio;
}

int Producto::getStock() const{
    return mStock;
}

double Producto::getCosto() const{
    return mCosto;
}

bool Producto::getActivo() const{
    return mActivo;
}

void Producto::setDescripcion(const QString& descripcion){
    mDescripcion = descripcion;
}

void Producto::setPrecio(double precio){
    mPrecio = precio;
}

void Producto::setStock(int stock){
    mStock = stock;
}

void Producto::setCosto(double costo){
    mCosto = costo;
}

void Producto::setActivo(bool activo){
    mActivo = activo;
}
