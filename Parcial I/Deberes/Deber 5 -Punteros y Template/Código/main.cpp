/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase.				
				
	FECHA DE CREACION:        11-11-2021 	
	FECHA DE MODIFICACION:    11-11-2021*/
#include <iostream>
#include "Operacion.cpp"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(int argc, char** argv) {
	Operacion<int> ope;
	
	int t;
	int *ptr=(int*)malloc(4*sizeof(int));
	std::cout<<"Ingrese el tamanio: "<<std::endl;
	std::cin>>t;
	ope.ingresar(ptr,t);
	ope.imprimir(ptr,t);
	ope.procesar(ptr,t);
	ope.imprimir(ptr,t);
	
	return 0;
}
