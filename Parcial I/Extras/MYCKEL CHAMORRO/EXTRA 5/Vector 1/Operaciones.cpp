/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        02-11-2021 	
	FECHA DE MODIFICACION:    02-11-2021*/
#include "Operaciones.cpp"
#include "Vector.cpp"
#include <stdlib.h>
#include <iostream>

/**
* constructor for vector
*
*/
template <typename T>
Operaciones<T>::Operaciones(){}
template <typename T>
void Operaciones<T>::encerar(Vector<T>& vec[]){
	for(int i=0;i<10;i++){
		vec[i] = 0;
	}
}
template <typename T>
void Operaciones<T>::ingresar(Vector<T>& vec[]){
	for(int i=0;i<10;i++){
		vec[i] = rand()%11;
	}
}

template <typename T>
T Operaciones<T>::procesar(Vector<T>& vec[]){
	T promedio=0.0f;
	for(int i=0;i<10;i++){
		promedio += vec[i];
	}
	return promedio/10.0f;
}
template <typename T>
void Operaciones<T>::imprimir(Vector<T>& vec[]){
	for(int i=0;i<10;i++){
		std::cout<<vec[i]<<" ";
	}
}

