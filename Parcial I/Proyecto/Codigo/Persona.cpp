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
#include "Persona.h"
/**
 * @brief Construct a new Persona:: Persona object
 * 
 * @param _pnombre 
 * @param _snombre 
 * @param _apellido 
 * @param _CI 
 * @param _edad 
 * @param _correo 
 * @param _telefono 
 * @param _ID 
 */
Persona::Persona(string _pnombre,string _snombre, string _apellido, string _CI, int _edad, string _correo, string _telefono,string _ID){
    this->Pnombre = _pnombre;
    this->Snombre = _snombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->CI = _ID;
    this->edad = _edad;
    this->correo = _correo;
    this->telefono = _telefono;
}
/**
 * @brief 
 * 
 * @param _pnombre 
 */
void Persona::set_Pnombre(string _pnombre){
    this->Pnombre = _pnombre;
}
/**
 * @brief 
 * 
 * @param _snombre 
 */
void Persona::set_Snombre(string _snombre){
    this->Snombre = _snombre;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_Pnombre(){
    return Pnombre;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_Snombre(){
    return Snombre;
}
/**
 * @brief 
 * 
 * @param _apellido 
 */
void Persona::set_apellido(string _apellido){
    this->apellido = _apellido;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_apellido(){
    return apellido;
}
/**
 * @brief 
 * 
 * @param _CI 
 */
void Persona::set_CI(string _CI){
    this->CI = _CI;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_CI(){
    return CI;
}
/**
 * @brief 
 * 
 * @param _ID 
 */
void Persona::set_ID(string _ID){
    this->ID = _ID;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_ID(){
    return ID;
}
/**
 * @brief 
 * 
 * @param _edad 
 */
void Persona::set_edad(int _edad){
    this->edad = _edad;
}
/**
 * @brief 
 * 
 * @return int 
 */
int Persona::get_edad(){
    return edad;
}
/**
 * @brief 
 * 
 * @param _correo 
 */
void Persona::set_correo(string _correo){
    this->correo = _correo;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_correo(){
    return this->correo;
}
/**
 * @brief 
 * 
 * @param _telefono 
 */
void Persona::set_telefono(string _telefono){
    this->telefono = _telefono;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Persona::get_telefono(){
    return telefono;
}