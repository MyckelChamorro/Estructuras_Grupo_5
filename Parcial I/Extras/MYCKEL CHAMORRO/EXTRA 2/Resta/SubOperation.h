/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        30-10-2021 	
	FECHA DE MODIFICACION:    30-10-2021*/
#pragma once
#include <string>

/**
* this class defines objects that contain two values
*
* @version: 30/10/2021/A
*/
template <typename T>
class SubOperation {
	private:
		T value1;
		T value2;
	public:
		SubOperation();
		~SubOperation();
		/**
		* @brief Function to setter the value 1
		*
		* @param 
		*/
		void set_value1(T);
		/**
		* @brief Function to getter the value 1
		*
		* @return the value1
		*/
		T get_value1();
		/**
		* @brief Function to getter the value 2
		*
		* @param
		*/
		void set_value2(T);
		/**
		* @brief Function to setter the value 2
		*
		* @return the value2
		*/
		T get_value2();
		void to_string();
};

