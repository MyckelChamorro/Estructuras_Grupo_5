#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <memory>
#include "CountingSort.h"

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
			INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec

	ENUNCIADO: Uso de Algoritmos de Busqueda por distrbucion.

	FECHA DE CREACION:        19-12-2021
	FECHA DE MODIFICACION:    19-12-2021*/


int main(int argc, char** argv) {
	CountingSort operaciones;
	int tam;
	cout << "Ingrese el numero de elementos para el vector: ";
	cin >> tam;
	int* arreglo = new int[tam];
	operaciones.encerar(arreglo, tam);
	operaciones.generar(arreglo, tam);
	operaciones.imprimir(arreglo, tam);
	operaciones.ordenar(arreglo, tam);
	cout << "\n------Arreglo ordenado------" << endl;
	operaciones.imprimir(arreglo, tam);
	delete[] arreglo;
	cout << "\n";
	system("pause");
	return 0;
}
