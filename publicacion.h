#ifndef publicacion_h
#define publicacion_h

#include <iostream>
#include <vector>
#include <string>
#include "usuario.h"
#include "publicacion.h"

using namespace std;

class Publicacion{
private:
    int id;
public:
    string fecha;
    string contenido;
    Usuario* usuario;

//METODOS
    void mostrarPublicacion();

//CONSTRUCTORES
    Publicacion(Usuario* usuario, string fecha, string contenido);
};

#endif
