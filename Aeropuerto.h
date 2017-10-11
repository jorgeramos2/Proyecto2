#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED
#include <iostream>
#include<fstream>
#include <string>

class aeropuerto{
public:
aeropuerto();
aeropuerto(string,string,int);
string getCiudad();
string getNombre();
int getClaveAeropuerto();
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

#endif // AEROPUERTO_H_INCLUDED
