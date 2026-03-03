#include "ManejoUsuario.h"

ManejoUsuario::ManejoUsuario()
    : mIdActual(-1)
{}

bool ManejoUsuario::registrar(const QString& username, const QString& password){
    if(username.trimmed().isEmpty() || password.isEmpty())
        return false;
    if(mRepo.existeUsername(username))
        return false;
    return mRepo.insertar(username, password);
}

bool ManejoUsuario::login(const QString& username, const QString& password){
    int id;

    if(!mRepo.validarLogin(username, password, id))
        return false;

    mIdActual = id;
    mUsernameActual = username;
    return true;
}

void ManejoUsuario::logout(){
    mIdActual = -1;
    mUsernameActual.clear();
}

bool ManejoUsuario::haySesion() const{
    return mIdActual != -1;
}

int ManejoUsuario::getIdUsuarioActual() const{
    return mIdActual;
}

const QString& ManejoUsuario::getUsernameActual() const{
    return mUsernameActual;
}
