/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase.				
				
	FECHA DE CREACION:        11-11-2021 	
	FECHA DE MODIFICACION:    11-11-2021*/
#include <iostream>
template<typename N> 
class Operacion{
	public:
	Operacion();
	void encerar(N *, N);
	void ingresar(N *, N);
	void imprimir(N *, N);
	void procesar(N *, N);
	void conjuntos(N *,N *,N d1,N d2);
	void conjuntosInter(N *,N *,N d1,N d2);
};
