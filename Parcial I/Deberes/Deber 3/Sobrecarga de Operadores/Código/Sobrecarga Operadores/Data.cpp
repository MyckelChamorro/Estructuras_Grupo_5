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

#include "Data.h"
template <typename T>
Data<T>::Data(T _data, T _value){
   this->data=_data;
   this->value=_value;
}

template <typename T>
Data<T>::Data(T _result) {
	this->result = _result;
}

template<typename T>
T& Data<T>::getData(){
   return data;
}

template<typename T>
void Data<T>::setData(T _data){
   data = _data;
}

template<typename T>
T& Data<T>::getValue(){
   return value;
}

template<typename T>
T& Data<T>::getResult() {
	return result;
}

template<typename T>
void Data<T>::setResult(T _result) {
	result = _result;
}

template<typename T>
Data<T>::~Data() {}
