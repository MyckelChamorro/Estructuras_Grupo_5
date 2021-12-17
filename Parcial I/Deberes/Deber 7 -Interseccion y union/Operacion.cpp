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
#include "Operacion.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
template<typename N> 
Operacion<N>::Operacion(){
}
template<typename N> 
void Operacion<N>::encerar(N *arr, N t){
	int i;
		for(i=0;i<t;i++){
		*arr=(*(&(*arr)))*0;
		*(arr++);
	}
}
template<typename N> 
void Operacion<N>::imprimir(N *arr, N t){
	int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		printf("%d",*(&(*arr)));	
		*(arr++)	;
	}
}
template<typename N> 
void Operacion<N>::ingresar(N *arr, N t){
	int i;
	for(i=0;i<t;i++){
		printf("\nIngrese el valor %d del conjunto : ",i+1,t);
		scanf("%d",*(&arr)+i);
	}
}
template<typename N> 
void Operacion<N>::procesar(N *arr, N t){
		int i,e;
	printf("\nIngrese el escalar")	;
	scanf("%d",&e);
	for(i=0;i<t;i++){
		*arr=(*(&(*arr)))*e;
		*(arr++);
	}
}
template<typename N> 
void Operacion<N>::conjuntos(N *arr1,N *arr2,N d1,N d2){
		N *f;
	printf("\nUNION CONJUNTO 1 + CONUNTO 2  \n");
	N* arr3 = (N*)calloc(d1+d2, sizeof(N*));
	int m=0;
	for(int i=0;i<d1;i++){
		*(arr3+m)=*(arr1+i);
		m++;
	}
	for(int j=0;j<d2;j++){
		*(arr3+m)=*(arr2+j);
		m++;
	}
	for(int k=0;k<m;k++){
			printf("%d \n ",*(arr3+k));
			
		}
}
template<typename N> 
void Operacion<N>::conjuntosInter(N *arr1,N *arr2,N d1,N d2){
	N* arr3 = (N*)calloc(d1+d2, sizeof(N*));
	printf("\nINTERSECCION \n")	;
	int n=0;
			for(int i=0;i<d1;i++){
			        for(int j=0;j<d2;j++){
			        if(*(arr1+i)==*(arr2+j)){
			        *(arr3+n)=*(arr2+j);  
			       n++;
			        }
			     }
			    }
		for(int i=0;i<n;i++){
			printf("%d \n ",*(arr3+i));
			
		}
	
	
}
