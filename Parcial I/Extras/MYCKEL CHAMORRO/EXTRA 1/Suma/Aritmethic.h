/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        29-10-2021 	
	FECHA DE MODIFICACION:    29-10-2021*/
#pragma once
#include "AddOperation.h"
/**
* this class defines objects that contain operations arithmetic
*
* @version: 29/10/2021/A
*/
template <typename T>
class AritmethicAdd {	
	public:
		AritmethicAdd();
		~AritmethicAdd();
		/**
		* @brief Function to add two numbers
		*
		* @return the add
		*/
		T add(AddOperation<T>&);
};
