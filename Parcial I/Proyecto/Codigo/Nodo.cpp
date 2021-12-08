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
#include "Nodo.h"
/**
 * @brief Construct a new Nodo:: Nodo object
 * 
 * @param _persona 
 * @param sig 
 */
Nodo::Nodo(Persona _persona, Nodo *sig=NULL){
				this->persona=_persona;
				this->siguiente=sig;
}
/**
 * @brief Construct a new Nodo:: Nodo object
 * 
 */
Nodo::Nodo(){
}	
/**
 * @brief Construct a new Nodo:: Nodo object
 * 
 * @param _registro 
 * @param sig 
 */
Nodo::Nodo(Registro _registro, Nodo *sig=NULL){
				this->registro=_registro;
				this->sig=sig;
}
/**
 * @brief 
 * 
 * @param nodo 
 */
void Nodo::setNodo(Nodo *nodo){
		this->siguiente=nodo;
}
/**
 * @brief 
 * 
 * @param _persona 
 */
void Nodo::setPersona(Persona _persona){
		this->persona=_persona;
}
/**
 * @brief 
 * 
 * @return Persona 
 */
Persona Nodo::getPersona(){
		return this->persona;
}
/**
 * @brief 
 * 
 * @return Nodo* 
 */
Nodo *Nodo::getNodo(){
		return this->siguiente;
}
/**
 * @brief 
 * 
 * @param nodo 
 */
void Nodo::setNodo1(Nodo *nodo){
		this->sig=nodo;
}
/**
 * @brief 
 * 
 * @param _registro 
 */
void Nodo::setRegistro(Registro _registro){
		this->registro=_registro;
}
/**
 * @brief 
 * 
 * @return Registro 
 */
Registro Nodo::getRegistro(){
		return this->registro;
}
/**
 * @brief 
 * 
 * @return Nodo* 
 */
Nodo *Nodo::getNodo1(){
		return this->sig;
}