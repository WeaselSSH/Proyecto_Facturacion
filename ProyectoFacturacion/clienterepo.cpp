#include "clienterepo.h"
#include <QSqlQuery>
#include <QVariant>

bool ClienteRepo::existe(int id) const{
    QSqlQuery q;
    q.prepare("SELECT 1 FROM clientes WHERE id=?");
    q.addBindValue(id);
    if(!q.exec()) return false;
    return q.next();
}

bool ClienteRepo::insertar(const Cliente& c) const{
    if(c.getId() <= 0) return false;
    if(c.getNombre().trimmed().isEmpty()) return false;
    if(c.getRubro().trimmed().isEmpty()) return false;
    if(c.getUbicacion().trimmed().isEmpty()) return false;

    QSqlQuery q;
    q.prepare("INSERT INTO clientes(id,nombre,rubro,ubicacion,tipo,credito) VALUES(?,?,?,?,?,?)");
    q.addBindValue(c.getId());
    q.addBindValue(c.getNombre());
    q.addBindValue(c.getRubro());
    q.addBindValue(c.getUbicacion());
    q.addBindValue(static_cast<int>(c.getTipo()));
    q.addBindValue(c.getCredito() ? 1 : 0);
    return q.exec();
}

bool ClienteRepo::actualizar(const Cliente& c) const{
    if(c.getId() <= 0) return false;
    if(c.getNombre().trimmed().isEmpty()) return false;
    if(c.getRubro().trimmed().isEmpty()) return false;
    if(c.getUbicacion().trimmed().isEmpty()) return false;

    QSqlQuery q;
    q.prepare("UPDATE clientes SET nombre=?, rubro=?, ubicacion=?, tipo=?, credito=? WHERE id=?");
    q.addBindValue(c.getNombre());
    q.addBindValue(c.getRubro());
    q.addBindValue(c.getUbicacion());
    q.addBindValue(static_cast<int>(c.getTipo()));
    q.addBindValue(c.getCredito() ? 1 : 0);
    q.addBindValue(c.getId());
    return q.exec();
}

bool ClienteRepo::eliminar(int id) const{
    QSqlQuery q;
    q.prepare("DELETE FROM clientes WHERE id=?");
    q.addBindValue(id);
    return q.exec();
}

bool ClienteRepo::obtener(int id, Cliente& out) const{
    QSqlQuery q;
    q.prepare("SELECT id, nombre, rubro, ubicacion, tipo, credito FROM clientes WHERE id=?");
    q.addBindValue(id);
    if(!q.exec()) return false;
    if(!q.next()) return false;

    out = Cliente(
        q.value(0).toInt(),
        q.value(1).toString(),
        q.value(2).toString(),
        q.value(3).toString(),
        static_cast<TipoCliente>(q.value(4).toInt()),
        q.value(5).toInt() == 1
        );
    return true;
}

QVector<Cliente> ClienteRepo::listar() const{
    QVector<Cliente> res;

    QSqlQuery q;
    q.prepare("SELECT id, nombre, rubro, ubicacion, tipo, credito FROM clientes ORDER BY id");
    if(!q.exec()) return res;

    while(q.next()){
        Cliente c(
            q.value(0).toInt(),
            q.value(1).toString(),
            q.value(2).toString(),
            q.value(3).toString(),
            static_cast<TipoCliente>(q.value(4).toInt()),
            q.value(5).toInt() == 1
            );
        res.push_back(c);
    }

    return res;
}
