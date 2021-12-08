/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        20-11-2021
	FECHA DE MODIFICACION:    07-12-2021*/
#include "NodoM.h"
/**
 * @brief Construct a new Nodo M:: Nodo M object
 * 
 * @param _materia 
 * @param sig 
 */
NodoM::NodoM(Materia _materia, NodoM *sig=NULL){
				this->materia=_materia;
				this->siguiente=sig;
}
/**
 * @brief Construct a new Nodo M:: Nodo M object
 * 
 */
NodoM::NodoM(){
}	
/**
 * @brief 
 * 
 * @param nodo 
 */
void NodoM::setNodo(NodoM *nodo){
		this->siguiente=nodo;
}
/**
 * @brief 
 * 
 * @param _materia 
 */
void NodoM::setMateria(Materia _materia){
		this->materia=_materia;
}
/**
 * @brief 
 * 
 * @return Materia 
 */
Materia NodoM::getMateria(){
		return this->materia;
}
/**
 * @brief 
 * 
 * @return NodoM* 
 */
NodoM *NodoM::getNodo(){
		return this->siguiente;
}