#include "Database.h"
#include <QSqlDatabase>
#include <QSqlQuery>

static bool migrar(){
    QSqlQuery q;
    q.exec("PRAGMA foreign_keys = ON;");

    q.exec(
        "CREATE TABLE IF NOT EXISTS usuarios ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "username TEXT NOT NULL UNIQUE,"
        "password TEXT NOT NULL"
        ");"
        );

    q.exec(
        "CREATE TABLE IF NOT EXISTS productos ("
        "codigo TEXT PRIMARY KEY,"
        "descripcion TEXT NOT NULL,"
        "precio REAL NOT NULL CHECK(precio >= 0),"
        "stock INTEGER NOT NULL CHECK(stock >= 0),"
        "costo REAL NOT NULL CHECK(costo >= 0),"
        "activo INTEGER NOT NULL CHECK(activo IN (0,1))"
        ");"
        );

    q.exec(
        "CREATE TABLE IF NOT EXISTS clientes ("
        "id INTEGER PRIMARY KEY,"
        "nombre TEXT NOT NULL,"
        "rubro TEXT NOT NULL,"
        "ubicacion TEXT NOT NULL,"
        "tipo INTEGER NOT NULL,"
        "credito INTEGER NOT NULL CHECK(credito IN (0,1))"
        ");"
        );

    return true;
}

bool Database::init(const QString& filePath){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(filePath);
    if(!db.open()) return false;
    return migrar();
}
