/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase.				
				
	FECHA DE CREACION:        08-11-2021 	
	FECHA DE MODIFICACION:    08-11-2021*/
#include <iostream>
#include "Metodo.h"
using namespace std;
template <typename T>
Caja<T>::Caja(){
	this->ancho=1;
	this->alto=1;
	this->profundidad=1;
}
template <typename T>
Caja<T>::Caja(T _alto){
	this->alto=_alto;
	this->ancho=1;
	this->profundidad=1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho){
	this->alto=_alto;
	this->ancho=_ancho;
	this->profundidad=1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho, T _profundidad){
	this->alto=_alto;
	this->ancho=_ancho;
	this->profundidad=_profundidad;
}
template <typename T>
void Caja<T>::mostrarMedidas(){
	cout<<"\nValor del atributo Alto "<<this->alto<<endl;
	cout<<"\nValor del atributo Ancho "<<this->ancho<<endl;
	cout<<"\nValor del atributo Profundidad "<<this->profundidad<<endl;
}
template <typename T>
void Caja<T>::setAncho(T _ancho){
	this->ancho=_ancho;
}
template <typename T>
void Caja<T>::setAlto(T _alto){
	this->alto=_alto;
}
template <typename T>
void Caja<T>::setProfundidad(T _profundidad){
	this->profundidad=_profundidad;
}
template <typename T>
T Caja<T>::getAncho(){
	return this->ancho;
}
template <typename T>
T Caja<T>::getAlto(){
	return this->alto;
}
template <typename T>
T Caja<T>::getProfundidad(){
	return this->profundidad;
}
