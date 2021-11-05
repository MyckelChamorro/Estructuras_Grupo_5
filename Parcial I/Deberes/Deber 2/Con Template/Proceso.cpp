/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: REALIZAR UN PROGRAMA QUE CALCULE LA OPERACION ESPECIFICADA EN CLASE Y EL MODELO REALIZADO LLEVARLO A CODIGO.				
				
	FECHA DE CREACION:        27-10-2021 	
	FECHA DE MODIFICACION:    28-10-2021*/
#include<iostream>
#include "Proceso.h"
template <typename dato>
Proceso<dato>::Proceso(){
	
}
template <typename dato>
dato Proceso<dato>::getNumerador(){
	return numerador;
}
template <typename dato>
dato Proceso<dato>::getDenominador(){
	return denominador;
}
template <typename dato>
void Proceso<dato>::setNumerador(dato newNumerador){
	numerador=newNumerador;
}
template <typename dato>
void Proceso<dato>::setDenominador(dato newDenominador){
	denominador=newDenominador;
}
template <typename dato>
void Proceso<dato>::imprimir(){
	printf("Numerador   %.2f ",numerador);
	printf("Denominador %.2f ",denominador);
	printf("\n");
}
