#include <iostream>
#include<fstream>
#include <string>
#include"Hora.h"
#include"Pasajero.h"
#include"Aeropuerto.h"
using namespace std;
const int MAXa = 5;
const int MAXp = 15;
const int MAXv = 10;

int main()
{
    string ArrAeropuerto [MAXa];
    string ArrPasajeros [MAXp];
    string ArrVuelos [MAXv];
    
    string Linea1;
    
    //abrir archivos
    // abrir arhivo leer info txt uno
    ifstream archEnt1;
    archEnt1.open("Aeropuertos.txt");
    //obtener lineas de primer archivo
    do{
        
        getline(archEnt1 , Linea1); //save the number in the corresponding array
        
        iArrValues1 [C1] = Linea1;
        C1++;
        Length1++; //know length of array
        
    } while (!archEnt1.eof());
    
    
    
    
    
    
    
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

break;
case 2:

break;
case 3:

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


