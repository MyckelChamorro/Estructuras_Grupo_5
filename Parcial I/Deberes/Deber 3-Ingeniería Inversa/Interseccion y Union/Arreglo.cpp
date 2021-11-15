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
#include "Arreglo.h"
#include <iostream>
using namespace std;
template <typename T>
void Arreglo<T>::Agregar(T n) {
	for (int i = 0; i < n; i++) {
		cout << "ingrese  valor " << i + 1 << ": "; 
		cin >> arreglo[i];
	}
	this->longitud = n;

}

template <typename T>
void Arreglo<T>::Imprimir(T n) {
	for (int i = 0; i < n; i++) {
		cout << arreglo[i];
	}
}
template<typename T>
T& Arreglo<T>::getArreglo() {
	return Arreglo;
}

template<typename T>
void Arreglo<T>::setArreglo(T _longg) {
	Arreglo = _longg;
}

template<typename T>
T& Arreglo<T>::getLong() {
	return longitud;
}


template<typename T>
void Arreglo<T>::setLong(T _longg) {
	longitud = _longg;
}


