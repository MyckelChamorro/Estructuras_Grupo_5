/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

    AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                LIZBETH RECALDE - klcajas1@espe.edu.ec

    ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL TRIANGULO DE PASCAL.
    FECHA DE CREACION:        05-02-2022
    FECHA DE MODIFICACION:    06-02-2022*/

#include "Operaciones.h"
using namespace std;
#include <iostream>

int Operaciones::factorial(int n){

    if (n < 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int Operaciones::combinacion(int n, int m) {
    int combinacion;
    combinacion = factorial(n) / (factorial(m) * factorial(n - m));
    return combinacion;
}

void Operaciones::mostrar(Datos _dato) {
    
    for (int i = 0; i <= _dato.get_exp(); i++)
    {
        cout << "Grado: " << i<<" ";
        for (int j = _dato.get_exp()-i ; j >0 ; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << combinacion(i, k) << " ";
        }
        cout << endl;
    }
}