/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: REALIZAR UN PROGRAMA QUE CALCULE LA OPERACION ESPECIFICADA EN CLASE Y EL MODELO REALIZADO LLEVARLO A CODIGO.				
				
	FECHA DE CREACION:        27-10-2021 	
	FECHA DE MODIFICACION:    04-11-2021*/
	
	#include <iostream>
#include"Operaciones.h"
template<typename funcion>
funcion Operaciones<funcion>::calculo(Proceso<funcion> ope,Proceso<funcion> ope1){
		float resultado;
		resultado=(((ope.getNumerador()*ope1.getDenominador())+(ope1.getNumerador()*ope.getDenominador()))/(ope.getDenominador()+ope1.getDenominador()));
		return resultado;
	
};
