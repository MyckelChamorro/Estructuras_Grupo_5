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
#include <iostream>
#include "Fecha.h"
#include "OperacionesFecha.h"
#include "ListadoPersonas.h"
#include "ListadoMaterias.h"
#include "ListadoRegistro.h"
#include "OperacionesPersona.h"
#include "Validar.h"
#include "Menu.h"
using namespace std;
int main(int, char**) {
    int dia,mes,anio,cuota,opcion;
    string telefono;
    OperacionesFecha op;
    OperacionesPersona opePersona;
    ListadoPersonas lp;
    ListadoMaterias lm;
    Fecha fecha;
	int select;
	char** lista=(char**)calloc(8, sizeof(char*));
	*(lista+0)="REGISTRO ESTUDIANTES";
	*(lista+1)="INSCRIPCION A MATERIAS";
    *(lista+2)="REGISTRO NOTAS";
	*(lista+3)="MOSTRAR ESTUDIANTES";
    *(lista+4)="MOSTRAR NOTAS DE ESTUDIANTE";
    *(lista+5)="MOSTRAR MATERIAS Y SUS DOCENTES";
    *(lista+6)="REGISTRO DOCENTE Y MATERIA";
	*(lista+7)="SALIR";
	Menu menu;
	do{
		select=menu.genMenu("Menu Listas",lista,8);
		menu.llamar_menu(select);
	}while(select!=3);
	return 0;
}
