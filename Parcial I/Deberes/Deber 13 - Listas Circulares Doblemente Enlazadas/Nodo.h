#ifndef NODO_H
#define NODO_H
#include<stdlib.h>

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

	FECHA DE CREACION:        22-11-2021
	FECHA DE MODIFICACION:    24-11-2021*/

class Nodo
{
	public:
		Nodo(int);
		int getDato();
		void setDato(int);
		Nodo *getSiguiente();
		void setSiguiente(Nodo *);
		Nodo *getAnterior();
		void setAnterior(Nodo *);
	private:	
		int dato;
		Nodo *siguiente;
		Nodo *anterior;
};
#endif

