/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        02-11-2021
	FECHA DE MODIFICACION:    02-11-2021*/
#include "Tabla.h"
template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
   pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
   delete[] pT;
}
