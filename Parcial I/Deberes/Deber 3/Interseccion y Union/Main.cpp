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
#include "Operaciones.cpp"
#include "Arreglo.h"
#include <iostream>
using namespace std;
int main() {
    Arreglo<int> a1, a2;
    int n, m;
    Operaciones<int> op;
    cout << "ingrese el tamano del primer arreglo: "; cin >> n;
    a1.Agregar(n);
    cout << "ingrese el tamano del segundo arreglo: "; cin >> m;
    a2.Agregar(m);
    op.Interseccion(a1, a2, a1.getLong(), a2.getLong());

   
        return 0;
  
   

}
