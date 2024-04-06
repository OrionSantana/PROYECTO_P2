#include <iostream>
#include "redSocial2.h"
#include "usuario2.h"
#include "publicacion2.h"
using namespace std;

/*
//METODOS
    int getId ();
    void mostrar();
    void mostrarAmigos();
    void mostrarPublicaciones();
    void agregarAmigos(Usuario* nuevoAmigo);
    void crearPublicacion();
    Usuario* getAmigo(int id);

//CONSTRUCTORES
    Usuario(string nombre);
    Usuario(string nombre, int edad);
    Usuario(string nombre, int edad,string nacionalidad);
*/

//METODOS -----

int getId(){
    return id;
}

void mostrar(){
    cout<<nombre;
    cout<<edad;
    cout<<nacionalidad;
    cout<<id;
}
//Creo que ya esta pero no puedo compilar
void mostrarAmigos(){
        cout << "Los amigos de " << nombre << " son:" << endl;

        for (int i = 0; i < amigos.size(); i++)
        {
            Usuario* amigo = amigos[i];

            cout << "Nombre: " << amigo->nombre << endl;
            cout << "Edad: " << amigo->edad << endl;
            cout << "Nacionalidad: " << amigo->nacionalidad << endl;
            cout << endl;

        }
}

void mostrarPublicaciones(){
    for (int i=0;i<publicaciones.size();i++){
        Publicacion* publicacion = publicaciones[i];
        cout << "Fecha: " << publicacion->fecha << endl;
        cout << "Contenido: " << publicacion->contenido << endl;
        cout << "Usuario: " << publicacion->usuario->nombre << endl;
        cout << endl;
    }
}
// Creo que ya sirve pero no puedo compilr entonces no se
void agregarAmigo(Usuario* nuevoAmigo){
    this->amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}
//¯\_(ツ)_/¯
void crearPublicacion(){
    Publicacion nueva;
    publicaicones.push_back(nueva*);
}

Usuario* getAmigo(int id){
     bool out=0;
    for (int i=0;i<amigos.size();i++){
        if (id==amigos[i].getId){
            return amigos[i];
            out=1;
            i=amigos.size();
        }
    }
    if (out==0){
    return nullptr;
    }
}

//CONSTRUCTORES -----

Usuario (string nom){
    this->nombre=nom;
}

Usuario (string nom,int ed){
    this->nombre=nom;
    this->edad=ed;
}

Usuario (string nom,int ed,string nac){
    this->nombre=nom;
    this->edad=ed;
    this->nacionalidad=nac;
}