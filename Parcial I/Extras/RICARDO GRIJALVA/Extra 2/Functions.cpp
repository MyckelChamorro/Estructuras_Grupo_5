/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        27-10-2021 	
	FECHA DE MODIFICACION:    28-10-2021*/
#include"Functions.h"
#include<iostream>

using namespace std;

//
template <typename funcion>
funcion Functions <funcion>::add(Operations<funcion> ope){
	return ope.getValue_1()+ope.getValue_2();
}
template <typename funcion>
funcion Functions <funcion>::multiply(Operations<funcion> ope){
	return ope.getValue_1()*ope.getValue_2();
}

