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
#pragma warning(disable : 4996)
#include "Validation.h"

char* Validation::only_floats(char* msj) {
	char dato[20];
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
	return dato;

}


Validation::~Validation(){}
