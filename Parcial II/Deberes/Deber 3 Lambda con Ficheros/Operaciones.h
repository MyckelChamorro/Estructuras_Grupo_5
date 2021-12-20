#include <iostream>
#pragma once
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Uso De Funciones Lambda o Anonimas 

	FECHA DE CREACION:        16-12-2021
	FECHA DE MODIFICACION:    20-12-2021*/

using namespace std;

class Operaciones{
	public:	
		Operaciones()=default;
		template<class... Args>
		auto maximoComun(Args... args);
		template<class... Args>
		auto minimoComun(Args... args);
	
};