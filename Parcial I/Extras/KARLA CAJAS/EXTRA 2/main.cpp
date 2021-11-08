/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        30-10-2021
	FECHA DE MODIFICACION:    30-10-2021*/

#include <iostream>
#include <conio.h>
#include "calculo.cpp"
using namespace std; 

int main() {
	int n1 = -56; 
	float num2 = -35.94; 
	double num3 = -18518.56181;
	
	mostrarAbs(n1); 
	mostrarAbs(num2);
	mostrarAbs(num3);
	return 0;
}
