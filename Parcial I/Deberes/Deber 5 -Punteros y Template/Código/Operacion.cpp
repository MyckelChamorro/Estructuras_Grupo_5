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
#include "Operacion.h"
template<typename N> 
Operacion<N>::Operacion(){
}
template<typename N> 
void Operacion<N>::imprimir(N *p, N t){
	int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		printf("%d",*(&(*p)));	
		*(p++)	;
	}
}
template<typename N> 
void Operacion<N>::ingresar(N *p, N t){
	int i;
	for(i=0;i<t;i++){
		printf("\nIngrese el valor entero: ");
		scanf("%d",*(&p)+i);
	}
}
template<typename N> 
void Operacion<N>::procesar(N *p, N t){
		int i,e;
	printf("\nIngrese el escalar")	;
	scanf("%d",&e);
	for(i=0;i<t;i++){
		*p=(*(&(*p)))*e;
		*(p++);
	}
}
