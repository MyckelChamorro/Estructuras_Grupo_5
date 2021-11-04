/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        02-11-2021 	
	FECHA DE MODIFICACION:    02-11-2021*/
#include "Vector.h"
template <typename T>
Vector<T>::Vector(T vec[10]){
	for(T i=0;i<10;i++){
		vect[i] = vec [i];
	}	
}
/**
* constructor for vector
*
*/
template <typename T>
Vector<T>::~Vector(){
}
/**
* Setters and Getters
*
*/
template <typename T>
void Vector<T>::set_vect(T vec[10]){
		for(T i=0;i<10;i++){
		vect[i] = vec [i];
	}
}
template <typename T>
T *Vector<T>::get_vect(){
	return vect;
}
