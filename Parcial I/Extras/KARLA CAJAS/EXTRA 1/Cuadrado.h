/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        29-10-2021
	FECHA DE MODIFICACION:    29-10-2021*/
	


#include <iostream>
#include "Cuadrado.h"

using namespace std;

template <typename T>
Cuadrado<T>::Cuadrado(T lado)
{
    this->lado = lado;
}
template <typename T>
T Cuadrado<T>::getLado()
{
    return this->lado;
}
template <typename T>
void Cuadrado<T>::setLado(T lado)
{
    this->lado = lado;
}
template <typename T>
T Cuadrado<T>::area(){
    return this->lado * this->lado;
}


template <typename T>
T Cuadrado<T>::perimetro(){
    return this->lado * 4;
}
