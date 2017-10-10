#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED
#include <iostream>
using namespace std;

class hora{
public:
hora();
hora(int,int);
int getHora();
int getMinutos();
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
int hora::getHora()
{
    return h;
}
int hora::getMinutos()
{
    return m;
}
#endif // CLASES_H_INCLUDED
