/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        31-10-2021	
	FECHA DE MODIFICACION:    31-10-2021*/
#include "MultOperation.h"
#include "Aritmethic.h"
#include <iostream>

/**
*
* @version: 31/10/2021/A
*/

using namespace std;
/**
* constructor for arithmetic operations
*
*/
template <typename T>
AritmethicMult<T>::AritmethicMult() {}

/**
* destructor for arithmetic operations
*
*/
template <typename T>
AritmethicMult<T>::~AritmethicMult() {}
//constructor close

/**
* @brief Function call the methods that make the operation
*
* @return the multiply
*/
template <typename T>
T AritmethicMult<T>::multiply(MultOperation<T>& calculation) {
	return calculation.get_value1() * calculation.get_value2();
}
