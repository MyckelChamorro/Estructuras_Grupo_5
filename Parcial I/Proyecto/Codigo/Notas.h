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
#include<iostream>
#include<vector>
#include<string.h>
using std::vector;
using namespace std;
class Notas
{
private:
    string CI;
    float materia1[3];
    float materia2[3];
    float materia3[3];
    float materia4[3];
    float materia5[3];
    float materia6[3];
public:
    Notas()=default;
    ~Notas();
    float *get_materia1();
    void set_materia1(float,float,float);
    void set_materia1(float,int);
    float *get_materia2();
    void set_materia2(float,float,float);
    void set_materia2(float,int);
    float *get_materia3();
    void set_materia3(float,float,float);
    void set_materia3(float,int);
    float *get_materia4();
    void set_materia4(float,float,float);
    void set_materia4(float,int);
    float *get_materia5();
    void set_materia5(float,float,float);
    void set_materia5(float,int);
    float *get_materia6();
    void set_materia6(float,float,float);
    void set_materia6(float,int);
    string get_CI();
    void set_CI(string);
};
