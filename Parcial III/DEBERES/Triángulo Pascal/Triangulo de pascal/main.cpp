/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec

	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL TRIANGULO DE PASCAL.
	FECHA DE CREACION:        05-02-2022
	FECHA DE MODIFICACION:    06-02-2022*/


#include <iostream>
#include "Datos.h"
#include "Operaciones.h"
using namespace std;

int main()
{
	int opc;
	do {
		Datos dato;
		int numero;
		Operaciones op;
		do {
			cout << "Ingrese la dimension \n";
			cin >> numero;
			cout << "\n";
			
		} while (numero <= 0);
		dato.set_exp(numero);
		op.mostrar(dato);
		cout << "\n";
		cout << "Si desea continuar con el programa Si-1/No-0\n";
		cin >> opc;
	} while (opc != 0);
	
	
}
