/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.						
	FECHA DE CREACION:        05-02-2022 	
	FECHA DE MODIFICACION:    06-02-2022*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Operaciones.h"
#include "Matriz.h"
using namespace std;
int main()
{
	Matriz m1;
    int dim;
    int **mat1;
    printf("\n| CUADRO LATINO |\n");
    printf("\nIngrese la dimension :");
    scanf("%d",&dim);
    Operaciones op;
    m1.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    op.encerar(mat1,dim);
    cout<<"\n"<<endl;
    op.procesar(mat1,dim);
    op.imprimir(mat1,dim);
    return 0;
}
