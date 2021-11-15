/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase, ademas aumentar
			   la operacion de potenciacion.				
				
	FECHA DE CREACION:        10-11-2021 	
	FECHA DE MODIFICACION:    10-11-2021*/
#pragma once
#include "Operaciones.h"
#include <iostream>
using namespace std;
template<typename M>
M Operaciones<M>::Interseccion(Arreglo<M> arr1, Arreglo<M> arr2, M n,M m ) {
    int arr3[50];
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1.getArreglo[i] == arr2.getArreglo[j]) {
                arr3[a] = arr1.getArreglo[i];
                a++;
            }
        }
    }
    cout << "interseccion: \n";
    for (int i = 0; i < a; i++) {
        cout << arr3[i] << endl;
    }
}
