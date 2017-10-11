#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED

#include <iostream>
using namespace std;

class hora{
public:
hora();
hora(int,int);
/// Metodos de acceso
int getHora();
int getMinutos();
/// Metodos de modificacion
void setHora(int h);
void setMinutos(int m);

private:
int h;
int m;
};

hora::hora()
{
    h=0;
    m=0;
}
hora::hora(int h,int m)
{
    this->h=h;
    this->m=m;
}
/// Metodos de acceso
int hora::getHora()
{
    return h;
}
int hora::getMinutos()
{
    return m;
}
/// Metodos de modificacion
void hora::setHora(int h)
{
    this->h=h;
}
void hora::setMinutos(int m)
{
    this->m=m;
}

#endif // HORA_H_INCLUDED
