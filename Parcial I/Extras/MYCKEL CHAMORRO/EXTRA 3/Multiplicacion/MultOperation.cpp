/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        31-10-2021	
	FECHA DE MODIFICACION:    31-10-2021*/
#include "MultOperation.h"
#include <iostream>

/**
*
* @version: 31/10/2021/A
*/

using namespace std;

/**
* constructor for basic operations
*
*/

template <typename T>
MultOperation<T>::MultOperation(){}

/**
* destructor for basic operations
*
*/

template <typename T>
MultOperation<T>::~MultOperation() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void MultOperation<T>::set_value1(T value1_) {
	this->value1 = value1_;
}

template <typename T>
T MultOperation<T>::get_value1() {
	return value1;
}

template <typename T>
void MultOperation<T>::set_value2(T value2_) {
	this->value2 = value2_;
}

template <typename T>
T MultOperation<T>::get_value2() {
	return value2;
}

template <typename T>
void MultOperation<T>::to_string(){	
	cout<<"Los valores asignados por el usuario son: "<<MultOperation<T>::get_value1()<<" y "<< MultOperation<T>::get_value2() <<endl;
}

