#include <iostream>
#include <stdlib.h>
#include "Operaciones.h"
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Uso De Funciones Lambda o Anonimas 

	FECHA DE CREACION:        16-12-2021
	FECHA DE MODIFICACION:    20-12-2021*/
template<class... Args>
auto Operaciones::maximoComun(Args... args){
		auto num=0.0;
	int n,mcd1,r,aux; 
	for(auto &num:{args...}){
		aux=num;
    do{
    r=mcd1%aux;
    mcd1=aux;
   aux=r;
  }while(r!=0);
	}
	return mcd1;
}
template<class... Args>
auto Operaciones::minimoComun(Args... args){
		auto num1=0.0;
    int residuo, mcm, i, n,aux;
    i=1;
    int producto;
	for(auto &num1:{args...}){
		aux=num1;
	 if (i == 1)
        {
            mcm = aux;
            producto = aux;
        }
        else
        {
            producto = mcm * aux;

            do
            {
                residuo = mcm % aux;
                mcm = aux;
                aux= residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
        i++;
    
}
return mcm;
}