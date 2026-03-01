#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto
{
public:
    //CONSTRUCTOR
    Producto(const QString& codigo, const QString& descripcion);

    //GETTERS
    const QString& getCodigo() const;
    const QString& getDescripcion() const;

    //SETTERS
    void setDescripcion(const QString& descripcion);

private:
    QString mCodigo;
    QString mDescripcion;
};

#endif // PRODUCTO_H
