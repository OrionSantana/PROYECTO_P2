#ifndef publicacion_h
#define publicacion_h

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Publicacion{
private:
    int id;
public:
    string fecha;
    string Contenido;
    Usuario* usuario;

//METODOS
    void mostrarPublicacion();

//CONSTRUCTORES
    Publicacion(Usuario* usuario, string fecha, string contenido);
};

#endif