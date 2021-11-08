/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        02-11-2021
	FECHA DE MODIFICACION:    02-11-2021*/


#include <iostream>
#include "Tabla.cpp"

using namespace std;

const int nElementos = 5;

int main() {
   Tabla<int> TablaInt(nElementos);
   Tabla<float> TablaFloat(nElementos);

   for(int i = 0; i < nElementos; i++)
      TablaInt[i] = nElementos-i;

   for(int i = 0; i < nElementos; i++)
      TablaFloat[i] = 1/(1+i);

   for(int i = 0; i < nElementos; i++) {
      cout << "TablaInt[" << i << "] = "
           << TablaInt[i] << endl;
      cout << "TablaFloat[" << i << "] = "
           << TablaFloat[i] << endl;
   }

   return 0;
}
