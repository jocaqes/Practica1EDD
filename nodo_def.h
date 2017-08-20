#include "nodo.h"



template<class Objeto>
Nodo<Objeto>::Nodo()
{
    siguiente=0;//nodo null
    anterior=0;//nodo null
}

template<class Objeto>
Nodo<Objeto>::Nodo(Objeto item){
    Nodo();
    this->item=item;
}

template<class Objeto>
Objeto Nodo<Objeto>::getItem() const{
    return item;
}

