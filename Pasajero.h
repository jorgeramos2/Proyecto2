#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED
#include <iostream>
#include<fstream>
#include <string>

class pasajero{
public:
pasajero();
pasajero(string,string,int);
/// Metodos de acceso
string getNombre();
string getNacionalidad();
int getNumConfirmacion();
/// Metodos de modificacion
void setNombre(string nombre);
void setNacionalidad(string nacionalidad);
void setNumConfirmacion(int numConfirmacion);
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
/// Metodos de acceso
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
/// Metodos de modificacion
void pasajero::setNombre(string nombre)
{
   this->nombre=nombre;
}
void pasajero::setNacionalidad(string nacionalidad)
{
  this->nacionalidad=nacionalidad;
}
void pasajero::setNumConfirmacion(int numConfirmacion)
{
  this->numConfirmacion=numConfirmacion;
}
#endif // PASAJERO_H_INCLUDED
