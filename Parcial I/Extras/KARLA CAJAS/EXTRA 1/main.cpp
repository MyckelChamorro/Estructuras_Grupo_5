/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        29-10-2021
	FECHA DE MODIFICACION:    29-10-2021*/
	
#include <iostream>
#include "Cuadrado.h"
#include "Cuadrado.cpp"

using namespace std;	
	
	
int main(){
    Cuadrado<int> cuadrado1(10);
    Cuadrado<float> cuadrado2(12.5);
    Cuadrado<double> cuadrado3(18.987);

    cout << "\nEl area del cuadrado1 es: " << cuadrado1.area() << endl;
    cout << "El perimetro del cuadrado1  es: "<< cuadrado1.perimetro() << endl;

    cout << "\nEl area del cuadrado2 es: " << cuadrado2.area() << endl;
    cout << "El perimetro del cuadrado2  es: "<< cuadrado2.perimetro() << endl;

    cout << "\nEl area del cuadrado3 es: " << cuadrado3.area() << endl;
    cout << "El perimetro del cuadrado3  es: "<< cuadrado3.perimetro() << endl;

    return 0;
}
