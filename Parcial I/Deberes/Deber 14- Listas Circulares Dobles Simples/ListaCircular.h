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

#pragma once
#include <iostream>
#include "Nodo.cpp"

class ListaSimple {
    private:
        Nodo *primero;
        Nodo *_actual;
        int dimLista=0;
    public:
        ListaSimple();
        bool listaVacia();
        void insertar(int dato);
        void insertarEn(int indice, int dato);
        void eliminar(int indice);
        void mostrar();
        void mostrarRecursivo(Nodo *valor,int indice);
        Nodo *getPrimero();
        void setPrimero(Nodo *pri);
        Nodo *getActual();
        void setActual(Nodo *act);
        int getDimLista();
        void setDimLista(int dim);
        Nodo *obtenerNodo(int indice);

};
