#include <iostream>
#include <time.h>
#include <stdlib.h>
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
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Nacionalidad"<<nacionalidad<<endl;
    cout<<"Id: "<<id<<endl;
}
//Creo que ya esta pero no puedo compilar
void mostrarAmigos(){
        cout << ".LOS AMIGOS DE " << nombre << " SON" << endl<< endl;
        for (int i = 0; i < amigos.size(); i++)
        {
            cout<<i+1<<"."<<endl;
            Usuario* amigo = amigos[i];

            cout << "Nombre: " << amigo->nombre << endl;
            cout << "Edad: " << amigo->edad << endl;
            cout << "Nacionalidad: " << amigo->nacionalidad << endl;
            cout<< "Id: "<< amigo->getId() <<endl;
            cout << endl;
            //Tal vez arriesgarnos y usar la funcion mostrar() de amigo??????

        }
}

void mostrarPublicaciones(){
    cout << ".LAS PUBLCIACIONES DE " << nombre << " SON" << endl<<endl;

    for (int i=0;i<publicaciones.size();i++){
        cout<<i+1<<"."<<endl;
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
    string fecha,contenido;
    cout<<endl<<".INTRODUSCA LA FECHA DEL DIA DE HOY"<<endl<<endl<<"-->";
    cin>>fecha;
    cout<<endl<<".INTRODUSCA EL CONTENIDO DE LA PUBLICACION"<<endl<<endl<<"-->";
    cin>>contenido;
    cout<<endl;
    Publicacion nueva(this,fecha,contenido);
    publicaciones.push_back(&nueva);
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

    srand(time(NULL));
    this->id = this->li_u + rand() % (this->ls_u + 1 -this->li_u); //Randomizacion de la id
}

Usuario (string nom,int ed){
    this->nombre=nom;
    this->edad=ed;

    srand(time(NULL));
    this->id = this->li_u + rand() % (this->ls_u + 1 -this->li_u); //Randomizacion de la id
}

Usuario (string nom,int ed,string nac){
    this->nombre=nom;
    this->edad=ed;
    this->nacionalidad=nac;

    srand(time(NULL));
    this->id = this->li_u + rand() % (this->ls_u + 1 -this->li_u); //Randomizacion de la id
}
