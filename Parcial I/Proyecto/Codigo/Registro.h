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
#if !defined(__Class_Diagram_1_Registro_h)
#define __Class_Diagram_1_Registro_h
#include <iostream>
using namespace std;
class Registro{
    private:
        string CI;
        string materia1;
        string materia2;
        string materia3;
        string materia4;
        string materia5;
        string materia6;
    public:
        Registro(string,string, string, string,string,string,string);
        Registro()=default;
        string get_CI();
        void set_CI(string);
        string get_Materia1();
        void set_Materia1(string);
        string get_Materia2();
        void set_Materia2(string);
        string get_Materia3();
        void set_Materia3(string);
        string get_Materia4();
        void set_Materia4(string);
        string get_Materia5();
        void set_Materia5(string);
        string get_Materia6();
        void set_Materia6(string);
};
#endif