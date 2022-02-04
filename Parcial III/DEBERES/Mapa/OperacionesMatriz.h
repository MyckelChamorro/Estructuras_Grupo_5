/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO DE BUSQUEDA EXHAUSTIVA PARA RESOLVER EL PROBLEMA DE COLOREADO DE MAPAS.						
	FECHA DE CREACION:        03-02-2022 	
	FECHA DE MODIFICACION:    03-02-2022*/
#pragma once
#include <iostream>
#define vertices 500
#define nodos 300
using namespace std;

struct  orden{
int  grado; //representa el numero  de conexiones
int  color; // representa el valor del numero
int  n;  //representa el numero  de vertice 
};
typedef struct  orden ver;
int B[nodos];//,ad[vertices][vertices];


class OperacionesMatriz{
	
	public:
		OperecionesMatriz();
		void IngresarMatriz(int ad[][vertices],int nds, int arst);
		void BusquedaExhaustiva(int ad[][vertices],int nds);
};
