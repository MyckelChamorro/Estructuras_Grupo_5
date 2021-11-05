/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        29-10-2021 	
	FECHA DE MODIFICACION:    29-10-2021*/
#include "AddOperation.h"
#include <iostream>

/**
*
* @version: 29/10/2021/A
*/

using namespace std;

/**
* constructor for basic operations
*
*/

template <typename T>
AddOperation<T>::AddOperation(){}

/**
* destructor for basic operations
*
*/

template <typename T>
AddOperation<T>::~AddOperation() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void AddOperation<T>::set_value1(T value1_) {
	this->value1 = value1_;
}

template <typename T>
T AddOperation<T>::get_value1() {
	return value1;
}

template <typename T>
void AddOperation<T>::set_value2(T value2_) {
	this->value2 = value2_;
}

template <typename T>
T AddOperation<T>::get_value2() {
	return value2;
}

template <typename T>
void AddOperation<T>::to_string(){	
	cout<<"Los valores asignados por el usuario son: "<<AddOperation<T>::get_value1()<<" y "<< AddOperation<T>::get_value2() <<endl;
}


