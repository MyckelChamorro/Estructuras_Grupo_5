/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        01-11-2021 	
	FECHA DE MODIFICACION:    01-11-2021*/
#include "DivOperation.h"
#include <iostream>

/**
*
* @version: 01/11/2021/A
*/

using namespace std;

/**
* constructor for basic operations
*
*/

template <typename T>
DivOperation<T>::DivOperation(){}

/**
* destructor for basic operations
*
*/

template <typename T>
DivOperation<T>::~DivOperation() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void DivOperation<T>::set_value1(T value1_) {
	this->value1 = value1_;
}

template <typename T>
T DivOperation<T>::get_value1() {
	return value1;
}

template <typename T>
void DivOperation<T>::set_value2(T value2_) {
	this->value2 = value2_;
}

template <typename T>
T DivOperation<T>::get_value2() {
	return value2;
}

template <typename T>
void DivOperation<T>::to_string(){	
	cout<<"Los valores asignados por el usuario son: "<<DivOperation<T>::get_value1()<<" y "<< DivOperation<T>::get_value2() <<endl;
}

