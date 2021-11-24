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
#include "Node.h"

template<typename T> 
Node<T>::Node(){
    data = NULL;
    next = NULL;
}

template<typename T>
Node<T>::Node(T data_){
    data = data_;
    next = NULL;
}

template<typename T>
void Node<T>::delete_all(){
    if (next)
        next->delete_all();
    delete this;
}

template<typename T>
void Node<T>::print()
{
    std::cout << data << "-> ";
}

template<typename T>
Node<T>::~Node() {}
