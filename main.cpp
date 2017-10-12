#include <iostream>
#include<fstream>
#include <string>
#include "Hora.h"
#include "Aeropuerto.h"
#include "Vuelo.h"
#include "Pasajero.h"

using namespace std;
//// Contantes para los arreglos de objetos
const int MAXa = 6;
const int MAXp = 15;
const int MAXv = 10;

int main()
{
//// Declaracion de arreglos de objetos
    aeropuerto ArrAeropuerto [MAXa];
    pasajero ArrPasajeros [MAXp];
    Vuelo ArrVuelos [MAXv];
    hora ArrHora[MAXv];
////Declaracion de variables
int claveVuelo,claveAeropuerto,cclaveAeropuerto,Length1 = 0 ,cs = 0, cont=1,i=0,j,k=0,cont2=0,h,m,numAsientos,numConfirmacion, cont3=0;
string linea,destino,ciudad,nombre,nnombre,nacionalidad;
bool che= true;



    //abrir archivos
    // abrir arhivo leer info txt uno
    ifstream archEnt1;
    archEnt1.open("Aeropuertos.txt");

    //abrir arhivo leer info txt dos
    ifstream archEnt2;
    archEnt2.open("Pasajeros.txt");

    //obtener lineas de primer archivo






    while(archEnt1 >> ciudad >> nombre >> claveAeropuerto){

        ArrAeropuerto[cont2].setCiudad(ciudad);
        ArrAeropuerto[cont2].setNombre(nombre);
        ArrAeropuerto[cont2].setClaveAeropueto(claveAeropuerto);

        cont2++;
    }
archEnt1.close();



    do {
        archEnt2 >> numConfirmacion >> nacionalidad;
        getline(archEnt2, nnombre);

        ArrPasajeros[cont3].setNumConfirmacion(numConfirmacion);
        ArrPasajeros[cont3].setNacionalidad(nacionalidad);
        ArrPasajeros[cont3].setNombre(nnombre);
    } while (!archEnt2.eof());
archEnt2.close();






    //cuantos vuelos se van a meter y cuales son
    while(che==true){
        cout << "Cuantos vuelos quieres generar" << endl;
        cin >> Length1;
        if (Length1 > 10){
            cout << "solo se permiten 10 vuelos" << endl;
            che=true;
        }
        else if(Length1<=10){
            che=false;
        }

    }




    do{


        cout << "vuelo no." << cs+1 << endl << "Teclee la hora del vuelo" << endl;

        cin >> h;
        if(h>=0 && h<=23)
        {
          cout << "Teclee los minutos en los que el vuelo sale" << endl;

        cin >> m;
        if(m>=0 && m<=59)
        {
         cout << "Ingrese el numero de asientos" << endl;

        cin >> numAsientos;
        cout<<"Teclee clave de vuelo"<<endl;
        cin>>claveVuelo;
        cout<<"Teclee clave aeropuerto"<<endl;
        cin>>claveAeropuerto;
        if(claveAeropuerto==ArrAeropuerto[0].getClaveAeropuerto()||claveAeropuerto==ArrAeropuerto[1].getClaveAeropuerto()||
           claveAeropuerto==ArrAeropuerto[2].getClaveAeropuerto()||claveAeropuerto==ArrAeropuerto[3].getClaveAeropuerto()||
           claveAeropuerto==ArrAeropuerto[4].getClaveAeropuerto()||claveAeropuerto==ArrAeropuerto[5].getClaveAeropuerto())
        {

        cout<<"Teclee linea"<<endl;
        cin>>linea;
        cout<<"Teclee destino"<<endl;
        cin>>destino;
        cout<<endl<<endl<<endl;
        ArrVuelos[cs].setnumAsientos(numAsientos);
        ArrVuelos[cs].setclaveVuelo(claveVuelo);
        ArrVuelos[cs].setclaveAeropuerto(claveAeropuerto);
        ArrVuelos[cs].setDestino(destino);
        ArrVuelos[cs].setLinea(linea);
        ArrHora[cs].setHora(h);
        ArrHora[cs].setMinutos(m);
        }
        else{
            cout<<"Clave de aeropuerto no existe"<<endl;
            return 0;

        }
        }
        else{
            cout<<"Minuto no valido"<<endl;
            return 0;
        }
        }
        else{
            cout<<"Hora no valida"<<endl;
            return 0;
        }


        cs++;
    }while (cs != Length1);

cs=0;

/////Menu
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
        cout<<endl<<endl;
switch (opcion)
{
case 1:
//// Muestra los vuelos registrados

    cout<<"Los vuelos registrados son : "<<endl;
    while(cs != Length1)
{

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
///// Pedir horas y minutos
                cout << "Dame la hora en la que sale el vuelo" << endl;
                cin>>h;
                cout << "Dame los minutos en los que sale el vuelo" << endl;
                cin>>m;
                cout<<endl<<endl;
////// Verificiar que sea una hora valida
                if(h>=0 && h<=23 && m>=0 && m<=59)
                {
                   while(i!=Length1)
                   {
////// Verificar que exista un vuelo con la hora que ingreso el usuario
                       if(h==ArrHora[i].getHora()&& m==ArrHora[i].getMinutos())
                       {
                        cout<<"Vuelo :"<<endl;
                        cout<<"La clave de vuelo es : "<<ArrVuelos[i].getclaveVuelo()<<endl;
                        cout<<"El destino del vuelo es : "<<ArrVuelos[i].getdestino()<<endl;
                        cout<<"La linea del vuelo es : "<<ArrVuelos[i].getlinea()<<endl;
                        cout<<"El numero de asientos disponibles es : "<<ArrVuelos[i].getnumAsientos()<<endl;
                        cout<<" La clave del Aeropuerto es : "<<ArrVuelos[i].getclaveAeropuerto()<<endl<<endl<<endl;
                        i++;
                       }
                       else{
                        i++;
                       }
                   }
                }
                else
                {
                    cout<<"Ingresaste una hora incorrecta"<<endl;
                }
                break;
case 4:

break;

case 5:
cout<<"Ingrese el nombre del aeropuerto"<<endl;
cin>>nombre;
k=0;
for(j=0;j<=cont2;j++)
{
 if(ArrAeropuerto[j].getNombre()==nombre)
{
        cout<<"Vuelo"<<endl;
        cout<<"La clave de vuelo es : "<<ArrVuelos[j].getclaveVuelo()<<endl;
        cout<<"El destino del vuelo es : "<<ArrVuelos[j].getdestino()<<endl;
        cout<<"La linea del vuelo es : "<<ArrVuelos[j].getlinea()<<endl;
        cout<<"El numero de asientos disponibles es : "<<ArrVuelos[j].getnumAsientos()<<endl;
        cout<<"La hora de salida del vuelo es :"<<ArrHora[j].getHora()<< ":"<<ArrHora[j].getMinutos()<<endl;
        cout<<" La clave del Aeropuerto es : "<<ArrVuelos[j].getclaveAeropuerto()<<endl<<endl<<endl;
        k++;

}
if(k==0)
{
    cout<<"No existe ese aeropuerto o no hay vuelos en ese aeropuerto registrados"<<endl;
}
}


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


