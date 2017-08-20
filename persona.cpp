#include "persona.h"


Persona::Persona()
{

}

Persona::~Persona()
{

}

Persona::Persona(char *nombre, int telefono, char *direccion)
{
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
}

char *Persona::getNombre() const
{
    return this->nombre;
}

int Persona::getTelefono() const
{
    return this->telefono;
}

char *Persona::getDireccion() const
{
    return this->direccion;
}



