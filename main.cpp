#include <QCoreApplication>
#include "persona.h"
//#include "nodo.h"
#include "lista.h"
#include <iostream>
#include <new>

using std::cout;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char nombre[]="jose";
    char nombre2[]="luis";
    char nombre3[]="rony";
    char nombre4[]="mom";
    char nombre5[]="padre";
    int telefono=55638790;
    char direccion[]="10av A, 9-44 z17 san Fernando";
    Persona yo(nombre,telefono,direccion);
    Persona luis(nombre2,telefono,direccion);
    Persona rony(nombre3,telefono,direccion);
    Persona mom(nombre4,telefono,direccion);
    Persona padre(nombre5,telefono,direccion);

    Lista<Persona> lista;
    lista.addOnTop(yo);
    lista.addOnTop(luis);
    lista.addOnTop(rony);
    lista.addOnTop(mom);
    lista.addOnTop(padre);


    cout<<"Hola mundo de c++\n";
    cout<<lista.getCantNodos()<<'\n';
    Persona salida;
    while(lista.getFromTop(salida)){
        cout<<salida.getNombre()<<" cuanto queda:"<<lista.getCantNodos()<<'\n';
    }




    /*char nombre[]="jose";
    int telefono=55638790;
    char direccion[]="10av A, 9-44 z17 san Fernando";
    Persona yo(nombre,telefono,direccion);
    cout<<yo.getTelefono()<<'\n';
    cout<<yo.getNombre()<<" :"<<'\n';
    cout<<yo.getDireccion()<<" :"<<'\n';
    */
    return a.exec();
}
