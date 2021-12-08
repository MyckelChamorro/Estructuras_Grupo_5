/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        20-11-2021
	FECHA DE MODIFICACION:    07-12-2021*/
#if !defined(__Class_Diagram_1_LISTA_H)
#define __Class_Diagram_1_LISTA_H
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
	public:
		Lista();
		bool ListaVacia();
		void insertar(Persona);
		void insertarFinal(Persona);
		void borrarNodoEspe(Persona);
		void borrarNodoCola();
		void borrarNodoPrimero();
		Nodo *buscarNodo(string);
		bool buscarBool(string);
		void mostrar();
};
#endif