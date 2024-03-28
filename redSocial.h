#ifndef redSocial_h
#define redSocial_h

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class RedSocial{
private:
    vector <Usuario*> usuarios;
    vector <Publicacion*> publicaciones;
public:
    string nombre;
    int numeroDeUsuarios;
    int numeroDePublicaciones;

//METODOS
    void agregarUsuario(Usuario* usuario);
    void mostrarUsuarios();
    void mostrarPublicaciones();
    Usuario* getUsuario(int id); 

//CONSTRUCTORES
    RedSocial(string nombre);
    RedSocial(string nombre, vector <Usuario*> usuarios);
    RedSocial(string nombre, vector <Usuario*> usuarios,vector <Publicacion*>publicaciones);
};

#endif