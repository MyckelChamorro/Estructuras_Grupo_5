    /*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
        INGENIERA DE SOFTWARE

        AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


        ENUNCIADO:Realizar un programa utilizando template.

        FECHA DE CREACION:        29-10-2021
        FECHA DE MODIFICACION:    29-10-2021*/

#include <iostream>
#include "Estudiante.h"

using namespace std;

template <typename T>
Estudiante<T>::Estudiante(string nombre, T nota){
    this->nombre = nombre;
    this->nota = nota;
}
template <typename T>
void Estudiante<T>::mostrar(){
    cout << "\nNombre: " << this->nombre << endl;
    cout << "Nota: " << this->nota << endl;
}
