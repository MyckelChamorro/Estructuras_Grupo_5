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

#pragma once
#include <iostream>
#include <stdlib.h>
#include "Node.h"
#include "Node.cpp"

/**
* this class manage the list
*
*/
template <class T> 
class List{
    public:
    	/**
		* @brief Constructor of List
		*/
        List();
        /**
		* @brief Destructor of List
		*/
        ~List();
        /**
		* @brief Function to add head
		*/
        void add_head(T);
        /**
		* @brief Function to add end
		*/
        void add_end(T);
        /**
		* @brief Function to delete all
		*/
        void del_all();
        /**
		* @brief Function to delete head
		*/
        bool del_head();
        /**
		* @brief Function to delete end
		*/
        void del_end();
        /**
		* @brief Function to print
		*/
        void print();
        /**
		* @brief Function to verify if is empty or not
		*/
        bool is_empty();
    private:
        Node<T> *m_head;
        int m_num_nodes;
};
