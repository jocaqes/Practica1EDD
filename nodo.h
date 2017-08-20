#ifndef NODO_H
#define NODO_H



template<class Objeto> class Lista;

template <class Objeto>
class Nodo       
{
    friend class Lista<Objeto>;//la lista debe usar el mismo tipo de objeto que los nodos
private:
    Nodo<Objeto> *siguiente;
    Nodo<Objeto> *anterior;
    Objeto item;//contenido del nodo

public:
    Nodo();//constructor vacio
    Nodo(Objeto);//constructor con el item que va a contener el nodo
    Objeto getItem() const;//recuperar el item del nodo
};

#include "nodo_def.h"//incluyo la definicion de las funciones aqui

#endif // NODO_H

/*

Nodo *Nodo::getSiguiente() const
{
return siguiente;
}
*/
