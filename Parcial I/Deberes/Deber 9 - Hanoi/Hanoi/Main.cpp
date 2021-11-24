/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec
				
	
	ENUNCIADO: Pasar a clases y usar templates para el programa de Torres Hanoi.				
				
	FECHA DE CREACION:        19-11-2021 	
	FECHA DE MODIFICACION:    19-11-2021*/
#include <iostream>
#include <iostream>
#include "Hanoi.cpp"
using namespace std;
int main(int argc, char** argv) {
	int num,movimientos;
	Hanoi<int> torres;
	
	cout<<"\nDiscos A, B, C\n";
	cout<<"\nIngrese el numero de discos ";
	cin>>num;
	torres.hanoi(num,'A','B','C');
	cout<<"\nTotal movimientos "<<torres.pasos(num);
	return 0;
}
