/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        31-10-2021
	FECHA DE MODIFICACION:    31-10-2021*/
	
#include <iostream>
using namespace std;
template <typename t>
class Numero
{
	public:
		Numero(t _n1, t _n2){n1 =_n1; n2 =_n2;}
		t Mayor();
	private:
		t n1, n2;
};
