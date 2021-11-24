/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: LECTURA DE TXT Y SUMA

	FECHA DE CREACION:        09-11-2021
	FECHA DE MODIFICACION:    10-11-2021*/
#pragma once
#include<iostream>
#include"Suma.h"

template<typename T>
T& Suma<T>::sum(T vec[],T tam) {
	T tot = 0;
	for (int i = 0; i < tam;i++) {
		tot = vec[i] + tot;
	}
	return tot;
}