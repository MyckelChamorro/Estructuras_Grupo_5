/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        02-11-2021
	FECHA DE MODIFICACION:    02-11-2021*/

#include <iostream>
template <class T>
class Tabla {
  public:
   Tabla(int nElem);
   ~Tabla();
   T& operator[](int indice) { return pT[indice]; }
   int NElementos() const { return nElementos; }

  private:
   T *pT;
   int nElementos;
};
