/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: LECTURA DE TXT Y SUMA

	FECHA DE CREACION:        09-11-2021
	FECHA DE MODIFICACION:    10-11-2021*/
#pragma once
#include<fstream>
#include<stdlib.h>

template<typename A>
class Archivo
{
public:
	Archivo()=default;

	int* Lectura(A dir);
	int  Tamaño(A dir);
	A& getDireccion();
	void setDireccion(A dir);

private:
	A direccion;

};

