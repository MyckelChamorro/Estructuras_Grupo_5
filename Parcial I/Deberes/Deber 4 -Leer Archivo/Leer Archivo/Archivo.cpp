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
#include <stdlib.h>
#include <string.h>
#include"Archivo.h"
using namespace std;
template<typename A>
int* Archivo<A>::Lectura(A dir) {
	static int vec[1000];
		int a=0;
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

template<typename A>
int Archivo<A>::Tamaño(A dir) {
	static int vec[1000];
	int a = 0;
	ifstream doc;
	doc.open(dir, ios::in);
	if (doc.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!doc.eof())
	{
		doc >> vec[a];
		a = a + 1;
	}
	doc.close();
	return a;
}
