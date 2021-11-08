/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        31-10-2021
	FECHA DE MODIFICACION:    31-10-2021*/

#include <iostream>
#include "Numero.cpp"
using namespace std; 

int main() {
	Numero <double> dosnum(20.5, 100.2);
	cout<< "El numero mayor es: " << dosnum.Mayor();
	return 0;
}
