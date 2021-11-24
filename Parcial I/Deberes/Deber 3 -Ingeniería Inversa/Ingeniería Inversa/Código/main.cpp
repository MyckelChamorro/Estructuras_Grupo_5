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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>
#include "Complejo.h"

using namespace std;

int main(int argc, char** argv) {
	Complejo<int> A(1,3),B(2,4);
	Complejo<int> C;
	int x,y;
	cout <<" suma de complejos "<<endl;
	C=A+B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	C.setImg(0);
	C.setReal(0);
	A.setImg(3);
	A.setReal(1);
	cout <<" resta de complejos "<<endl;
	C=A-B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	
	
	cin.ignore();
	system("pause");
	return 0;
}

