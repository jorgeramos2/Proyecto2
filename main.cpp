#include <iostream>
#include<fstream>
#include <string>
#include"Clases.h"
using namespace std;

int main()
{
int opcion,numConfirmacion;
string nombre , nacionalidad,n1,p1,p2;
ifstream pasajeros;
pasajeros.open("Pasajeros.txt");
while(pasajeros>>numConfirmacion>>nacionalidad>>n1>>p1>>p2)
{
    if (numConfirmacion==189)
    {
       cout<<nacionalidad<<"\n";
    }

}
pasajeros.close();
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


