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
#include "Materia.h"
/**
 * @brief Construct a new Materia:: Materia object
 * 
 * @param nrc 
 * @param nombre 
 * @param prof 
 */
Materia::Materia(string nrc,string nombre,Profesor prof){
    this->NRC=nrc;
    this->Nombre=nombre;
    this->profe=prof;
}
/**
 * @brief 
 * 
 * @param _NRC 
 */
void Materia::set_NRC(string _NRC){
    this->NRC = _NRC;
}
/**
 * @brief 
 * 
 * @param _Nombre 
 */
void Materia::set_Nombre(string _Nombre){
    this->Nombre = _Nombre;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Materia::get_NRC(){
    return NRC;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Materia::get_Nombre(){
    return Nombre;
}
/**
 * @brief 
 * 
 * @param prof 
 */
void Materia::set_profe(Profesor prof){
    this->profe=prof;
}
/**
 * @brief 
 * 
 * @return Profesor 
 */
Profesor Materia::get_profe(){
    return profe;
}


