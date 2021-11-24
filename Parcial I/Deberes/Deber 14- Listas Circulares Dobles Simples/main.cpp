/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

	FECHA DE CREACION:        22-11-2021
	FECHA DE MODIFICACION:    24-11-2021*/

#include<iostream>
#include "Nodo.cpp"
#include "ListaCircular.h"
#include "ListaCircular.cpp"

using namespace std; 

int main(){
	
	int num;
	ListaCircular * lista=new ListaCircular();
	int i=5;
	while(i!=-1){
		cout<<"Ingrese el numero de almacenamiento:";
		cin>>num;
		if(num!=-1){
			lista-> insertar(num);
		}
		i--;
	}
	
	lista->mostrar();
	cout<<"\n";
	lista->eliminar(3);
	lista->mostrar();
	cout<<"\n";
	lista->insertarEn(2,10);
	lista->mostrar();
	
}
