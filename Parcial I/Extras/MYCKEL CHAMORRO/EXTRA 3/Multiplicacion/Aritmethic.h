/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        31-10-2021 	
	FECHA DE MODIFICACION:    31-10-2021*/
#pragma once
#include "MultOperation.h"
/**
* this class defines objects that contain operations arithmetic
*
* @version: 31/10/2021/A
*/
template <typename T>
class AritmethicMult {	
	public:
		AritmethicMult();
		~AritmethicMult();
		/**
		* @brief Function to add two numbers
		*
		* @return the multiply
		*/
		T multiply(MultOperation<T>&);
};
