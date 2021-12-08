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
#include "Registro.h"
/**
 * @brief Construct a new Registro:: Registro object
 * 
 * @param _CI 
 * @param _materia1 
 * @param _materia2 
 * @param _materia3 
 * @param _materia4 
 * @param _materia5 
 * @param _materia6 
 */
Registro::Registro(string _CI,string _materia1, string _materia2, string _materia3,string _materia4, string _materia5,string _materia6){
    this->CI = _CI;
    this->materia1 = _materia1;
    this->materia2 = _materia2;
    this->materia3 = _materia3;
    this->materia4 = _materia4;
    this->materia5 = _materia5;
    this->materia6 = _materia6;
}
/**
 * @brief 
 * 
 * @param _CI 
 */
void Registro::set_CI(string _CI){
    this->CI = _CI;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_CI(){
    return CI;
}
/**
 * @brief 
 * 
 * @param _materia1 
 */
void Registro::set_Materia1(string _materia1){
    this->materia1 = _materia1;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia1(){
    return materia1;
}
/**
 * @brief 
 * 
 * @param _materia2 
 */
void Registro::set_Materia2(string _materia2){
    this->materia2 = _materia2;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia2(){
    return materia2;
}
/**
 * @brief 
 * 
 * @param _materia3 
 */
void Registro::set_Materia3(string _materia3){
    this->materia3 = _materia3;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia3(){
    return materia3;
}
/**
 * @brief 
 * 
 * @param _materia4 
 */
void Registro::set_Materia4(string _materia4){
    this->materia4 = _materia4;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia4(){
    return materia4;
}
/**
 * @brief 
 * 
 * @param _materia5 
 */
void Registro::set_Materia5(string _materia5){
    this->materia5 = _materia5;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia5(){
    return materia5;
}
/**
 * @brief 
 * 
 * @param _materia6 
 */
void Registro::set_Materia6(string _materia6){
    this->materia6 = _materia6;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Registro::get_Materia6(){
    return materia6;
}