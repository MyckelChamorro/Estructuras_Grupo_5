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

#pragma warning(disable : 4996)
#include "Validation.h"
#include <string>


char* Validation::only_floats(char* msj) {
	char dato[11];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if ((c >= '0' && c <= '9') || c == 46) {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	std::cout << std::endl;
	return dato;
}

Validation::~Validation(){}
