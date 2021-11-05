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
template <typename funcion>
funcion Functions <funcion>::divide(Operations<funcion> ope){
	if(ope.getValue_2()==0){
	try{
		throw ope.getValue_2();
	}catch (float)
	{
    cout<<"! ERROR NO SE PUEDE DIVIDIR PARA CERO !"<<endl;
	}	
	}else
	return ope.getValue_1()/ope.getValue_2();
}

