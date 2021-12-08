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
#pragma once
#include "NodoM.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class ListaM{
	private:
		NodoM *primero;
		NodoM *actual;
	public:
		ListaM();
		bool ListaVacia();
		void insertar(Materia);
		void insertarFinal(Materia);
		void borrarNodoEspe(Materia);
		void borrarNodoCola();
		void borrarNodoPrimero();
		NodoM *buscarNodo(string);
		bool buscarBool(string);
		bool buscarBool1(string);
		int generarNRC();
		void mostrar();
};
