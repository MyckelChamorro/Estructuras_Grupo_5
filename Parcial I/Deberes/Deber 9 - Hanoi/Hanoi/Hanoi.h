/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec
				
	
	ENUNCIADO: Pasar a clases y usar templates para el programa de Torres Hanoi.				
				
	FECHA DE CREACION:        19-11-2021 	
	FECHA DE MODIFICACION:    19-11-2021*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
template<typename N>
class Hanoi
{
public:
void hanoi(N ,N ,N, N );
int pasos(N );
void hanoi();
};