    /*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
        INGENIERA DE SOFTWARE

        AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


        ENUNCIADO:Realizar un programa utilizando template.

        FECHA DE CREACION:        29-10-2021
        FECHA DE MODIFICACION:    29-10-2021*/

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>

using namespace std;

template<typename T>
class Estudiante {
    private:
        string nombre;
        T nota;

    public:
        Estudiante(string nombre, T nota);
        void mostrar();

};
#endif
