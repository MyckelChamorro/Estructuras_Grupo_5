#if !defined(__Menu_h)
#define __Menu_h
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

	FECHA DE CREACION:        22-11-2021
	FECHA DE MODIFICACION:    24-11-2021*/

using namespace std;

class Menu {
public:
Menu() {
	*(menuHead + 0) = "Insertar ";//0
	*(menuHead + 1) = "Eliminar ";//1
	*(menuHead + 2) = "Mostrar";//2
	*(menuHead + 3) = "Salir ";//3
	*(continuar + 0) = "Si";
	*(continuar + 1) = "No";
}

~Menu(){
}
int menu() {
	int cursor = 0;
	char tecla;
	for (;;) {
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << " BIENVENIDO " << endl;
		for (int i = 0; i < 4; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(menuHead + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(menuHead + i) << endl;
			}
		}
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 4) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 4;
				}
				break;
			}
			if (tecla == 13) {
				return cursor;
			}
		}
	}
}

int repetir(){
	int cursor = 0;
	char tecla;
	for (;;) {
			system("cls");
		// SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
		cout << " Desea continuar " << endl;
		for (int i = 0; i < 2; i++) {
			if (cursor == i) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
				cout << *(continuar + i) << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << *(continuar + i) << endl;
			}
		}
		for (;;) {
			tecla = _getch();
			if (tecla == 80) {
				cursor++;
				if (cursor == 2) {
					cursor = 0;
				}
				break;
			}
			if (tecla == 72) {
				cursor--;
				if (cursor == -1) {
					cursor = 1;
				}
				break;
			}
			if (tecla == 13) {
				return cursor;
			}
		}
	}
}

private:
	string* menuHead = new string[4];
	string* continuar = new string[2];
};
#endif
