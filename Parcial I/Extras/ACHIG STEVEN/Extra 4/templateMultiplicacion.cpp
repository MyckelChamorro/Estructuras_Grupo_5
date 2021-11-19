#include <iostream>

using namespace std;

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * PROGRAMA PARA MULTIPLICAR
 * Autor: Achig Toapanta Steven Jossue
 * Fecha de creacion: 01/11/2021
 * Fecha de Modificacion: 01/11/2021
 * Version: 1.0
 * Estructura de Datos, NRC: 7166
*/

	template <class T>
class Multiplicacion{
	public:
		Multiplicacion(T, T);
		T multiplicar();
	private:
		T n1;
		T n2;
};

template <class T>
Multiplicacion<T>::Multiplicacion(T n, T m){
	n1 = n;
	n2 = m;
}

template <class T>
T Multiplicacion<T>::multiplicar(){
	return n1*n2;
}

int main(int argc, char** argv) {
	Multiplicacion<int> mul(4, 6);
	cout<<mul.multiplicar();
	
	return 0;
}
