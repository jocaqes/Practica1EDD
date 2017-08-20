#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
private:
    char *nombre;
    int telefono;
    char *direccion;

public:
    Persona();//constructor vacio
    ~Persona();//destructor
    Persona(char *,int,char *);//constructor con parametros
    char *getNombre() const;
    int getTelefono() const ;
    char *getDireccion() const;


};

#endif // PERSONA_H
