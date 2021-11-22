/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec
				
	
	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.				
				
	FECHA DE CREACION:        21-11-2021 	
	FECHA DE MODIFICACION:    21-11-2021*/
#include"Nodo.h"
#include <iostream>
Nodo::Nodo(int _valor){
	this->valor=_valor;
}
Nodo *Nodo::getAnterior(){
	return anterior;
}
void Nodo::setAnterior(Nodo *nodo){
	this->anterior=nodo;
}
Nodo *Nodo::getSiguiente(){
	return siguiente;
}
void Nodo::setSiguiente(Nodo *nodo){
	this->siguiente=nodo;
}

int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int _valor){
	this->valor=_valor;
}