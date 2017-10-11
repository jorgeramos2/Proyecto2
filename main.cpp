#include <iostream>
#include<fstream>
#include <string>
#include "Hora.h"
#include "Aeropuerto.h"
#include "Vuelo.h"
#include "Pasajero.h"

using namespace std;
const int MAXa = 5;
const int MAXp = 15;
const int MAXv = 10;

int main()
{
    string ArrAeropuerto [MAXa];
    string ArrPasajeros [MAXp];
    string ArrVuelos [MAXv];

    string Linea1, Linea2, Final1, Final2; //string linea guarda lo que se recibe del archivo, final guarda lo que se imprime en la pantalla final
    int C1 = 0, C2=0, Length1 = 0, Length2 = 0, cs = 0, h,m;


    //abrir archivos
    // abrir arhivo leer info txt uno
    ifstream archEnt1;
    archEnt1.open("Aeropuertos.txt");

    //abrir arhivo leer info txt dos
    ifstream archEnt2;
    archEnt2.open("Aeropuertos.txt");

    //obtener lineas de primer archivo
    do{

        getline(archEnt1 , Linea1); //save the number in the corresponding array

        ArrAeropuerto [C1] = Linea1;
        C1++;

    } while (!archEnt1.eof());

    //obtener lineas de segudo archivo


    do{
        getline(archEnt2 , Linea2); //save the number in the corresponding array

        ArrPasajeros [C2] = Linea2;
        C2++;

    }while (!archEnt2.eof());

   // do{

     //   cout << "Teclee los datos del un vuelo y precione enter" << endl;

       // cin >> ArrVuelos [cs];
       // cs++;
    //}while (cs <= MAXv);

   // cs=0;


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

                    cout << ArrVuelos [cs] << endl;
                    cs++;
                }while (cs>=MAXv);


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


