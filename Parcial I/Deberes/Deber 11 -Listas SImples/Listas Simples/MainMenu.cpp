/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

	FECHA DE CREACION:        21-11-2021
	FECHA DE MODIFICACION:    21-11-2021*/
#pragma warning(disable : 4996)
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "List.h"
#include "List.cpp"
#include "Input.h"
#include "Screen.h"
#include "Validation.h"

using namespace std;

int main() {
	Validation validation;
	List<float> list_1;
	float var = 0.0;
	char aux_var[20];
	Screen screen;
	int option;
	char message1[] = "Ingrese el dato: ";
	char message2[] = "Ingrese el dato: ";

	do {
		option = screen.generate_menu(6,"Insertar por la cabeza", "Insertar por la cola", "Eliminar por la cabeza", "Eliminar por la cola", "Mostrar", "Salir");

		switch (option) {
			case 1:
				strcpy(aux_var, validation.only_floats(message1));
				var = atof(aux_var);
				list_1.add_head(var);
				list_1.print();			
				system("pause");
				break;

			case 2:
				strcpy(aux_var, validation.only_floats(message2));
				var = atof(aux_var);
				list_1.add_end(var);
				list_1.print();
				system("pause");
				break;

			case 3:
				std::cout << "Se eliminara el dato por la cabeza" << std::endl;
				list_1.del_head();
				system("pause");
				break;			

			case 4:
				std::cout << "Se eliminara el dato por la cola" << std::endl;
				list_1.del_end();
				system("pause");
				break;

			case 5:
				cout << "\nLa lista simple es: " << endl;
				list_1.print();
				system("pause");
				break;

			default:
				cout<< "Salio con exito!!!!."<< endl;
				system("pause");
				break;
		}
	} while (option != 6);
	return 0;
}
