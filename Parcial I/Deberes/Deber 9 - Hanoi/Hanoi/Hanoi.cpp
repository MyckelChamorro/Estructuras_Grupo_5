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
#include "Hanoi.h"
#include <iterator>
#include <charconv>
using namespace std;
template<typename N>
void Hanoi<N>::hanoi(N num,N a,N b,N c){
	char A,B,C;
	
	
	if(num==1){
		cout<<"Mover del bloque "<<num<<" Desde "<<char(a)<<" Hata "<< char(c)<< endl;
	}
	else{
		hanoi(num-1,a,b,c);
		cout<<"Mover del bloque "<<num<<" Desde "<<char(a)<<" Hata "<< char(c)<< endl;
		hanoi(num-1,b,c,a);
	}
}
template<typename N>
int Hanoi<N>::pasos(N discos){
		if(discos==1){
			return 1;
		}
		else{
			return 2*pasos(discos-1)+1;
		}
	}