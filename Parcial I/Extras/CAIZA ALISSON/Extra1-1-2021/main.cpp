#include<iostream>
using namespace std;
#include<vector>
//ordena un vector de T segun criterio
template <class T> void ordena(vector<T> &a,
bool (*criterio)(const T &,const T &) )
{
//si el vector tiene al menos tamaño 2
if (a.size()>1)
//para cada elemento
for (int i=0;i<a.size()-1;i++)
//comparandolo con los siguientes
for (int j=i+1;j<a.size();j++)
//si el primero no cumple el criterio
//comparandolo con el segundo
if(!(*criterio)(a[i],a[j]))
 {
 T tmp=a[i];
 a[i]=a[j];
 a[j]=tmp;
 }
}
//produce una copia ordenada utilizando
//la funcion anterior
template <class T> void copia_ordenada(const vector<T> &a, vector<T> &b,
bool (*criterio)(const T &,const T &) )
{
 b=a;
 ordena(b,(*criterio));
}
//definicion del criterio <
template <class T> bool menor(const T &x,const T &y)
{
return x<y;
}
//definicion del criterio >
template <class T> bool mayor(const T &x,const T&y)
{
return x>y;
}
//operador <<
template <class T> ostream& operator<<(ostream &o,const vector<T> &x)
{
for (int i=0;i<x.size();i++)
 o<<x[i]<<’ ’;
 o<<endl;
return o;
}
//operador >>
template <class T> istream& operator>>(istream &in,vector<T> &x)
{
for (int i=0;i<x.size();i++)
 in>>x[i];
return in;
} 
