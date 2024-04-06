#include <iostream>
#include "redSocial2.h"
#include "usuario2.h"
#include "publicacion2.h"
using namespace std;

/*
//METODOS
    void agregarUsuario();
    void mostrarUsuarios();
    void mostrarPublicaciones();
    Usuario* getUsuario(int id);

//CONSTRUCTORES
    RedSocial(string nombre);
    RedSocial(string nombre, vector <Usuario*> usuarios);
    RedSocial(string nombre, vector <Usuario*> usuarios,vector <Publicacion*>publicaciones);
*/

//METODOS -----

void agregarUsuario(Usuario* usuario){
    usuarios.push_back(usuario);
}

void mostrarUsuarios(){
    for (int i=0;i<usuarios.size();i++){
        usuarios[i]->mostrar();
        cout << endl;
    }
}

void mostrarPublicaciones(){
    for (int i=0;i<publicaciones.size();i++){
        publicaciones[i]->mostrarPublicaciones();
    }
}

Usuario* getUsuario(int id){
    bool out=0;
    for (int i=0;i<usuarios.size();i++){
        if (id==usuarios[i].getId()){
            return usuarios[i];
            out=1;
            break;
            // i=usuarios.size();   Creo que esta parte no es necesaria
        }
    }
    if (!out){
    return nullptr;
    }
}

//CONSTRUCTORES -----

//CHECA ESTA MADRE v v v v v ! ! ! ! !
RedSocial::RedSocial(string nom){
    this->nombre=nom;
}

RedSocial::RedSocial(string nom, vector <Usuario*> usu){
    this->nombre=nom;
    this->usuarios=usu;
}

RedSocial::RedSocial(string nom, vector <Usuario*> usu, vector <Publicacion*>pub){
    this->nombre=nom;
    this->usuarios=usu;
    this->publicaciones=pub;
}