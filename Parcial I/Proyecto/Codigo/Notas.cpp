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
#include "Notas.h"
/**
 * @brief Destroy the Notas:: Notas object
 * 
 */
Notas::~Notas(){
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia1(float arr1,float arr2,float arr3){
    this->materia1[0]=arr1;
    this->materia1[1]=arr2;
    this->materia1[2]=arr3;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia1(float arr1,int i){
    this->materia1[i]=arr1;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia1(){
    float *resultado= new float[3];
    resultado[0]= materia1[0];
    resultado[1]= materia1[1];
    resultado[2]= materia1[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia2(float arr1,float arr2,float arr3){
    this->materia2[0]=arr1;
    this->materia2[1]=arr2;
    this->materia2[2]=arr3;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia2(){
    float *resultado= new float[3];
    resultado[0]= materia2[0];
    resultado[1]= materia2[1];
    resultado[2]= materia2[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia2(float arr1,int i){
    this->materia2[i]=arr1;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia3(float arr1,float arr2,float arr3){
    this->materia3[0]=arr1;
    this->materia3[1]=arr2;
    this->materia3[2]=arr3;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia3(float arr1,int i){
    this->materia3[i]=arr1;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia3(){
    float *resultado= new float[3];
    resultado[0]= materia3[0];
    resultado[1]= materia3[1];
    resultado[2]= materia3[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia4(float arr1,float arr2,float arr3){
    this->materia4[0]=arr1;
    this->materia4[1]=arr2;
    this->materia4[2]=arr3;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia4(float arr1,int i){
    this->materia4[i]=arr1;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia4(){
   float *resultado= new float[3];
    resultado[0]= materia4[0];
    resultado[1]= materia4[1];
    resultado[2]= materia4[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia5(float arr1,float arr2,float arr3){
    this->materia5[0]=arr1;
    this->materia5[1]=arr2;
    this->materia5[2]=arr3;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia5(float arr1,int i){
    this->materia5[i]=arr1;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia5(){
    float *resultado= new float[3];
    resultado[0]= materia1[0];
    resultado[1]= materia1[1];
    resultado[2]= materia1[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param arr2 
 * @param arr3 
 */
void Notas::set_materia6(float arr1,float arr2,float arr3){
    this->materia6[0]=arr1;
    this->materia6[1]=arr2;
    this->materia6[2]=arr3;
}
/**
 * @brief 
 * 
 * @param arr1 
 * @param i 
 */
void Notas::set_materia6(float arr1,int i){
    this->materia6[i]=arr1;
}
/**
 * @brief 
 * 
 * @return float* 
 */
float *Notas::get_materia6(){
    float *resultado= new float[3];
    resultado[0]= materia6[0];
    resultado[1]= materia6[1];
    resultado[2]= materia6[2];
    return resultado;
}
/**
 * @brief 
 * 
 * @param _CI 
 */
void Notas::set_CI(string _CI){
    this->CI=_CI;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Notas::get_CI(){
    return CI;
}