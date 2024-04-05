#include <iostream>
#include <vector>
#include <string>
#include "redSocial.h"
#include "usuario.h"
#include "publicacion.h"
using namespace std;

int main(){
    RedSocial pruebaRed("SHOPIBUY");
    again:
    int option = 0;
    cout<<"0. Salir"<<endl<<"1. Lista de usuarios"<<endl<<"2. Lista de pubicaciones"<<endl<<"3. Explorar usuario"<<endl<<"4. Agregar usuario";
    cin>>option;
    switch(option){
        case 1:
            pruebaRed.mostrarUsuarios();
        break;
        case 2:
            pruebaRed.mostrarPublicaciones();
        break;
        case 4:
            string name, nationality;
            int age;
            cout << "Ingrese el nombre, edad y nacionalidad del nuevo usuario" << endl;
            cin >> name >> age >> nationality;
            Usuario newusuario(name,age,nationality);
            pruebaRed.agregarUsuario(&newusuario);
        break;
        default:
        cout<<endl<<endl<<endl;
        goto again;
        break;
    }

    return 0;
}
