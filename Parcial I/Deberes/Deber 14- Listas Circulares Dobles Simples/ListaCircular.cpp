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

#include <iostream>
#include "ListaCircular.h"

using namespace std;

ListaCircular::ListaCircular(){
    this->primero=NULL;
    this->_actual=NULL;
}

bool ListaCircular::listaVacia(){
    return (primero==NULL);
}

Nodo *ListaCircular::getPrimero(){
    return primero;
}

void ListaCircular::setPrimero(Nodo *pri){
    primero=pri;
}

Nodo *ListaCircular::getActual(){
    return _actual;
}

void ListaCircular::setActual(Nodo *act){
    _actual=act;
}

int ListaCircular::getDimLista(){
    return dimLista;
}

void ListaCircular::setDimLista(int dim){
    dimLista=dim;
}

void ListaCircular::insertar(int dato){
    Nodo *nuevo = new Nodo(dato,primero);
    if(ListaCircular::listaVacia()){
        primero = nuevo;
    }
    else{
        _actual->setSiguiente(nuevo);
    }
    _actual = nuevo;
    dimLista++;
}

void ListaCircular::mostrar(){
    Nodo *aux = primero;
    int indice = 0;
    mostrarRecursivo(aux,indice);
}

void ListaCircular::mostrarRecursivo(Nodo *valor,int indice){
    valor = obtenerNodo(indice);
    cout<<"Indce: "<<indice++<<" Valor: "<<valor->getDato()<<endl;
    if(indice < dimLista){
        mostrarRecursivo(valor->getSiguiente(),indice++);
    }
}

void ListaCircular::eliminar(int indice){
    Nodo *actual=obtenerNodo(indice-1);
    Nodo *aux = obtenerNodo(indice+1);
    actual->setSiguiente(aux);
    dimLista--;
}

Nodo *ListaCircular::obtenerNodo(int indices){
    int cont=0;
    Nodo *aux = primero;
    while(aux->getSiguiente()!=nullptr){
        if(cont == indices){
            break;
        }
        cont++;
        aux = aux->getSiguiente();
    }
    return aux;
}

void ListaCircular::insertarEn(int indice, int dato){
    Nodo *nuevo = new Nodo(dato,primero);
    Nodo *actual = obtenerNodo(indice-1);
    Nodo *aux = actual->getSiguiente();
    actual->setSiguiente(nuevo);
    actual=actual->getSiguiente();
    actual->setSiguiente(aux);
    dimLista++;
}
