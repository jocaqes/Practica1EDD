#include "lista.h"

//base obtenida del libro C++ Como programar 4ta edicion


template<class Objeto>
Lista<Objeto>::Lista()
{
    cantidad_nodos=0;
    cabeza=0;//lista vacia
}

template<class Objeto>
void Lista<Objeto>::addOnTop(const Objeto &item)
{
    Nodo<Objeto> *nuevo=new Nodo<Objeto>(item);//creo el puntero al nuevo nodo que se va a insertar
    if(estaVacia()){
        cabeza=nuevo;
    }else{
        nuevo->siguiente=cabeza;//el nuevo apunta a cabeza
        cabeza=nuevo;//ahora el nuevo es el primero
    }
    ++cantidad_nodos;
}

template<class Objeto>
bool Lista<Objeto>::getFromTop(Objeto &item)
{
    if(estaVacia())
        return false;
    else{
        Nodo<Objeto> *aux=cabeza;
        if(cantidad_nodos==1)
            cabeza=0;
        else
            cabeza=cabeza->siguiente;
        item=aux->getItem();
        delete aux;
        --cantidad_nodos;
        return true;
    }
}

template<class Objeto>
bool Lista<Objeto>::estaVacia() const
{
    return cantidad_nodos==0;
}

template<class Objeto>
int Lista<Objeto>::getCantNodos()
{
    return cantidad_nodos;
}
