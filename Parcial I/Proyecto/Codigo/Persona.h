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
#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h
#include <iostream>
using namespace std;
class Persona{
    private:
        string Pnombre;
        string Snombre;
        string apellido;
        string correo;
        string CI;
        string telefono;
        string ID;
        int edad;
    public:
        Persona(string,string, string, string, int, string, string,string);
        Persona()=default;
        string get_Pnombre();
        void set_Pnombre(string);
        string get_Snombre();
        void set_Snombre(string);
        string get_apellido();
        void set_apellido(string);
        string get_correo();
        void set_correo(string);
        string get_CI();
        void set_CI(string);
        string get_ID();
        void set_ID(string);
        string get_telefono();
        void set_telefono(string);
        int get_edad();
        void set_edad(int);
};
#endif