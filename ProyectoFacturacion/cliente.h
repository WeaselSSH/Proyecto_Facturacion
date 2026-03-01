#ifndef CLIENTE_H
#define CLIENTE_H

#include "Tipos.h"

#include <QString>

class Cliente{
public:
    //CONSTRUCTOR
    Cliente(int id, const QString &nombre, const QString &rubro, const QString &ubicacion, TipoCliente tipo, bool credito);

    //GETTERS
    int getId() const;
    const QString& getNombre() const;
    const QString& getRubro() const;
    const QString& getUbicacion() const;
    TipoCliente getTipo() const;
    bool getCredito() const;

    //SETTERS
    void setNombre(const QString& nombre);
    void setRubro(const QString& rubro);
    void setUbicacion(const QString& ubicacion);
    void setTipo(TipoCliente tipo);
    void setCredito(bool credito);

private:
    int mId;
    QString mNombre;
    QString mRubro;
    QString mUbicacion;
    TipoCliente mTipo;
    bool mCredito;
};

#endif // CLIENTE_H
