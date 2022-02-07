/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec 
				
	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.						
	FECHA DE CREACION:        05-02-2022 	
	FECHA DE MODIFICACION:    06-02-2022*/
#include "Matriz.h"
/**
 * @brief Retorna Matriz
 * 
 * @return int** 
 */
int **Matriz::getMatriz(void)
{
   return matriz;
}
/**
 * @brief Reasigna una matriz
 * 
 * @param matrix 
 */
void Matriz::setMatriz(int **matrix)
{
   matriz = matrix;
}
/**
 * @brief Contruye un nuevo objeto
 * 
 * @param _matriz 
 */
Matriz::Matriz(int **_matriz)
{
   this->matriz=_matriz;
}
/**
 * @brief Construye un nuevo objeto
 * 
 */
Matriz::Matriz(){	
}
