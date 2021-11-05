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
//#include "DivFrac.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	Proceso<float> ope;
	Proceso<float> ope1;
	ope.setNumerador(4);
	ope.setDenominador(8);
	ope1.setNumerador(2);
	ope1.setDenominador(1);
	Operaciones<float> cal;
	printf("Calculo de Operacion\n");
	printf("((%.2fx%.2f)+(%.2fx%.2f))/(%.2f+%.2f)\n",ope.getNumerador(),ope1.getDenominador(),ope1.getNumerador(),ope.getDenominador(),ope.getDenominador(),ope1.getDenominador());
	printf("El resultado es %.2f",cal.calculo(ope,ope1));
//	printf("\n((%.2fx%.2f)+(%.2fx%.2f))/(%.2f+%.2f)\n",fraccion.getNumerador(),fraccion1.getDenominador(),fraccion1.getNumerador(),fraccion.getDenominador(),fraccion.getDenominador(),fraccion1.getDenominador());
	//printf("El resultado es %.2f",ope.calculo(fraccion.getNumerador(),fraccion1.getNumerador(),fraccion.getDenominador(),fraccion1.getDenominador()));
	return 0;
}
