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
#ifndef OPERACIONESFECHA_H
#define OPERACIONESFECHA_H
#pragma once
#include "Fecha.h"
class OperacionesFecha{
    private:
        Fecha fecha;
    public:
        OperacionesFecha(Fecha);
        OperacionesFecha()=default;
        bool validarFecha(Fecha);
        Fecha *generarFecha(Fecha, int);
        bool isBisiesto(int);
        Fecha validarDiaLaboral(Fecha);
        Fecha validarFeriado(Fecha);
        int validarZeller(Fecha);
};
#endif