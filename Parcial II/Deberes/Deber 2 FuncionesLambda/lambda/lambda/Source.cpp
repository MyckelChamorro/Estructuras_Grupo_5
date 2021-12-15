#include <iostream>
#include <vector>
#include <algorithm>

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Uso De Funciones Lambda o Anonimas

	FECHA DE CREACION:        10-12-2021
	FECHA DE MODIFICACION:    15-12-2021*/

using namespace std;

int main(int argc, char** argv) {
	vector<int> vect{ 1,2,3,4,5};
	int x = 2;
	int y = 3;

	for_each(vect.begin(), vect.end(), [x](int i) {
		cout << i * x << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [x,y](int i) {
		cout << i * x*y << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [=](int i) {
		cout << i * x * y << endl;
		});

	cout << "\n\n";

	for_each(vect.begin(), vect.end(), [&](int i) {
		++x;
		--y;
		cout << i * x * y << endl;
		});

	cout << "\n\n";

	sort(vect.begin(), vect.end(), [](int a, int b) {
		return a > b;
		});

	for_each(vect.begin(), vect.end(), [](int i) {
		cout << i << endl;
		});
	return 0;
}
