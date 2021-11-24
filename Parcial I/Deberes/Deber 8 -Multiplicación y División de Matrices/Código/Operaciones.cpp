/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase, ademas aumentar
			   la operacion de potenciacion.				
				
	FECHA DE CREACION:        14-11-2021 	
	FECHA DE MODIFICACION:    14-11-2021*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
template<typename A>
int **Operaciones<A>::segmentar(A dim){
	int **matriz,j;
    matriz=(int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++){
        *(matriz+j)=(int *)malloc(dim*sizeof(int));
    }
     return matriz;
}
template<typename A>
void Operaciones<A>::encerar(A **matriz,A dim)
{
   int i,j;
     for(i=0;i<dim;i++)
       for(j=0;j<dim;j++)
        *(*(matriz+i)+j)=0;
}template<typename A>

void Operaciones<A>::autollenado(A **matriz1, A **matriz2, A dim)
{
   	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			*(*(matriz2+i)+j)=*(*(matriz1+i)+j);	
		}
	}
}
template<typename A>
void Operaciones<A>::procesar(A **matriz1, A **matriz2,A **matrizR, A dim)
{
   int i,j,k;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            for(k=0;k<dim;k++){
              *(*(matrizR+i)+j)=*(*(matrizR+i)+j) + *(*(matriz1+i)+k) * *(*(matriz2+k)+j);
            }
        }
    }
}
template<typename A>
void Operaciones<A>::potencia(A **matriz1, A **matriz2,A **matrizR, A dim, A potencia)
{
   int i,j,k,n;
   for(n=0;n<potencia-1;n++){
   	Operaciones::encerar(matrizR,dim);
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            for(k=0;k<dim;k++){
              *(*(matrizR+i)+j)=*(*(matrizR+i)+j) + *(*(matriz1+i)+k) * *(*(matriz2+k)+j);
            }
        }
    }
    Operaciones<A>::encerar(matriz2,dim);
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			*(*(matriz2+i)+j)=*(*(matrizR+i)+j);
		}
	}
   }
    
    
}
template<typename A>
void Operaciones<A>::ingresar(A **matriz, A dim){
    int i,j;
    for(i=0;i<dim;i++)
    for(j=0;j<dim;j++){
    	cout<<"----------------------------------------"<<endl;	
    	cout<<"Ingrese el valor "<<"["<<i<<"]"<<"["<<j<<"]"<<" de la matriz: "<<endl;
    	scanf("%d",&(*(*(matriz+i)+j)));
    	cout<<"----------------------------------------"<<endl;	
	}
}
template<typename A>
void Operaciones<A>::imprimir(A **matriz, A dim){
    int i,j;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
        	printf("|");
            printf("%d",*(*(matriz+i)+j));
            printf("|");
        }
        printf("\n");
    }
}
template<typename A>
Operaciones<A>::Operaciones()
{
}


