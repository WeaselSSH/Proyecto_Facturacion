#ifndef CLIENTEREPO_H
#define CLIENTEREPO_H

#include <QVector>
#include "cliente.h"

class ClienteRepo
{
public:
    bool insertar(const Cliente& c) const;
    bool actualizar(const Cliente& c) const;
    bool eliminar(int id) const;

    bool obtener(int id, Cliente& out) const;
    QVector<Cliente> listar() const;

    bool existe(int id) const;
};

#endif
