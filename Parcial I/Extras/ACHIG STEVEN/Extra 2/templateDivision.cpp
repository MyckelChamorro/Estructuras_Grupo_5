#include <iostream>

using namespace std;

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * PROGRAMA PARA DIVIR
 * Autor: Achig Toapanta Steven Jossue
 * Fecha de creacion: 30/10/2021
 * Fecha de Modificacion: 30/10/2021
 * Version: 1.0
 * Estructura de Datos, NRC: 7166
*/

template <class T>
class suma{
	public:
		suma(T, T);
		T sumar();
	private:
		T n1;
		T n2;
};

template <class T>
suma<T>::suma(T n, T m){
	n1 = n;
	n2 = m;
}

template <class T>
T suma<T>::sumar(){
	return n1/n2;
}

int main(int argc, char** argv) {
	suma<float> sum(4.5, 6.3);
	cout<<sum.sumar();
	
	return 0;
}