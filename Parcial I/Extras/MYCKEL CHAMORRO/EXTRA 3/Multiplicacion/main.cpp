/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA .							
	FECHA DE CREACION:        31-10-2021 	
	FECHA DE MODIFICACION:    31-10-2021*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "MultOperation.cpp"
#include "Aritmethic.cpp"

/**
* the main function
*
* @version: 31/10/2021/A
*/



int main() {
	float value1, value2;
	MultOperation<float> basic_operations;
	AritmethicMult<float> arithmetic_operations;
	cout<<"Ingrese el valor [1]: ";
				cin>>value1;
				cout<<"Ingrese el valor [2]: ";
				cin>>value2;
				
				basic_operations.set_value1(value1);
				basic_operations.set_value2(value2);
				basic_operations.to_string();

				cout<< "Multiplicacion: "<<arithmetic_operations.multiply(basic_operations)<<endl;
				system("pause");
}
