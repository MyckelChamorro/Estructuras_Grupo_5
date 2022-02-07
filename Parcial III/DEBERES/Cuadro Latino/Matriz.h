/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.						
	FECHA DE CREACION:        05-02-2022 	
	FECHA DE MODIFICACION:    06-02-2022*/
#if !defined(__DiagramClassMatrizDinamica_Matriz_h)
#define __DiagramClassMatrizDinamica_Matriz_h
class Matriz
{
public:
   int **getMatriz(void);
   void setMatriz(int**);
   Matriz(int**);
   Matriz();
protected:
private:
   int **matriz;
};
#endif
