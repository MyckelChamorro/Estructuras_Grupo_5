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
#include "Profesor.h"
/**
 * @brief Construct a new Profesor:: Profesor object
 * 
 * @param _pnombre 
 * @param _apellido 
 * @param _CI 
 * @param _ID 
 */
Profesor::Profesor(string _pnombre,string _apellido, string _CI, string _ID){
    this->Pnombre = _pnombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->ID = _ID;
}
/**
 * @brief 
 * 
 * @param _pnombre 
 */
void Profesor::set_Pnombre(string _pnombre){
    this->Pnombre = _pnombre;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Profesor::get_Pnombre(){
    return Pnombre;
}
/**
 * @brief 
 * 
 * @param _apellido 
 */
void Profesor::set_apellido(string _apellido){
    this->apellido = _apellido;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Profesor::get_apellido(){
    return apellido;
}
/**
 * @brief 
 * 
 * @param _CI 
 */
void Profesor::set_CI(string _CI){
    this->CI = _CI;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Profesor::get_CI(){
    return CI;
}
/**
 * @brief 
 * 
 * @param _ID 
 */
void Profesor::set_ID(string _ID){
    this->ID = _ID;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Profesor::get_ID(){
    return ID;
}
