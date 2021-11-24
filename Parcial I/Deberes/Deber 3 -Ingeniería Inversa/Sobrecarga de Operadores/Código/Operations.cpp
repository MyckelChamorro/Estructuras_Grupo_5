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

#include "Operations.h"
#include "Data.h"
#include <stdlib.h>

template <typename T>
Operations<T>::Operations(){}

template <typename T>
Data<T>& Operations<T>::operator +(Data<T> &dat){
	return *(new Data<T>(dat.getData() + dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator -(Data<T> &dat){
	return  *(new Data<T>(dat.getData() - dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator *(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() * dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator /(Data<T>& dat) {
	return *(new Data<T>(dat.getData() / dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator >(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() > dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator <(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() < dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator ==(Data<T>& dat) {
	return *(new Data<T>(dat.getData() == dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator >=(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() >= dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator !=(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() != dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator <=(Data<T>& dat) {
	return *(new Data<T>(dat.getData() <= dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator =(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() = dat.getValue()));
}

template <typename T>
Data<T>& Operations<T>::operator /=(Data<T>& dat) {
	return  *(new Data<T>(dat.getData() /= dat.getValue()));
}
template <typename T>
Operations<T>::~Operations(){}
