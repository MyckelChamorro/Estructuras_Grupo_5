/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        20-11-2021
	FECHA DE MODIFICACION:    07-12-2021*/
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "ListadoPersonas.h"
#include "OperacionesPersona.h"
#include "Validar.h"
#include "OperacionesFecha.h"
#include "ListadoRegistro.h"
#include "ListadoMaterias.h"
#include "ListadoNotas.h"
#include <iostream>
using namespace std;
class Menu{
	public:
		void gotoxy(int x, int y);
		Menu()=default;
		void llamar_menu(int);
		int genMenu(string, char **, int);
};