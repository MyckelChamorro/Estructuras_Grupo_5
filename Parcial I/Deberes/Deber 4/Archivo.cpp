#pragma once
#include<iostream>
#include <stdlib.h>
#include <string.h>
#include"Archivo.h"
using namespace std;
template<typename A>
int* Archivo<A>::Lectura(A dir) {
	static int vec[1000];
		int a;
		ifstream doc;
	doc.open(dir, ios::in);
	if (doc.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!doc.eof())
	{
		doc>> vec[a];
		a=a+1;
	}
	doc.close();
	return vec;
}

template<typename A>
A& Archivo<A>::getDireccion() {
	return direccion;
}

template<typename A>
void Archivo<A>::setDireccion(A dir) {
	this->direccion = dir;
}
