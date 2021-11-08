/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

	AUTOR:    LIZBETH RECALDE - klcajas1@espe.edu.ec


	ENUNCIADO:Realizar un programa utilizando template.

	FECHA DE CREACION:        01-11-2021
	FECHA DE MODIFICACION:    01-11-2021*/

#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Coordinate {
    private:
        T x;
        T y;

    public:
        Coordinate(T x = 0, T y = 0);

        T getX() {
            return x;
        };

        T getY() {
            return y;
        }

        void setX(T x) {
            this->x = x;
        }

        void setY(T y) {
            this->y = y;
        }
};

template <class T>
Coordinate<T>::Coordinate(T x, T y) {
    this->x = x;
    this->y = y;
}

int main()
{
    Coordinate <int> coord1(2,1);
    Coordinate <float> coord2(1.5, 0.5);

    cout << "First coordinate of X is: " << coord1.getX() << endl;
    cout << "Second coordinate  of Y is: " << coord2.getY() << endl;

    return 0;
}
