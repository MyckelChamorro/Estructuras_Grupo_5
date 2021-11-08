    /*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
        INGENIERA DE SOFTWARE

        AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


        ENUNCIADO:Realizar un programa utilizando template.

        FECHA DE CREACION:        29-10-2021
        FECHA DE MODIFICACION:    29-10-2021*/



#include <iostream>
#include "Estudiante.h"
#include "Estudiante.cpp"

using namespace std;

int main(){
    Estudiante<char> es1("Alejandro",'A');
    Estudiante<int> es2("Juan",20);
    Estudiante<float> es3("Pedro",20.5);
    Estudiante<double> es4("Juan",19.987);

    es1.mostrar();
    es2.mostrar();
    es3.mostrar();
    es4.mostrar();


    return 0;
}
