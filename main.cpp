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
    pasajeros ArrPasajeros [MAXp];
    Vuelo ArrVuelos [MAXv];

    string Linea1, Linea2, Final1, Final2; //string linea guarda lo que se recibe del archivo, final guarda lo que se imprime en la pantalla final
    int C1 = 0, C2=0, Length1 = 0, Length2 = 0, cs = 0;


    //abrir archivos
    // abrir arhivo leer info txt uno
    ifstream archEnt1;
    archEnt1.open("Aeropuertos.txt");

    //abrir arhivo leer info txt dos
    ifstream archEnt2;
    archEnt2.open("Pasajeros.txt");

    //obtener lineas de primer archivo
    do{

        getline(archEnt1 , Linea1); //save the number in the corresponding array

        ArrAeropuerto [C1] = Linea1;
        C1++;

    } while (!archEnt1.eof()||C1>=MAXa);

    //obtener lineas de segudo archivo


    do{
        getline(archEnt2 , Linea2); //save the number in the corresponding array

        ArrPasajeros [C2] = Linea2;
        C2++;

    }while (!archEnt2.eof());

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

        cout << "vuelo no." << cs+1 << endl << "Teclee la hora del vuelo" << endl;

        cin >> h;

        hh.setHora(h);

        cout << "Teclee los minutos en los que el vuelo sale" << endl;

        cin >> m;
        hh.setMinutos(m);

        cout << "Ingrese el numero de asientos" << endl;

        cin >> numAsientos;
        cout<<"Teclee clave de vuelo"<<endl;
        cin>>claveVuelo;





        //Vuelo::Vuelo(hora hh, int numAsientos, int clabeVuelo, int claveAeropuerto, string linea, string destino, int listaPasajero[MAX])



        cs++;
    }while (cs >= MAXv-1 | cs <= Length1-1);

    cs=0;

    int ca = 0;

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

                do{
                    string show= ArrVuelos[ca];
                    cout << show << endl;
                    ca++;
                }while (ca>=MAXv-1 || ca <= Length1);


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
                    cout<<"Correcto";
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


