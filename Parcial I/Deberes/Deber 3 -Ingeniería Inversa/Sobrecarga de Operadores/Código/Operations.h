/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: SOBRECARGA DE OPERADORES 2 POR INTEGRANTE.

	FECHA DE CREACION:        06-11-2021
	FECHA DE MODIFICACION:    08-11-2021*/

#pragma once
#include "Data.h"

template <typename T>
class Operations{
	public:
		Operations();
		~Operations();	
		/**
		* @brief Function to add
		*
		* @return the add
		*/	
		Data<T>& operator +(Data<T>&);
		/**
		* @brief Function to substract
		*
		* @return the substract
		*/	
		Data<T>& operator -(Data<T>&);
		/**
		* @brief Function to multiply
		*
		* @return the multiply
		*/	
		Data<T>& operator *(Data<T>&);
		/**
		* @brief Function to divide
		*
		* @return the division
		*/	
		Data<T>& operator /(Data<T>&);
		/**
		* @brief Function to >
		*
		* @return the Greater than
		*/	
		Data<T>& operator >(Data<T>&);
		/**
		* @brief Function to <
		*
		* @return the Smaller than
		*/	
		Data<T>& operator <(Data<T>&);
		/**
		* @brief Function to ==
		*
		* @return the Is Equal
		*/
		Data<T>& operator ==(Data<T>&);
		/**
		* @brief Function to >=
		*
		* @return the Greater Equal
		*/
		Data<T>& operator >=(Data<T>&);
		/**
		* @brief Function to !=
		*
		* @return the Is Unequal
		*/
		Data<T>& operator !=(Data<T>&);
		/**
		* @brief Function to <=
		*
		* @return the Less Equal to
		*/
		Data<T>& operator <=(Data<T>&);
		/**
		* @brief Function to =
		*
		* @return the Basic Assigment
		*/
		Data<T>& operator =(Data<T>&);
		/**
		* @brief Function to /=
		*
		* @return the Assign Division
		*/
		Data<T>& operator /=(Data<T>&);
	
		
};


