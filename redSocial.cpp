#include <iostream>
using namespace std;

/*
    void agregarUsuario();
    void mostrarUsuarios();
    void mostrarPublicaciones();
    Usuario* getUsuario(int id); 

    //CONSTRUCTORES
    RedSocial(string nombre);
    RedSocial(string nombre, vector <Usuario*> usuarios);
    RedSocial(string nombre, vector <Usuario*> usuarios,vector <Publicacion*>publicaciones);
*/

void agregarUsuario(Usuario* usuario){
    usuarios.push_back(usuario);
}

void mostrarUsuario(){
    for (int i=0;i<usuarios.size();i++){
        usuarios[i]->mostrar();
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
        if (id==usuarios[i].getId){
            return usuarios[i];
            out=1;
            i=usuarios.size();
        }
    }
    if (out==0){
    return nullptr;
    }
}