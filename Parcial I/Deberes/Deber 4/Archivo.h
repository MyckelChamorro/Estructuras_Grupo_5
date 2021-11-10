#pragma once
#include<fstream>
#include<stdlib.h>

template<typename A>
class Archivo
{
public:
	Archivo()=default;

	int* Lectura(A dir);
	A& getDireccion();
	void setDireccion(A dir);

private:
	A direccion;

};

