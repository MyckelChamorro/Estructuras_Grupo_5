/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        29-10-2021
	FECHA DE MODIFICACION:    29-10-2021*/

#include <iostream>

using namespace std;

template <class P>
P valorAbsolutoDeUnNumero(P numero);

int main()
{
   int entero          = -323;
   long largo          = -838237237;
   float real          = -3.1454;
   double realDoble    = -0.232352;

   cout<<valorAbsolutoDeUnNumero(entero)<<endl;
   cout<<valorAbsolutoDeUnNumero(largo)<<endl;
   cout<<valorAbsolutoDeUnNumero(real)<<endl;
   cout<<valorAbsolutoDeUnNumero(realDoble)<<endl;

    return 0;
}

template <class P>
P valorAbsolutoDeUnNumero(P numero){
return (numero < 0)? -numero : numero;
}
