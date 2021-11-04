/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        30-10-2021 	
	FECHA DE MODIFICACION:    30-10-2021*/
#pragma once
#include "SubOperation.h"
/**
* this class defines objects that contain operations arithmetic
*
* @version: 30/10/2021/A
*/
template <typename T>
class AritmethicSub {	
	public:
		AritmethicSub();
		~AritmethicSub();
		/**
		* @brief Function to add two numbers
		*
		* @return the substract
		*/
		T subtract(SubOperation<T>&);
};
