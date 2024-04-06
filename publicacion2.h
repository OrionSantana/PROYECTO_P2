#ifndef publicacion2_h
#define publicacion2_h

#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "usuario2.h"
#include "publicacion2.h"

using namespace std;

class Publicacion{
private:
    int id;

    int li_p=1; //limite inferior para la randomización del id;
    int ls_p=10000; //limite superior para la randomización del id;
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
