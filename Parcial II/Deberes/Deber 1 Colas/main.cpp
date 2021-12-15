#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include"funciones.h"

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        12-12-2021
	FECHA DE MODIFICACION:    12-12-2021*/
	
using namespace std;
	
int main(int argc, char** argv) {
	
	int numeroClientes;
	string clientes;
	
	do{
		system("cls");
		cout<<"INGRESE EL NUMERO DE EMPLEADOS QUE DESEA ATENDER: ";
		cin >> clientes;
		if (esEntero(clientes)==true) {
		int cliente;
		int llegada;
		int salida;
		int espera;
		int noTrabaja;
		int servicio;
		int entreLlegada;
		
		cliente = 1;
		espera = 0;
		noTrabaja = 0;
		llegada = generarTiempoLlegada();
		servicio = generarTiempoServicio();
		
		numeroClientes = atoi(clientes.c_str());
		
		
		
		
		} else {
			system("cls");
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}
		system("pause");	
	}while(esEntero(clientes)==false);
	
	return 0;
}
