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
class Nodo {
    private:
        int dato;
        Nodo *siguiente;
    public:
        Nodo(int dato, Nodo *sig){
            this->dato = dato;
            this->siguiente = sig;
        }
        void setSiguiente(Nodo *sig){
            this->siguiente = sig;
        }
        Nodo *getSiguiente(){
            return this->siguiente;
        }
        int getDato(){
            return this->dato;
        }

        friend class ListaCircular;
};
