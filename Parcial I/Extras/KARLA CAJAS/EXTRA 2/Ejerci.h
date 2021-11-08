/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        30-10-2021
	FECHA DE MODIFICACION:    30-10-2021*/
	
	#include "calculo.h"
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if (numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}

