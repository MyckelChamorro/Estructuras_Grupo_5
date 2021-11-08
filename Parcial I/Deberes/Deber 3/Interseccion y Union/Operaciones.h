#pragma once
#include "Arreglo.cpp"
template<typename M>
class Operaciones
{
public:

	Operaciones()=default;
	M Interseccion(Arreglo<M> arr1, Arreglo<M> arr2,M n,M m);
	M Union(Arreglo<M> arr1, Arreglo<M> arr2);

private:
	Arreglo<M> arr1,arr2;

};


