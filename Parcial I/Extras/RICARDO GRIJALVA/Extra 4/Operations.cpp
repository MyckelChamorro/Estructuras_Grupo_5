/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        1-11-2021 	
	FECHA DE MODIFICACION:    1-11-2021*/
#include"Operations.h"
#include<iostream>

using namespace std;

//TEMPLATE DECLARATION
template <typename dato>
Operations<dato>::Operations(){	
}
template <typename dato>
void Operations<dato>::setValue_1(dato val_1){
	value_1=val_1;
}
template <typename dato>
dato Operations<dato>::getValue_1(){
	return value_1;
}

