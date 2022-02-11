#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

class Operaciones{
    public:
        Operaciones(){  
        }
        void comparacionEficiente();
        void comparacionDeficiente();
        void suma();
        void sumaElementos();
        void recorridos();
        void cicloWhile();
        void llenarVector();
        int getVueltas1();
        int getVueltas2();
    private:
        int array[8] = {1,2,3,4,5,6,7,8};
        int vueltas1 = 0;
        int vueltas2 = 0;
        int resultado = 0;
        vector<int> vec;   
};