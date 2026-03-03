#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto
{
public:
    Producto(const QString& codigo, const QString& descripcion);

    const QString& getCodigo() const;
    const QString& getDescripcion() const;
    double getPrecio() const;
    int getStock() const;
    double getCosto() const;
    bool getActivo() const;

    void setDescripcion(const QString& descripcion);
    void setPrecio(double precio);
    void setStock(int stock);
    void setCosto(double costo);
    void setActivo(bool activo);

private:
    QString mCodigo;
    QString mDescripcion;
    double mPrecio;
    int mStock;
    double mCosto;
    bool mActivo;
};

#endif
