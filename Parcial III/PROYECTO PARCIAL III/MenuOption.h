/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				KARLA CAJAS - klcajas1@espe.edu.ec

	ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.
	FECHA DE CREACION:        05-02-2022
	FECHA DE MODIFICACION:    06-02-2022*/
#pragma once
#include <iostream>
typedef void (*Menu_Processing_Function_Ptr)();
class MenuOption
{

public:
	/**
	 * @brief Construct a new Menu Option object
	 *
	 * @param int
	 */
	MenuOption(unsigned int, const std::string, Menu_Processing_Function_Ptr);

	/**
	 * @brief Get the number option object
	 *
	 * @return unsigned int
	 */
	unsigned int get_number_option_() { return this->number_option_; };

	/**
	 * @brief Get the title object
	 *
	 * @return std::string
	 */
	std::string get_title_() { return this->title_; };

	/**
	 * @brief Get the fuction object
	 *
	 * @return Menu_Processing_Function_Ptr
	 */
	Menu_Processing_Function_Ptr get_fuction() { return this->p_processing_function_; };
private:
	unsigned int number_option_;
	const std::string title_;
	Menu_Processing_Function_Ptr p_processing_function_;
};

