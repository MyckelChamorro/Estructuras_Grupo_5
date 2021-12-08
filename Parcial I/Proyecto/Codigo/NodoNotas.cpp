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
#include "NodoNotas.h"
/**
 * @brief Construct a new Nodo Notas:: Nodo Notas object
 * 
 * @param _notas 
 * @param sig 
 */
NodoNotas::NodoNotas(Notas _notas, NodoNotas *sig=NULL){
				this->notas=_notas;
				this->siguiente=sig;
}
/**
 * @brief Construct a new Nodo Notas:: Nodo Notas object
 * 
 */
NodoNotas::NodoNotas(){
}	
/**
 * @brief Destroy the Nodo Notas:: Nodo Notas object
 * 
 */
 NodoNotas::~NodoNotas(){
}	
/**
 * @brief 
 * 
 * @param nodo 
 */
	void NodoNotas::setNodo(NodoNotas *nodo){
		this->siguiente=nodo;
	}
/**
 * @brief 
 * 
 * @param _notas 
 */
	void NodoNotas::setNotas(Notas _notas){
		this->notas=_notas;
    }
/**
 * @brief 
 * 
 * @return Notas 
 */
	Notas NodoNotas::getNotas(){
		return this->notas;
	}
/**
 * @brief 
 * 
 * @return NodoNotas* 
 */
	NodoNotas *NodoNotas::getNodo(){
		return this->siguiente;
	}