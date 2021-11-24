#include "ListaCircularDoble.h"

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

ListaCircularDoble::ListaCircularDoble()
{
	primero = NULL;
}
void ListaCircularDoble::insertar(int dato){
	Nodo *nuevo= new Nodo(dato);
	if(primero == NULL){
		primero = nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(primero);
	}else if(primero->getSiguiente() == primero){
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		ultimo->setAnterior(primero);
		primero->setSiguiente(ultimo);
		primero->setAnterior(ultimo);
	}else{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		ultimo = nuevo;
	}
}

bool ListaCircularDoble::eliminar(int dato){
	if(primero == NULL){
		return false;
	}else if(primero->getSiguiente() == primero && primero->getDato() == dato){
		primero = NULL;
		return true;
	}else{
		Nodo *auxiliar = primero;
		while(auxiliar->getSiguiente() != primero && auxiliar->getDato() != dato){
			auxiliar = auxiliar->getSiguiente();
		}
		if(auxiliar == primero && auxiliar->getDato() == dato){
			primero->getSiguiente()->setAnterior(primero->getAnterior());
			primero->getAnterior()->setSiguiente(primero->getSiguiente());
			primero = primero->getSiguiente();
			delete auxiliar;
			return true;
		}else if(auxiliar->getDato() == dato){
			auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
			auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
			delete auxiliar;
			return true;
		}else{
			return false;
		}
	}
	std::cout << "Fin";
}

void ListaCircularDoble::imprimir(){
	if(primero == NULL){
		std::cout << "La lista esta vacia";
		return;
	}
	Nodo *auxiliar = primero;
	std::cout << auxiliar->getDato() << "-->";
	while(auxiliar->getSiguiente() != primero){
		auxiliar = auxiliar->getSiguiente();
		std::cout << auxiliar->getDato() << "-->";
	}
}
