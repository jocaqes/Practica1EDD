#ifndef LISTA_H
#define LISTA_H
#include <new>
#include "nodo.h"



template<class Objeto>
class Lista
{

private:
    int cantidad_nodos;
    Nodo<Objeto> *cabeza;
    Nodo<Objeto> *pie;

public:
    Lista();//constructor vacio
    void addOnTop(const Objeto &);//agregar al tope de la lista
    bool getFromTop(Objeto &);//obtener el dato al tope de la lista
    bool addOnBottom(const Objeto &);//agregar al final de la lista

    bool estaVacia() const;//para verificar si la lista esta vacia
    int getCantNodos();//obtener el numero de nodos en la lista


};
#include "lista_def.h"

#endif // LISTA_H
