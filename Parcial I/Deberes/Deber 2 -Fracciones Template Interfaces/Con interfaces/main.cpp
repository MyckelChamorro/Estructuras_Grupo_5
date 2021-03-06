/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: REALIZAR UN PROGRAMA QUE CALCULE LA OPERACION ESPECIFICADA EN CLASE Y EL MODELO REALIZADO LLEVARLO A CODIGO.				
				
	FECHA DE CREACION:        27-10-2021 	
	FECHA DE MODIFICACION:    28-10-2021*/
#include <iostream>
#include "Operaciones.cpp"
#include "DivFrac.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DivFrac fraccion;
	DivFrac fraccion1;
	Operaciones ope;
	fraccion.setNumerador(8);
	fraccion.setDenominador(10);
	fraccion1.setNumerador(2);
	fraccion1.setDenominador(1);
	fraccion.imprimir();
	fraccion1.imprimir();
	printf("\n((%.2fx%.2f)+(%.2fx%.2f))/(%.2f+%.2f)\n",fraccion.getNumerador(),fraccion1.getDenominador(),fraccion1.getNumerador(),fraccion.getDenominador(),fraccion.getDenominador(),fraccion1.getDenominador());
	printf("El resultado es %.2f",ope.calculo(fraccion.getNumerador(),fraccion1.getNumerador(),fraccion.getDenominador(),fraccion1.getDenominador()));
	return 0;
}

