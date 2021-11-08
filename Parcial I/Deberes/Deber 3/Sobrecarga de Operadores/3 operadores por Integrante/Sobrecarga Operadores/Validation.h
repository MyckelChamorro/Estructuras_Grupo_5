/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: SOBRECARGA DE OPERADORES 2 POR INTEGRANTE.

	FECHA DE CREACION:        06-11-2021
	FECHA DE MODIFICACION:    08-11-2021*/

#pragma once
#include <iostream>
#include <conio.h>

/**
* @brief Function to validate float entries
*
*/

class Validation {
	public:
		Validation() = default;
		char* only_floats(char*);
		~Validation();
};
