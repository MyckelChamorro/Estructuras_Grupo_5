/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        1-11-2021 	
	FECHA DE MODIFICACION:    1-11-2021*/
#include"Functions.h"
#include<iostream>

using namespace std;

//
template <typename funcion>
funcion Functions <funcion>::factorial(Operations<funcion> ope){
	int fact=1;
	
	if(ope.getValue_1()<0) fact =0;
   else if(ope.getValue_1()==0) fact=1;
   else{
      for (int i = 1; i <= ope.getValue_1(); i++){
         fact = fact*i;
      }
   }
   return fact;
}

