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
#include "Screen.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdarg>
#include <vadefs.h>
#include <stdarg.h>
#include <string>


int Screen::generate_menu(int nargs,...){
	int selection = 1;
	int key;
	bool flag = true;
	console.hideCursor(false);

	do {		
		va_list args;
		va_start(args,nargs);

		system("cls");
		console.gotoXY(20,10);
		std::cout << fg::BGreen << bg::Black << " | UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE " << std::endl;
		std::cout << fg::BGreen << bg::Black << " \t\t     | GRUPO 5				         " << std::endl;
		std::cout<< fg::BGreen<< bg::Black <<" \t\t     | MEMORIA DINAMICA - LISTAS SIMPLES          "<<std::endl;
		
		std::cout<<fg::BWhite<<bg::Black; 
		for(int i = 0 ;i < nargs ; i++)	{
			if (selection == i+1) {
				console.gotoXY(20,14+i);
				std::cout<<fg::Gray<<"->"<<fg::BWhite<<va_arg(args,char *)<<std::endl;
			}else{
				console.gotoXY(21,14+i);
				std::cout<<va_arg(args,char *)<<std::endl;
			}
		}
		va_end(args);

		do {
			key = _getch();
		}while (key != UP && key != DOWN && key != ENTER);

		switch (key) {
			case UP:
				selection--;
				if (selection <= 0) {
					selection = nargs;
				}
				break;
			case DOWN:
				selection++;
				if (selection > nargs) {
					selection = 1;
				}
				break;
			case ENTER:
				flag = false;
				break;
		}	

	}while (flag);

	return selection;
}
