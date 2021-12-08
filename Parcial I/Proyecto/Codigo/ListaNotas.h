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
#include "NodoNotas.h"
#include "Notas.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class ListaNotas{
	private:
		NodoNotas *primero;
		NodoNotas *actual;
	public:
		ListaNotas();
		bool ListaVacia();
		void insertar(Notas);
		void insertarFinal(Notas);
		void borrarNodoEspe(Notas);
		void borrarNodoCola();
		void borrarNodoPrimero();
		NodoNotas *buscarNodo(string);
		bool buscarBool(string);
		void mostrar();
};