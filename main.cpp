#include <iostream>
#include<fstream>
#include <string>
#include "Hora.h"
#include "Aeropuerto.h"
#include "Vuelo.h"
#include "Pasajero.h"

using namespace std;
const int MAXa = 6;
const int MAXp = 15;
const int MAXv = 10;

int main()
{
    aeropuerto ArrAeropuerto [MAXa];
    pasajero ArrPasajeros [MAXp];
    Vuelo ArrVuelos [MAXv];
    hora ArrHora[MAXv];
int claveVuelo,claveAeropuerto;
    string linea,destino;
    string Linea1, Linea2, Final1, Final2; //string linea guarda lo que se recibe del archivo, final guarda lo que se imprime en la pantalla final
    int  Length1 = 0 ,cs = 0, cont=1;


    //abrir archivos
    // abrir arhivo leer info txt uno
    ifstream archEnt1;
    archEnt1.open("Aeropuertos.txt");

    //abrir arhivo leer info txt dos
    ifstream archEnt2;
    archEnt2.open("Pasajeros.txt");

    //obtener lineas de primer archivo


    bool che= true;

    //cuantos vuelos se van a meter y cuales son
    while(che==true){
        cout << "cuantos quiere generar" << endl;
        cin >> Length1;
        if (Length1 > 10){
            cout << "solo se permiten 10 vuelos" << endl;
            che=true;
        }
        else if(Length1<=10){
            che=false;
        }

    }




    int h, m, numAsientos;

    do{

        hora hh;
        cout << "vuelo no." << cs+1 << endl << "Teclee la hora del vuelo" << endl;

        cin >> h;


        cout << "Teclee los minutos en los que el vuelo sale" << endl;

        cin >> m;

        cout << "Ingrese el numero de asientos" << endl;

        cin >> numAsientos;
        cout<<"Teclee clave de vuelo"<<endl;
        cin>>claveVuelo;
        cout<<"Teclee clave aeropuerto"<<endl;
        cin>>claveAeropuerto;
        cout<<"Teclee linea"<<endl;
        cin>>linea;
        cout<<"Teclee destino"<<endl;
        cin>>destino;
        hora h2;
        ArrVuelos[cs].setnumAsientos(numAsientos);
        ArrVuelos[cs].setclaveVuelo(claveVuelo);
        ArrVuelos[cs].setclaveAeropuerto(claveAeropuerto);
        ArrVuelos[cs].setDestino(destino);
        ArrVuelos[cs].setLinea(linea);
        ArrHora[cs].setHora(h);
        ArrHora[cs].setMinutos(m);


        //Vuelo::Vuelo(hora hh, int numAsientos, int clabeVuelo, int claveAeropuerto, string linea, string destino, int listaPasajero[MAX])

        cout <<  ArrVuelos[cs].getclaveVuelo()<<endl;
        cout<< ArrHora[cs].getHora()<<endl;
        cout<<ArrHora[cs].getMinutos()<<endl;
        cout << ArrVuelos[cs].getdestino()<<endl;
        cout << ArrVuelos[cs].getlinea()<<endl;
        cout<<ArrVuelos[cs].getnumAsientos()<<endl;
        cout<<ArrVuelos[cs].getclaveAeropuerto()<<endl;

        cs++;
    }while (cs != Length1);

cs=0;


    int opcion;

    do {
        cout << endl
        << " 1 - Consulta de todos los vuelos.\n"
        << " 2 - Dar de alta un pasajero en un vuelo.\n"
        << " 3 - Consulta de vuelo por hora de salida\n"
        << " 4 - Consulta por clave de vuelo\n"
        << " 5 - Consulta de vuelos en un aeropuerto\n"
        << " 6 - Consulta la lista de vuelos en los que viaja un pasajero\n"
        << " 7 - Salir \n"
        << " Ingrese su opcion : ";
        cin >> opcion;

switch (opcion)
{
case 1:


    cout<<"Los vuelos registrados son : "<<endl;
    while(cs != Length1)
{
     hora h2;
    cout<<"Vuelo "<<cont<<endl;
    cout<<"La clave de vuelo es : "<<ArrVuelos[cs].getclaveVuelo()<<endl;
    cout<<"La hora de salida del vuelo es :"<<ArrHora[cs].getHora()<< ":"<<ArrHora[cs].getMinutos()<<endl;
    cout<<"El destino del vuelo es : "<<ArrVuelos[cs].getdestino()<<endl;
    cout<<"La linea del vuelo es : "<<ArrVuelos[cs].getlinea()<<endl;
    cout<<"El numero de asientos disponibles es : "<<ArrVuelos[cs].getnumAsientos()<<endl;
    cout<<" La clave del Aeropuerto es : "<<ArrVuelos[cs].getclaveAeropuerto()<<endl<<endl<<endl;
    cs++;
    cont++;
}


                break;
case 2:
                cout << "Dame el numero de confirmacion" << endl;
                cout << "Dame la clave del vuelo" << endl;


                break;
case 3:

                cout << "Dame la hora en la que sale el vuelo" << endl;
                cin>>h;
                cout << "Dame los minutos en los que sale el vuelo" << endl;
                cin>>m;
                if(h>=0 && h<=23 && m>=0 && m<=59)
                {

                }
                else
                {
                    cout<<"Ingresaste una hora incorrecta"<<endl;
                }
                break;
case 4:

break;
case 5:

break;
case 6:

break;
case 7:


break;
default:
cout << "No existe esta opcion. \n";

break;
}

}while (opcion !=7);
return 0;
 }


