/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        01-11-2021 	
	FECHA DE MODIFICACION:   01-11-2021*/
#pragma once
#include "DivOperation.h"
/**
* this class defines objects that contain operations arithmetic
*
* @version: 01/11/2021/A
*/
template <typename T>
class AritmethicDiv {	
	public:
		AritmethicDiv();
		~AritmethicDiv();
		/**
		* @brief Function to add two numbers
		*
		* @return the divide
		*/
		T divide(DivOperation<T>&);
};
