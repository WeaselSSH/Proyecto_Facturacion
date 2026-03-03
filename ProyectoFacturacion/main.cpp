#include <QApplication>
#include <QDir>
#include "Database.h"
#include "menuprincipal.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QDir().mkpath("data");
    if(!Database::init(QDir::currentPath() + "/data/app.db"))
        return 1;

    MenuPrincipal w;
    w.show();
    return a.exec();
}
