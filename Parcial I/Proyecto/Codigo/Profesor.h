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
#if !defined(__Class_Diagram_1_Profesor_h)
#define __Class_Diagram_1_Profesor_h
#include <iostream>
using namespace std;
class Profesor{
    private:
        string Pnombre;
        string apellido;
        string CI;
        string ID;
    public:
        Profesor(string,string, string, string);
        Profesor()=default;
        string get_Pnombre();
        void set_Pnombre(string);
        string get_apellido();
        void set_apellido(string);
        string get_CI();
        void set_CI(string);
        string get_ID();
        void set_ID(string);
};
#endif