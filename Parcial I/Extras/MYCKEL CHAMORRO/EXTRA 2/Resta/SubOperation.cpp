/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        30-10-2021 	
	FECHA DE MODIFICACION:    30-10-2021*/
#include "SubOperation.h"
#include <iostream>

/**
*
* @version: 30/10/2021/A
*/

using namespace std;

/**
* constructor for basic operations
*
*/

template <typename T>
SubOperation<T>::SubOperation(){}

/**
* destructor for basic operations
*
*/

template <typename T>
SubOperation<T>::~SubOperation() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void SubOperation<T>::set_value1(T value1_) {
	this->value1 = value1_;
}

template <typename T>
T SubOperation<T>::get_value1() {
	return value1;
}

template <typename T>
void SubOperation<T>::set_value2(T value2_) {
	this->value2 = value2_;
}

template <typename T>
T SubOperation<T>::get_value2() {
	return value2;
}

template <typename T>
void SubOperation<T>::to_string(){	
	cout<<"Los valores asignados por el usuario son: "<<SubOperation<T>::get_value1()<<" y "<< SubOperation<T>::get_value2() <<endl;
}


