/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        29-10-2021 	
	FECHA DE MODIFICACION:    29-10-2021*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "AddOperation.cpp"
#include "Aritmethic.cpp"

/**
* the main function
*
* @version: 29/10/2021/A
*/



int main() {
	float value1, value2;
	AddOperation<float> basic_operations;
	AritmethicAdd<float> arithmetic_operations;
	cout<<"Ingrese el valor [1]: ";
				cin>>value1;
				cout<<"Ingrese el valor [2]: ";
				cin>>value2;
				
				basic_operations.set_value1(value1);
				basic_operations.set_value2(value2);
				basic_operations.to_string();

				cout<< "Suma: "<<arithmetic_operations.add(basic_operations)<<endl;
				system("pause");
}
