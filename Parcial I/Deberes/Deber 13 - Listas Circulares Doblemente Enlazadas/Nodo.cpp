#include "Nodo.h"

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

Nodo::Nodo(int _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}
	int Nodo::getDato(){
	return dato;
}
	void Nodo::setDato(int _dato){
	dato = _dato;
}
	Nodo *Nodo::getSiguiente(){
	return siguiente;
}
	void Nodo::setSiguiente(Nodo *_siguiente){
	siguiente = _siguiente;
}
	Nodo *Nodo::getAnterior(){
	return anterior;
}
	void Nodo::setAnterior(Nodo *_anterior){
	anterior = _anterior;
}
