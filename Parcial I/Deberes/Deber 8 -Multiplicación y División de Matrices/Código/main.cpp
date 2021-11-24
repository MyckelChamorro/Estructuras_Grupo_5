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
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Operaciones.cpp"
#include "Matriz.cpp"
using namespace std;
int main()
{
	Matriz<int> m1,m2,mr,mr1;
    
    int dim,potencia;
    int **mat1, ** mat2, **matR,**matR1;
    printf("\nIngrese la dimension :");
    scanf("%d",&dim);
    Operaciones<int> op;
    m1.setMatriz(op.segmentar(dim));
    m2.setMatriz(op.segmentar(dim));
    mr.setMatriz(op.segmentar(dim));
    mr1.setMatriz(op.segmentar(dim));
    mat1=m1.getMatriz();
    mat2=m2.getMatriz();
    matR=mr.getMatriz();
    matR1=mr.getMatriz();
    op.encerar(mat1,dim);
    op.encerar(mat2,dim);
    op.encerar(matR,dim);
    op.encerar(matR1,dim);
    cout<<"\n"<<endl;
    cout<<"VALORES PARA PRIMERA MATRIZ"<<endl;
    op.ingresar(mat1, dim);
    cout<<"\n"<<endl;
    cout<<"VALORES PARA SEGUNDA MATRIZ"<<endl;
    op.ingresar(mat2, dim);
    printf("\n");
    cout<<"PRIMERA MATRIZ"<<endl;
    op.imprimir(mat1,dim);
    printf("\n");
    cout<<"SEGUNDA MATRIZ"<<endl;
    op.imprimir(mat2,dim);
    printf("\n");
    cout<<"RESULTADO DEL PRODUCTO"<<endl;
    op.procesar(mat1,mat2,matR,dim);
    op.imprimir(matR,dim);
   
    cout<<"INGRESE EL VALOR DE LA POTENCIA"<<endl;
    cin>>potencia;
   	op.encerar(mat2,dim);
   	op.autollenado(mat1,mat2,dim);
    op.potencia(mat1,mat2,matR1,dim,potencia);
    cout<<"RESULTADO DE LA POTENCIA"<<endl;
    op.imprimir(matR1,dim);
    return 0;
}

