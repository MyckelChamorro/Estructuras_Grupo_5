/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        02-11-2021 	
	FECHA DE MODIFICACION:    02-11-2021*/
#pragma once
template <typename T>
class Vector{
	private:
		T vect[10];
	public:
		/**
		* @brief Function to arrangement vector
		*
		* @param 
		*/
		Vector(T [10]);
		/**
		* @brief Function to constructor vector
		*
		* @param 
		*/
		Vector()= default;
		/**
		* @brief Function to desconstructor vector
		*
		* @param 
		*/
		~Vector();
		/**
		* @brief Function to setter vector
		*
		* @param 
		*/
		void set_vect(T [10]);
		/**
		* @brief Function to getter vector
		*
		* @param 
		*/
		T *get_vect();
};


