#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED
#include <iostream>
#include<fstream>
#include <string>

class aeropuerto{
public:
aeropuerto();
aeropuerto(string,string,int);
/// Metodos de acceso
string getCiudad();
string getNombre();
int getClaveAeropuerto();
/// Metodos de modificacion
void setCiudad(string ciudad);
void setNombre(string nombre);
void setClaveAeropueto(int claveAeropuerto);
private:
string ciudad;
string nombre;
int claveAeropuerto;
};
aeropuerto::aeropuerto()
{
    claveAeropuerto=0;
}
aeropuerto::aeropuerto(string ciudad,string nombre,int claveAeropuerto)
{
    this->ciudad=ciudad;
    this->nombre=nombre;
    this->claveAeropuerto=claveAeropuerto;
}
/// Metodos de acceso
string aeropuerto::getCiudad()
{
    return ciudad;
}
string aeropuerto::getNombre()
{
    return nombre;
}
int aeropuerto::getClaveAeropuerto()
{
    return claveAeropuerto;
}
/// Metodos de modificacion
void aeropuerto::setCiudad(string ciudad)
{
  this->ciudad=ciudad;
}
void aeropuerto::setNombre(string nombre)
{
    this->nombre=nombre;
}
void aeropuerto::setClaveAeropuerto(int claveAeropuerto)
{
  this->claveAeropuerto=claveAeropuerto;
}
#endif // AEROPUERTO_H_INCLUDED
