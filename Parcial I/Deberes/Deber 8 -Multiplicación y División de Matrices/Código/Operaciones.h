/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				
	
	ENUNCIADO: Dividir en clases y utilizar templates en el ejercicio hecho en clase, ademas aumentar
			   la operacion de potenciacion.				
				
	FECHA DE CREACION:        14-11-2021 	
	FECHA DE MODIFICACION:    14-11-2021*/
	template<typename A>
class Operaciones
{
public:
   int **segmentar(A);
   void encerar(A **,A);
   void procesar(A **, A **,A **, A);
   void ingresar(A **, A);
   void imprimir(A **, A);
   void potencia(A **, A **,A **, A, A);
   void autollenado(A **, A **, A);
   Operaciones();
   //~Operaciones();
};
