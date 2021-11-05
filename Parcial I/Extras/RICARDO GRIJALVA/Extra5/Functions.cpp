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
funcion Functions <funcion>::conversionMonedas(Operations<funcion> ope){
	
   cout<<ope.getValue_1()<<"$ Dolares a Euros -> $"<<ope.getValue_1()*(0.87)<<"\n";
   cout<<ope.getValue_1()<<"$ Dolares a Libra Esterlina -> $"<<ope.getValue_1()*(0.74)<<"\n";
   cout<<ope.getValue_1()<<"$ Dolares a Won -> $"<<ope.getValue_1()*( 1184,89)<<"\n";
}

