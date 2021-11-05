/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        29-10-2021 	
	FECHA DE MODIFICACION:    29-10-2021*/
#include "AddOperation.h"
#include "Aritmethic.h"
#include <iostream>

/**
*
* @version: 29/10/2021/A
*/

using namespace std;
/**
* constructor for arithmetic operations
*
*/
template <typename T>
AritmethicAdd<T>::AritmethicAdd() {}

/**
* destructor for arithmetic operations
*
*/
template <typename T>
AritmethicAdd<T>::~AritmethicAdd() {}
//constructor close

/**
* @brief Function call the methods that make the operation
*
* @return the add
*/
template <typename T>
T AritmethicAdd<T>::add(AddOperation<T>& calculation) {
	return calculation.get_value1() + calculation.get_value2();
}

