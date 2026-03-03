#include "productorepo.h"
#include <QSqlQuery>
#include <QVariant>

bool ProductoRepo::existe(const QString& codigo) const{
    QSqlQuery q;
    q.prepare("SELECT 1 FROM productos WHERE codigo=?");
    q.addBindValue(codigo);
    if(!q.exec()) return false;
    return q.next();
}

bool ProductoRepo::insertar(const Producto& p) const{
    if(p.getCodigo().trimmed().isEmpty()) return false;
    if(p.getPrecio() < 0) return false;
    if(p.getStock() < 0) return false;
    if(p.getCosto() < 0) return false;

    QSqlQuery q;
    q.prepare("INSERT INTO productos(codigo,descripcion,precio,stock,costo,activo) VALUES(?,?,?,?,?,?)");
    q.addBindValue(p.getCodigo());
    q.addBindValue(p.getDescripcion());
    q.addBindValue(p.getPrecio());
    q.addBindValue(p.getStock());
    q.addBindValue(p.getCosto());
    q.addBindValue(p.getActivo() ? 1 : 0);
    return q.exec();
}

bool ProductoRepo::actualizar(const Producto& p) const{
    if(p.getCodigo().trimmed().isEmpty()) return false;
    if(p.getPrecio() < 0) return false;
    if(p.getStock() < 0) return false;
    if(p.getCosto() < 0) return false;

    QSqlQuery q;
    q.prepare("UPDATE productos SET descripcion=?, precio=?, stock=?, costo=?, activo=? WHERE codigo=?");
    q.addBindValue(p.getDescripcion());
    q.addBindValue(p.getPrecio());
    q.addBindValue(p.getStock());
    q.addBindValue(p.getCosto());
    q.addBindValue(p.getActivo() ? 1 : 0);
    q.addBindValue(p.getCodigo());
    return q.exec();
}

bool ProductoRepo::eliminar(const QString& codigo) const{
    QSqlQuery q;
    q.prepare("DELETE FROM productos WHERE codigo=?");
    q.addBindValue(codigo);
    return q.exec();
}

bool ProductoRepo::obtener(const QString& codigo, Producto& out) const{
    QSqlQuery q;
    q.prepare("SELECT codigo, descripcion, precio, stock, costo, activo FROM productos WHERE codigo=?");
    q.addBindValue(codigo);
    if(!q.exec()) return false;
    if(!q.next()) return false;

    out = Producto(q.value(0).toString(), q.value(1).toString());
    out.setPrecio(q.value(2).toDouble());
    out.setStock(q.value(3).toInt());
    out.setCosto(q.value(4).toDouble());
    out.setActivo(q.value(5).toInt() == 1);
    return true;
}

QVector<Producto> ProductoRepo::listar(bool incluirInactivos) const{
    QVector<Producto> res;

    QSqlQuery q;
    if(incluirInactivos){
        q.prepare("SELECT codigo, descripcion, precio, stock, costo, activo FROM productos ORDER BY codigo");
    }else{
        q.prepare("SELECT codigo, descripcion, precio, stock, costo, activo FROM productos WHERE activo=1 ORDER BY codigo");
    }

    if(!q.exec()) return res;

    while(q.next()){
        Producto p(q.value(0).toString(), q.value(1).toString());
        p.setPrecio(q.value(2).toDouble());
        p.setStock(q.value(3).toInt());
        p.setCosto(q.value(4).toDouble());
        p.setActivo(q.value(5).toInt() == 1);
        res.push_back(p);
    }

    return res;
}
