/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: REALIZAR UN PROGRAMA QUE CALCULE LA OPERACION ESPECIFICADA EN CLASE Y EL MODELO REALIZADO LLEVARLO A CODIGO.				
				
		FECHA DE CREACION:        08-11-2021 	
	FECHA DE MODIFICACION:    08-11-2021*/
#include <iostream>
#include "Proceso.h"
#include "Operaciones.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "Complejo.h"
#include <iostream>
using namespace std;
template <class T>
Complejo<T>::Complejo(T real, T img){
	this->real=real;
	this->img=img;
}
template <class T>
void Complejo<T>::setReal(T real){
	this->real=real;
}
template <class T>
void Complejo<T>::setImg(T img){
	this->img=img;
}
template <class T>
T Complejo<T>::getReal(){
	return this->real;
}
template <class T>
T Complejo<T>::getImg(){
	return this->img;
}
template <class T>
Complejo<T>& Complejo<T>::operator +(const Complejo<T>  &A){
	this->img+= A.img;
	this->real+= A.real;
	return *this;
}
template <class T>
Complejo<T>& Complejo<T>::operator -(const Complejo<T>  &A){
	this->img-= A.img;
	this->real-= A.real;
	return *this;
}
template class Complejo<int>;
template class Complejo<float>;
template class Complejo<double>;


