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
#include"Archivo.cpp"
#include"Suma.cpp"
#include <array>

using namespace std;

int main() {
	Archivo<string> document;
	Suma<int> op;
	document.setDireccion("arreglo.txt");
	int* ar;
	int n;
	ar = document.Lectura(document.getDireccion());
	n= document.Tamaño(document.getDireccion());
	cout << "El arreglo del documento es: " << endl;
	cout << "Tamaño del arreglo: " << n <<endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(ar + i) << endl;
	}

	cout << "El total del Arreglo :"<< op.sum(ar,n);
}
