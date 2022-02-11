/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				KARLA CAJAS - klcajas1@espe.edu.ec

	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.
	FECHA DE CREACION:        05-02-2022
	FECHA DE MODIFICACION:    06-02-2022*/
#include "MenuOption.h"

MenuOption::MenuOption(unsigned int number, const std::string title, Menu_Processing_Function_Ptr fuction)
	: number_option_(number), title_(title), p_processing_function_(fuction)
{

}