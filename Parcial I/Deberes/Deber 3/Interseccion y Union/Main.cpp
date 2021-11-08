#pragma once
#include "Operaciones.cpp"
#include "Arreglo.h"
#include <iostream>
using namespace std;
int main() {
    Arreglo<int> a1, a2;
    int n, m;
    Operaciones<int> op;
    cout << "ingrese el tamano del primer arreglo: "; cin >> n;
    a1.Agregar(n);
    cout << "ingrese el tamano del segundo arreglo: "; cin >> m;
    a2.Agregar(m);
    op.Interseccion(a1, a2, a1.getLong(), a2.getLong());

   
        return 0;
  
   

}