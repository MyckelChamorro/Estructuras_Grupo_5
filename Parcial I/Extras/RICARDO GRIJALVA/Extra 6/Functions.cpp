/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        2-11-2021 	
	FECHA DE MODIFICACION:    2-11-2021*/
#include"Functions.h"
#include<iostream>

using namespace std;

//
template <typename funcion>
funcion Functions <funcion>::conversionUnidades(Operations<funcion> ope){
	float Fahrenheit=0;
	Fahrenheit=ope.getValue_1()*(9/5);
	Fahrenheit+=32;
   cout<<ope.getValue_1()<<"°C Grados Centigrados a Fahrenheit -> "<<Fahrenheit<<"°F"<<"\n";
   cout<<ope.getValue_1()<<"°C Grados Centigrados a Kelvin -> "<<ope.getValue_1()+(273.15)<<"°K"<<"\n";
   
}

