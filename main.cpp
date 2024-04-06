#include <iostream>
#include <vector>
#include <string>
#include "redSocial2.h"
#include "usuario2.h"
#include "publicacion2.h"
using namespace std;

int main(){
    RedSocial pruebaRed("SHOPIBUY");
    int option;
    again:
    option = 0;
    cout<<"0. SALIR"<<endl<<"1. LISTA DE USUARIOS"<<endl<<"2. LISTA DE PUBLICACIONES"<<endl<<"3. EXPLORAR USUARIO"<<endl<<"4. AGREGAR USUARIO"<<endl<<endl<<"-->";
    cin>>option;
    switch(option){
        case 1:
            pruebaRed.mostrarUsuarios();
        break;
        case 2:
            pruebaRed.mostrarPublicaciones();
        break;
        case 3:
        {
            int idUsuario;
            cout << ".INGRESE EL ID DEL USUARIO QUE DESEA ENCONTRAR" << endl<<endl<<"-->";
            cin >> idUsuario;

            Usuario* usuarioExplorado = pruebaRed.getUsuario(idUsuario);
            if (usuarioExplorado != nullptr)
            {
                cout << ".INFORMACION DEL USUARIO:" << endl;
                cout << "Nombre: " << usuarioExplorado->nombre << endl;
                cout << "Edad: " << usuarioExplorado->edad << endl;
                cout << "Nacionalidad: " << usuarioExplorado->nacionalidad << endl;
                cout << endl;

                cout << ".AMIGOS DEL USUARIO" << endl;
                usuarioExplorado->mostrarAmigos();
                cout << endl;

                cout << ".PUBLICACIONES DEL USUARIO" << endl;
                usuarioExplorado->mostrarPublicaciones();
                cout << endl;

            } else {
                cout << ".NO SE ENCONTRARON COINCIDENCIAS CON EL ID QUE INGRESO" << endl;
            }
        }
        break;
        case 4:
        {
            string name, nationality;
            int age;
            cout << "Ingrese el nombre, edad y nacionalidad del nuevo usuario" << endl;
            cin >> name >> age >> nationality;
            Usuario newusuario(name,age,nationality);
            pruebaRed.agregarUsuario(&newusuario);
        }
        break;
        default:
        cout<<endl<<endl<<endl;
        goto again;
        break;
    }

    return 0;
}
