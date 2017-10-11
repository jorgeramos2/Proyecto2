#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED
#include <iostream>
#include<fstream>
#include <string>

class pasajero{
public:
pasajero();
pasajero(string,string,int);
string getNombre();
string getNacionalidad();
int getNumConfirmacion();
private:
string nombre;
string nacionalidad;
int numConfirmacion;
};
pasajero::pasajero()
{
    numConfirmacion=0;
}
pasajero::pasajero(string nombre,string nacionalidad,int numConfirmacion)
{
    this->nombre=nombre;
    this->nacionalidad=nacionalidad;
    this->numConfirmacion=numConfirmacion;
}
string pasajero::getNombre()
{
    return nombre;
}
string pasajero::getNacionalidad()
{
    return nacionalidad;
}
int pasajero::getNumConfirmacion()
{
    return numConfirmacion;
}
#endif // PASAJERO_H_INCLUDED
