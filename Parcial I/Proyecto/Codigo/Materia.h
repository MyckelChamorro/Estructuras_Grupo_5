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
#pragma once
#include "Profesor.h"
#include <iostream>
using namespace std;
class Materia{
    private:
        Profesor profe;
        string NRC;
        string Nombre;    
    public:
        Materia(string,string,Profesor);
        Materia()=default;
        string get_NRC();
        void set_NRC(string);
        string get_Nombre();
        void set_Nombre(string);
        Profesor get_profe();
        void set_profe(Profesor);
};

