/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        1-11-2021 	
	FECHA DE MODIFICACION:    1-11-2021*/
#include"Operations.cpp"

template<typename funcion>
class Functions{
	private:
		Operations<funcion> ope;
	public:			
		funcion factorial(Operations<funcion>);
};
