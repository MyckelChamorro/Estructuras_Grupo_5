/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        01-11-2021 	
	FECHA DE MODIFICACION:    01-11-2021*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "DivOperation.cpp"
#include "Aritmethic.cpp"

/**
* the main function
*
* @version: 01/11/2021/A
*/



int main() {
	float value1, value2;
	DivOperation<float> basic_operations;
	AritmethicDiv<float> arithmetic_operations;
	cout<<"Ingrese el valor [1]: ";
				cin>>value1;
				cout<<"Ingrese el valor [2]: ";
				cin>>value2;
				
				basic_operations.set_value1(value1);
				basic_operations.set_value2(value2);
				basic_operations.to_string();

				cout<< "Division: "<<arithmetic_operations.divide(basic_operations)<<endl;
				system("pause");
}
