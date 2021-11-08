/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        31-10-2021
	FECHA DE MODIFICACION:    31-10-2021*/

#include <cstdio>
#include <iostream>

using namespace std;

char maxOfChar(char a, char b) {
    return (a > b ? a : b);
}

int maxOfInt(int a, int b) {
    return (a > b ? a : b);
}

template <typename T> T maxOf(T a, T b) {
    return (a > b ? a : b);
}

int main()
{
    char i = maxOfChar('e', 'z');
    int j = maxOfInt(9, 4);

    cout << "Max character between e and z is: " << i << endl;
    cout << "Max integer between 9 and 4 is: " << j << endl;

    char x = maxOf<char>('e', 'z');
    int y = maxOf<int>(9, 4);

    cout << "Max character between e and z using template is: " << x << endl;
    cout << "Max integer between 9 and 4 using template is: " << y << endl;

    return 0;
}
