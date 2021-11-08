#pragma once
#include <iostream>
template<typename T>
class Arreglo
{
private:
	T longitud;
	T arreglo[10];
public:
	
	Arreglo()=default;
	void Agregar(T n);
	void Imprimir(T n);

	
	T& getArreglo();
	/**
	 * @brief Function to setter the data
	 *
	 * @param
	 */
	void setArreglo(T);
	/**
	 * @brief Function to getter the data
	 *
	 * @param
	 */
	T& getLong();
	/**
	 * @brief Function to getter the result
	 *
	 * @param
	 */
	void setLong(T);
};

