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


