#pragma once
#include<iostream>
#include"Archivo.cpp"
#include"Suma.cpp"

using namespace std;

int main() {
	Archivo<string> document;
	Suma<int> op;
	document.setDireccion("arreglo.txt");
	int* ar;
	ar = document.Lectura(document.getDireccion());

	cout << "El arreglo del documento es: " << endl;
	for (int i = 0; i < sizeof(ar); i++)
	{
		cout << *(ar + i) << endl;
	}

	cout << "El total del Arreglo :"<< op.sum(ar);
}
