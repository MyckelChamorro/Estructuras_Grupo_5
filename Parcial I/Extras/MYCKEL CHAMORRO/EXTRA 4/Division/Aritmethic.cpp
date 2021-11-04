/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        01-11-2021	
	FECHA DE MODIFICACION:    01-11-2021*/
#include "DivOperation.h"
#include "Aritmethic.h"
#include <iostream>

/**
*
* @version: 01/11/2021/A
*/

using namespace std;
/**
* constructor for arithmetic operations
*
*/
template <typename T>
AritmethicDiv<T>::AritmethicDiv() {}

/**
* destructor for arithmetic operations
*
*/
template <typename T>
AritmethicDiv<T>::~AritmethicDiv() {}
//constructor close

/**
* @brief Function call the methods that make the operation
*
* @return the divide
*/
template <typename T>
T AritmethicDiv<T>::divide(DivOperation<T>& calculation) {
	if (calculation.get_value2() == 0) {
		cout << "No se puede dividir " << endl;
	}
	else
		return calculation.get_value1() / calculation.get_value2();
}
