/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.						
	FECHA DE CREACION:        05-02-2022 	
	FECHA DE MODIFICACION:    06-02-2022*/
#if !defined(__DiagramClassMatrizDinamica_Operaciones_h)
#define __DiagramClassMatrizDinamica_Operaciones_h
class Operaciones
{
public:
   int **segmentar(int);
   void encerar(int **,int);
   void imprimir(int**, int);
   void procesar(int**,int);
   Operaciones();
};
#endif
