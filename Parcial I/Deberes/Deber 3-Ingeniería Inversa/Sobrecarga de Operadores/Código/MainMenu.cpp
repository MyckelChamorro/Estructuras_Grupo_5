/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: SOBRECARGA DE OPERADORES 2 POR INTEGRANTE.

	FECHA DE CREACION:        06-11-2021
	FECHA DE MODIFICACION:    08-11-2021*/
#pragma warning(disable : 4996)
#include <iostream>
#include "Operations.cpp"
#include "Data.cpp"
#include "Validation.h"

int main(int argc, char** argv) {
	float value1, value2;
	Validation validation;
	char message[] = "Ingrese el primer número: ";
	char message2[] = "Ingrese el segundo número: ";
	char aux_value1[20];
	char aux_value2[20];

	strcpy(aux_value1, validation.only_floats(message));
	value1 = atof(aux_value1);
	std::cout << std::endl;

	strcpy(aux_value2, validation.only_floats(message2));
	value2 = atof(aux_value2);
	std::cout << std::endl;

	Data<float> pareja(value1,value2);	
	Operations<float> operations;
	std::cout << "Add: "<<operations.operator+(pareja).getResult()<<std::endl;
	std::cout << "Subtract: " << operations.operator-(pareja).getResult() << std::endl;
	std::cout << "Multiply: " << operations.operator*(pareja).getResult() << std::endl;
	
	std::cout << "Division: " << operations.operator/(pareja).getResult() << std::endl;
	std::cout << "Greater than: " << operations.operator>(pareja).getResult() << std::endl;
	std::cout << "Smaller than: " << operations.operator<(pareja).getResult() << std::endl;
	
	std::cout << "Is Equal: " << operations.operator==(pareja).getResult() << std::endl;
	std::cout << "greater equal to: " << operations.operator>=(pareja).getResult() << std::endl;
	std::cout << "Is Unequal: " << operations.operator!=(pareja).getResult() << std::endl;
	
	std::cout << "less equal to: " << operations.operator<=(pareja).getResult() << std::endl;
	std::cout << "basic assignment: " << operations.operator=(pareja).getResult() << std::endl;
	std::cout << "assign division: " << operations.operator/=(pareja).getResult() << std::endl;

	return 0;
}
