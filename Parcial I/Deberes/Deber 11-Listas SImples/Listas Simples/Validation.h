/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

	FECHA DE CREACION:        21-11-2021
	FECHA DE MODIFICACION:    21-11-2021*/
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Validation {
	public:
		Validation() = default;
		char* only_ints(char*);
		char* only_floats(char*);
		char* only_letters(char*);
		void borrar(char[]);
		void extraer(char[]);
		std::string crearCorreo(std::string, std::string, std::string, int);
		~Validation();

};
