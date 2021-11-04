/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        02-11-2021 	
	FECHA DE MODIFICACION:    02-11-2021*/
#pragma once
#include "Vector.cpp"
template <typename T>
class Operaciones{
	public:
		/**
		* @brief Function to constructor
		*
		* @param 
		*/
		Operaciones();
		/**
		* @brief Function to encerar vector
		*
		* @param 
		*/
		void encerar (Vector<T>& []);
		/**
		* @brief Function to ingresar vector
		*
		* @param 
		*/
		void ingresar (Vector<T>& []);
		/**
		* @brief Function to procesar vector
		*
		* @param 
		*/
		T procesar (Vector<T>& []);
		/**
		* @brief Function to imprimir vector
		*
		* @param 
		*/
		void imprimir (Vector<T>& []);
};
