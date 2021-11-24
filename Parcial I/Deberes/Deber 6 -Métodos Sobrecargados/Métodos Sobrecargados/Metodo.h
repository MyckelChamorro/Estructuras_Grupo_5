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
template <typename T>
class Caja{
	public:
		Caja();
		Caja(T);
		Caja(T,T);
		Caja(T,T,T);
		void setAncho(T);
		void setAlto(T);
		void setProfundidad(T);
		T getAncho();
		T getAlto();
		T getProfundidad();
		void mostrarMedidas();
	private:
		T ancho;
		T alto;
		T profundidad;
};
