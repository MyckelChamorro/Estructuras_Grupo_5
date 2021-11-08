/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO: SOBRECARGA DE OPERADORES 2 POR INTEGRANTE.

	FECHA DE CREACION:        06-11-2021
	FECHA DE MODIFICACION:    08-11-2021*/

#pragma once
/**
* this class defines objects that contain three values
*
* @version: 20/05/2021/A
*/
template <typename T>
class Data{
	private:
	   T data;
	   T value;
	   T result;
	public:
	   Data(T,T);
	   Data(T);
	   Data()= default;
	   ~Data();
	   /**
		* @brief Function to getter the data
		*
		* @param 
		*/
	   T& getData();
	   /**
		* @brief Function to setter the data
		*
		* @param 
		*/
	   void setData(T);
	   /**
		* @brief Function to getter the data
		*
		* @param 
		*/
	   T& getValue();
	   /**
		* @brief Function to getter the result
		*
		* @param 
		*/
	   T& getResult();
	   /**
		* @brief Function to setter the data
		*
		* @param 
		*/
	   void setResult(T);
};



