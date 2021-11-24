/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase.				
				
	FECHA DE CREACION:        08-11-2021 	
	FECHA DE MODIFICACION:    08-11-2021*/
#include <iostream>
#include "Metodo.cpp"
using namespace std;
int main(int argc, char** argv) {
	Caja<int> caja1;
	Caja<int> caja2(3,5);
	Caja<float> caja3(3.3f,5.5f,8.8f);
	cout<<"\n";
	cout<<"Caja 1: ";
	caja1.mostrarMedidas();
	cout<<"\n";
	cout<<"Caja 2: ";
	caja2.mostrarMedidas();
	cout<<"\n";
	cout<<"Caja 3: ";
	caja3.mostrarMedidas();
	return 0;
}
