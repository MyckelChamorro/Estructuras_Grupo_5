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
#if !defined(__Class_Diagram_1_LISTADOPERSONAS_H)
#define __Class_Diagram_1_LISTADOPERSONAS_H
#include "Lista.h"
#include <string.h>
#include <iterator>
#include <iostream>
#include <sstream>
class ListadoPersonas{
    public:
        ListadoPersonas()=default;
        void agregarArchivo(Persona);
        Lista leerArchivo();
};
#endif