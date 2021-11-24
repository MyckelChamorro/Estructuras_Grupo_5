/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase, ademas aumentar
			   la operacion de potenciacion.				
				
	FECHA DE CREACION:        10-11-2021 	
	FECHA DE MODIFICACION:    10-11-2021*/
#pragma once
#include "Arreglo.cpp"
template<typename M>
class Operaciones
{
public:

	Operaciones()=default;
	M Interseccion(Arreglo<M> arr1, Arreglo<M> arr2,M n,M m);
	M Union(Arreglo<M> arr1, Arreglo<M> arr2);

private:
	Arreglo<M> arr1,arr2;

};


