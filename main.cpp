#include <iostream>
#include <vector>
#include <string>
#include "redSocial.h"
#include "usuario.h"
#include "publicacion.h"
using namespace std;

int main(){
    again:
    int option = 0;
    cout<<"0. Salir"<<endl<<"1. Lista de usuarios"<<endl<<"2. Lista de pubicaciones"<<endl<<"3. Explorar usuario"<<endl<<"4. Agregar usuario";
    cin>>option;
    switch(option){
        case 1:
            mostrarUsuarios();
        break;
        case 2:
            mostrarPublicaciones();
        break;
        case 4:
            Usuario newusuario;
            cout << "Ingrese el nombre, edad y nacionalidad del nuevo usuario" << endl;
            cin >> newusuario.nombre >> newusuario.edad >> newusuario.nacionalidad;
            agregarUsuario(&newusuario);
        break;
        default:
        cout<<endl<<endl<<endl;
        goto again;
    }

    return 0;
}