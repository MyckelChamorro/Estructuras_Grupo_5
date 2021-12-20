#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <conio.h>
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Uso De Funciones Lambda o Anonimas 

	FECHA DE CREACION:        16-12-2021
	FECHA DE MODIFICACION:    20-12-2021*/

using namespace std;

int generarNumeros() {
	return 1 + (rand() % (99 - 1));
}

bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();

	if (longitud == 0) {
		esEntero = false;
	}
	else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	}
	else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		}
		else {
			indice = 0;
		}

		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}

	return esEntero;
}

int menu()
{
	string opc;
	int opcion;
	bool repite = true;
	system("cls");
	do {
		cout << "\n\n1. CALCULO DEL MINIMO COMUN MULTIPLO (TRES NUMEROS)"
			<< "\n2. CALCULO DEL MAXIMO COMUN DIVISOR (TRES NUMEROS)"
			<< "\n3. CALCULO DEL MINIMO COMUN MULTIPLO ('N' NUMEROS)"
			<< "\n4. CALCULO DEL MAXIMO COMUN DIVISOR ('N' NUMEROS)"
			<< "\n5. CALCULO DEL MINIMO COMUN MULTIPLO (desde un txt)"
			<< "\n6. CALCULO DEL MAXIMO COMUN DIVISOR (desde un txt)"
			<< "\n0. Salir\n"
			<< "Escoja una opcion: ";
		cin >> opc;

		if (esEntero(opc) == true) {
			opcion = atoi(opc.c_str());
			repite = false;
		}
		else {
			system("cls");
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}
	} while (repite);
	return opcion;
}
