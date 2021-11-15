
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: REALIZAR UN PROGRAMA QUE CALCULE LA OPERACION ESPECIFICADA EN CLASE Y EL MODELO REALIZADO LLEVARLO A CODIGO.				
				
	FECHA DE CREACION:        08-11-2021 	
	FECHA DE MODIFICACION:    08-11-2021*/
#include <iostream>
#include "Proceso.h"
#include "Operaciones.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */#pragma once
#include <iostream>
using namespace std;
template <class T>
class Complejo;
template <typename T>
ostream& operator <<(ostream &o, const Complejo<T> &A);

template <class T>
class Complejo{
	public:
		Complejo(T real=0, T img=0);
		void setReal(T real);
		void setImg(T img);
		T getReal();
		T getImg();
		Complejo<T>& operator +(const Complejo<T>  &A);
		Complejo<T>& operator -(const Complejo<T>  &A);
	private:
		T real;
		T img;
};

