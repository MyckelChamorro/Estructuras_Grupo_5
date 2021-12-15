/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				JOSSUE ACHIG    -  sjachig1@espe.edu.ec
				ALISSON CAIZA - alcaiza3@eespe.edu.ec
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
	
	int t1,t2;
	std::cout<<"Ingrese el tamanio del conjunto 1: "<<std::endl;
	std::cin>>t1;
	std::cout<<"Ingrese el tamanio del conjunto 2: "<<std::endl;
	std::cin>>t2;

	int *ptr=(int*)malloc(t1*sizeof(int));
	int *arr=(int*)malloc(t2*sizeof(int));

	
		std::cout<<"Valores Conjunto 1: "<<std::endl;
	ope.ingresar(ptr,t1);
	ope.imprimir(ptr,t1);
	std::cout<<"\n\nValores Conjunto 2: "<<std::endl;
	ope.ingresar(arr,t2);
	ope.imprimir(arr,t2);
	std::cout<<"\nvalores conjunto 3\n ";


	ope.conjuntos(ptr,arr,t1,t2);
	
	ope.conjuntosInter(ptr,arr,t1,t2);
	
	return 0;
}
