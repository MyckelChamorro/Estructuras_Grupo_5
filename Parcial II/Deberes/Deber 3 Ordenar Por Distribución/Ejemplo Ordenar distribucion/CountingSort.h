#pragma once
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <ctime>
#include "Ordenamiento.h"

using namespace std;
class CountingSort : public Ordenamiento {
public:
	void ordenar(int* vector, int tam) {
		int salida[tam + 1];
		int max = rangoMaximo(vector, tam);
		int contador[max + 1]; //crear arreglo contador (max+1 número de elementos)
		encerar(contador, max + 1);
		for (int i = 0; i < tam; i++) {
			contador[vector[i]]++; //aumentar el contador de números en el arreglo de contador
		}
		for (int i = 1; i <= max; i++) {
			contador[i] += contador[i - 1]; //encontrar la frecuencia con la que se repiten en el arreglo
		}
		for (int i = tam - 1; i >= 0; i--) {
			salida[contador[vector[i]] - 1] = vector[i];
			contador[vector[i]] --; //decremento de los contadores de los mismos numeros
		}
		for (int i = 0; i < tam; i++) {
			vector[i] = salida[i]; //actualizar el arreglo enviado por parámetro
		}
	}
	void generar(int* vector, int tam) {
		srand(time(NULL));
		for (int i = 0; i < tam; i++) {
			*(vector + i) = rand() % (10 - 1 + 1) + 1;
		}
	}
	int rangoMaximo(int* vector, int tam) {
		int max = *(vector + 0);
		for (int i = 1; i < tam; i++) {
			if (*(vector + i) > max)
				max = *(vector + i);
		}
		return max;
	}
	void imprimir(int* vector, int tam) {
		for (int i = 0; i < tam; i++)
			cout << *(vector + i) << " ";
	}
	void encerar(int* vector, int tam) {
		for (int i = 0; i < tam; i++) {
			*(vector + i) = 0;
		}
	}
};
