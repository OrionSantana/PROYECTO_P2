#include <iostream>
#include <vector>
#include <string>
#include "redSocial2.h"
#include "usuario2.h"
#include "publicacion2.h"
#include "rlutil.h"
using namespace std;
using namespace rlutil;

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
            int idUsuario,uMenuOp=1,id_before;
            Usuario* usuarioExplorado;
            Usuario* usuarioExploradoNewAmigo;

            exploreAmigo:
            cout << ".INGRESE EL ID DEL USUARIO QUE DESEA ENCONTRAR" << endl<<endl<<"-->";
            cin >> idUsuario;

            usuarioExplorado = pruebaRed.getUsuario(idUsuario);
            if (usuarioExplorado != nullptr)
            {
                while(uMenuOp!=0){
                cout << ".INFORMACION DEL USUARIO:" << endl;
                cout << "Nombre: " << usuarioExplorado->nombre << endl;
                cout << "Edad: " << usuarioExplorado->edad << endl;
                cout << "Nacionalidad: " << usuarioExplorado->nacionalidad << endl;
                cout << endl<<endl;

                cout<<"0. SALIR"<<endl<<"1. VER LISTA DE AMIGOS"<<endl<<"2. VER PUBLICACIONES"<<endl<<"3. CREAR PUBLICACION"<<endl<<"4. ENTRAR A PERFIL DE AMIGO"<<endl<<"5. AGREGAR UN NUEVO AMIGO"<<endl<<endl<<"-->";
                cin>>uMenuOp;
                if(uMenuOp == 1){

                    cout << ".AMIGOS DEL USUARIO" << endl;
                    usuarioExplorado->mostrarAmigos();
                    cout << endl;
                }
                if (uMenuOp == 2){

                    cout << ".PUBLICACIONES DEL USUARIO" << endl;
                    usuarioExplorado->mostrarPublicaciones();
                    cout << endl;
                }
                if (uMenuOp == 3){
                    usuarioExplorado->crearPublicacion();
                }
                if (uMenuOp == 4){
                    goto exploreAmigo;
                }
                if (uMenuOp == 5){
                    pruebaRed.mostrarUsuarios();
                    cin>>idUsuario;
                    usuarioExploradoNewAmigo = pruebaRed.getUsuario(idUsuario);
                    usuarioExplorado->agregarAmigos(usuarioExploradoNewAmigo);
                }

                }
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
