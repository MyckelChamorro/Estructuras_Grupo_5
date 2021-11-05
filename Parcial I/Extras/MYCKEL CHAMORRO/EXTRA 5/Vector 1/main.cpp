/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        02-11-2021 	
	FECHA DE MODIFICACION:    02-11-2021*/
#include <iostream>
#include "Operaciones.h"
#include "Vector.cpp"


/**
* @the main class
*
*/
int main(int argc, char** argv) {
	int vector [10];
	Vector<int> vec(vector);
	Operaciones<int> operaciones;
	
	//vec.set_vect(vector);
	std::cout<<"El vector es: ";
	operaciones.encerar(vec);
	operaciones.ingresar(vec);
	operaciones.procesar(vec);
	operaciones.imprimir(vec);
	return 0;
}
