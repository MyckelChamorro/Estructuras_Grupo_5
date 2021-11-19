#include <iostream>

using namespace std;

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * PROGRAMA PARA ELEVAR UN NUMERO AL CUADRADO
 * Autor: Achig Toapanta Steven Jossue
 * Fecha de creacion: 02/11/2021
 * Fecha de Modificacion: 02/11/2021
 * Version: 1.0
 * Estructura de Datos, NRC: 7166
*/

	template <class T>
class Potencia{
	public:
		Potencia(T, T);
		T elevar();
	private:
		T n1;
		T n2;
};

template <class T>
Potencia<T>::Potencia(T n, T m){
	n1 = n;
	n2 = m;
}

template <class T>
T Potencia<T>::elevar(){
	return n1*n1;
}

int main(int argc, char** argv) {
	Potencia<int> mul(6, 8);
	cout<<mul.elevar();
	
	return 0;
}
