#include <iostream>
#include "redSocial.h"
#include "usuario.h"
#include "publicacion.h"
using namespace std;

/*
//METODOS
    void mostrarPublicacion();

//CONSTRUCTORES
    Publicacion(Usuario* usuario, string fecha, string contenido);
*/

void mostrarPublicacion(){
    cout<<fecha<<endl;
    cout<<contenido<<endl;
    cout<<usuario.nombre;
}

Publicacion(Usuario* usuario, string fecha, string contenido){
    this->usuario=usuario;
    this->fecha=fecha;
    this->contenido=contenido
}
