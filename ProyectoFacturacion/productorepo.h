#ifndef PRODUCTOREPO_H
#define PRODUCTOREPO_H

#include <QString>
#include <QVector>
#include "producto.h"

class ProductoRepo
{
public:
    bool insertar(const Producto& p) const;
    bool actualizar(const Producto& p) const;
    bool eliminar(const QString& codigo) const;

    bool obtener(const QString& codigo, Producto& out) const;
    QVector<Producto> listar(bool incluirInactivos = true) const;

    bool existe(const QString& codigo) const;
};

#endif
