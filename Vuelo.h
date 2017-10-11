//
//  Vuelo.h
//  Proyecto Dos
//
//  Created by Arturo Arellano on 10/10/17.
//  Copyright © 2017 Arturo Arellano. All rights reserved.
//


const int MAX = 10;
#ifndef Vuelo_h
#define Vuelo_h

#include "Hora.h"
#include "Aeropuerto.h"
#include "Pasajero.h"


class Vuelo {
private:
    hora horaSalida; //hora salida
    int numAsientos;
    int claveVuelo;
    int claveAeropuerto;
    string linea;
    string destino;
    int listaPasajero [MAX]; //♣	El atributo listaPasajero de la clase Vuelo es un arreglo de 10 elementos, en este arreglo se almacena el numConfirmacion de cada uno de los pasajeros que viajan en ese vuelo.


public:
    Vuelo(hora, int, int, int, string, string, int[MAX]); //numero asientos,
    Vuelo();

    //mÈtodos de acceso
    hora gethora();
    int getnumAsientos();
    int getclabeVuelo();
    int getclaveAeropuerto();
    string getlinea();
    string getdestino();
    int getlistaPasajeros[MAX];

    //mÈtodos de modificacion
    void sethora(hora hset);
    void setnumAsientos(int numAsientos);
    void setclaveVuelo(int claveVuelo);
    void setclaveAeropuerto(int claveAeropuerto);
    void setLinea(string linea);
    void setDestino(string destino);
    void setlistaPasajero (int listapasajero [MAX]);

};



Vuelo:: Vuelo()
{
    hora hh; //hora salida
    int numAsientos = 0;
    int clabeVuelo= 0;
    int claveAeropuerto=0;
    string linea = "sin asignar";
    string destino = "sin asignar";
    //int listaPasajero[MAX] = 0;//aqui me aparece un error, no se como poner el array

}
Vuelo::Vuelo(hora hh, int numAsientos, int clabeVuelo, int claveAeropuerto, string linea, string destino, int listaPasajero[MAX]){

    this->horaSalida=horaSalida;
    this->numAsientos=numAsientos;
    this->claveVuelo=clabeVuelo;
    this->claveAeropuerto=claveAeropuerto;
    this->linea=linea;
    this->destino=destino;
    this->listaPasajero[MAX]=listaPasajero[MAX]; //aqui me aparece un error, no se como poner el array

}


//mÈtodos de acceso
hora Vuelo:: gethora(){
    return horaSalida;
}
int Vuelo:: getclabeVuelo(){
    return claveVuelo;
}
string Vuelo:: getlinea(){
    return linea;
}
string Vuelo :: getdestino(){
    return destino;
}
//int getlistaPasajeros[]; //aqui me aparece un error, no se como poner el array

//mÈtodos de modificacion
void Vuelo:: sethora(hora hset){
    this->horaSalida=horaSalida;
}

void Vuelo:: setclaveVuelo(int claveVuelo){
    this->claveVuelo=claveVuelo;
}
void Vuelo:: setLinea(string linea){
    this->linea=linea;
}
void Vuelo:: setDestino(string destino){
    this->destino=destino;
}
void setlistaPasajero (int listapasajero [MAX]);






#endif /* Vuelo_h */
