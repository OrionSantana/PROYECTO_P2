#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "redSocial2.h"
#include "usuario2.h"
#include "publicacion2.h"
using namespace std;

/*
//METODOS
    void mostrarPublicacion();

//CONSTRUCTORES
    Publicacion(Usuario* usuario, string fecha, string contenido);
*/

void mostrarPublicacion(){
    cout<<"Fecha-> "<<fecha<<endl;
    cout<<"Contenido-> "<<contenido<<endl;
    cout<<"Usuario-> "<<usuario.nombre<<endl;
}

Publicacion(Usuario* usuario, string fecha, string contenido){
    this->usuario=usuario;
    this->fecha=fecha;
    this->contenido=contenido;

    srand(time(NULL));
    this->id = this->li_p + rand() % (this->ls_p + 1 -this->li_p); //Randomizacion de la id --- IGUAL CREO QUE NUNCA SE USA XD
}
