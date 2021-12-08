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
#include "OperacionesPersona.h"
#include "Validar.h"
using namespace std;
/**
 * @brief 
 * 
 * @param persona 
 */
void OperacionesPersona::generarCorreo(Persona &persona){
	char *nombre = (char*)persona.get_Pnombre().c_str();
	char *nombre1 = (char*)persona.get_Snombre().c_str();
	char *apellido = (char*)persona.get_apellido().c_str();
	string correo = "";
	correo += tolower(*(nombre + 0));
	correo +=tolower(*(nombre1 + 0));
	for (int i = 0; i < persona.get_Pnombre().length(); i++){
		if(*(nombre+i) == 32){
			correo += tolower(*(nombre + (i+1)));
		}
	}
	for (int j = 0; j < persona.get_Snombre().length(); j++){
		if(*(nombre1+j) == 32){
			correo += tolower(*(nombre1 + (j+1)));
		}
	}
	*(apellido + 0) = tolower(*(apellido + 0));
	correo += apellido;
	correo += "@espe.edu.ec";
	persona.set_correo(correo);
	cout<<persona.get_correo()<<endl;
}