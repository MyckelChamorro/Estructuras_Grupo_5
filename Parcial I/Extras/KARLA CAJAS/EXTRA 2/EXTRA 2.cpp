/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        30-10-2021
	FECHA DE MODIFICACION:    30-10-2021*/


#include<iostream>
#include<vector>
using namespace std;


template <class T> void ordena(vector<T> &a,
bool (*criterio)(const T &,const T &) )
{

if (a.size()>1)

for (int i=0;i<a.size()−1;i++)

for (int j=i+1;j<a.size();j++)

if(!(*criterio)(a[i],a[j]))
 {
 T tmp=a[i];
 a[i]=a[j];
 a[j]=tmp;
 }
}

template <class T> void copia_ordenada(const vector<T> &a, vector<T> &b,
bool (*criterio)(const T &,const T &) )
{
 b=a;
 ordena(b,(*criterio));
}

template <class T> bool menor(const T &x,const T &y)
{
return x<y;
}

template <class T> bool mayor(const T &x,const T&y)
{
return x>y;
}

template <class T> ostream& operator<<(ostream &o,const vector<T> &x)
{
for (int i=0;i<x.size();i++)
 o<<x[i]<<’ ’;
 o<<endl;
return o;
}

template <class T> istream& operator>>(istream &in,vector<T> &x)
{
for (int i=0;i<x.size();i++)
 in>>x[i];
return in;
}
