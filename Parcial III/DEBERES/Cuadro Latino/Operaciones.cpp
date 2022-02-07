/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.						
	FECHA DE CREACION:        05-02-2022 	
	FECHA DE MODIFICACION:    06-02-2022*/
#include "Operaciones.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
/**
 * @brief Segmenta espacio en memoria
 * 
 * @param dim 
 * @return int** 
 */
int **Operaciones::segmentar(int dim){
	int **matriz,j;
    matriz=(int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++){
        *(matriz+j)=(int *)malloc(dim*sizeof(int));
    }
     return matriz;
}
/**
 * @brief Encera cada entrada de la matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::encerar(int **matriz,int dim)
{
   int i,j;
     for(i=0;i<dim;i++)
       for(j=0;j<dim;j++)
        *(*(matriz+i)+j)=0;
}
/**
 * @brief Construye el cuadro latino
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::procesar(int **matriz,int dim){
	int i,j;
       for(i=0;i<dim;i++)
      { 
            for(j=0;j<dim;j++)
            {
                  *(*(matriz+i)+j) = (i+j+dim-1)%dim;
            }
      }
}
/**
 * @brief Imprime la matriz
 * 
 * @param matriz 
 * @param dim 
 */
void Operaciones::imprimir(int **matriz, int dim){
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
/**
 * @brief Construye un objeto
 * 
 */
Operaciones::Operaciones()
{
}
