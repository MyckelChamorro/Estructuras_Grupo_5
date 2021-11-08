/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        29-10-2021
	FECHA DE MODIFICACION:    29-10-2021*/
	
#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>

using namespace std;

template <typename T>
class Cuadrado{
    private:
        T lado;
    public:
        Cuadrado(T lado);
        T getLado();
        void setLado(T lado);
        T area();
        T perimetro();

};
#endif
