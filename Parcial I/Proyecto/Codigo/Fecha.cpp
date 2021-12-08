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
#include "Fecha.h"
/**
 * @brief Construct a new Fecha:: Fecha object
 * 
 * @param _dia 
 * @param _mes 
 * @param _anio 
 */
Fecha::Fecha(int _dia,int _mes,int _anio){
    this->dia=_dia;
    this->mes=_mes;
    this->anio=_anio;
}
/**
 * @brief 
 * 
 * @param _dia 
 */
void Fecha::set_dia(int _dia){
    this->dia=_dia;
}
/**
 * @brief 
 * 
 * @return int 
 */
int Fecha::get_dia(){
    return dia;
}
/**
 * @brief 
 * 
 * @param _mes 
 */
void Fecha::set_mes(int _mes){
    this->mes=_mes;
}
/**
 * @brief 
 * 
 * @return int 
 */
int Fecha::get_mes(){
    return mes;
}
/**
 * @brief 
 * 
 * @param _anio 
 */
void Fecha::set_anio(int _anio){
    this->anio=_anio;
}
/**
 * @brief 
 * 
 * @return int 
 */
int Fecha::get_anio(){
    return anio;
}