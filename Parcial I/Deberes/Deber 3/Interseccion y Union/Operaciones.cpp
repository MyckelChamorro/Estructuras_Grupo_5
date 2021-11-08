#pragma once
#include "Operaciones.h"
#include <iostream>
using namespace std;
template<typename M>
M Operaciones<M>::Interseccion(Arreglo<M> arr1, Arreglo<M> arr2, M n,M m ) {
    int arr3[50];
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1.getArreglo[i] == arr2.getArreglo[j]) {
                arr3[a] = arr1.getArreglo[i];
                a++;
            }
        }
    }
    cout << "interseccion: \n";
    for (int i = 0; i < a; i++) {
        cout << arr3[i] << endl;
    }
}