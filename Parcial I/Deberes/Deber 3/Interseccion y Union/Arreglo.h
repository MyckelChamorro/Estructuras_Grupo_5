/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase, ademas aumentar
			   la operacion de potenciacion.				
				
	FECHA DE CREACION:        10-11-2021 	
	FECHA DE MODIFICACION:    10-11-2021*/
#pragma once
#include <iostream>
template<typename T>
class Arreglo
{
private:
	T longitud;
	T arreglo[10];
public:
	
	Arreglo()=default;
	void Agregar(T n);
	void Imprimir(T n);

	
	T& getArreglo();
	/**
	 * @brief Function to setter the data
	 *
	 * @param
	 */
	void setArreglo(T);
	/**
	 * @brief Function to getter the data
	 *
	 * @param
	 */
	T& getLong();
	/**
	 * @brief Function to getter the result
	 *
	 * @param
	 */
	void setLong(T);
};

