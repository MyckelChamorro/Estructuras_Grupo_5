/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

    AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                KARLA CAJAS - klcajas1@espe.edu.ec

    ENUNCIADO: REALIZAR UN ALGORITMO QUE RESUELVA EL CUADRO LATINO.
    FECHA DE CREACION:        05-02-2022
    FECHA DE MODIFICACION:    06-02-2022*/
#include <vector>
#include <iostream>
#include <windows.h>
#include "Menu.h"
#include "MenuOption.h"
#include <iomanip>
#include <sstream>
#include "Marquesina.h"
static void prueba();
int main()
{
    Marquesina marquesina("UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE  |  GRUPO 5: KARLA CAJAS RICARDO GRIJALVA");
    marquesina.iniciar();
    std::vector<MenuOption> menu_item
    {
        {1, "SUDOKU",prueba},
        {2, "8 REYNAS",prueba},
        {3, "PING PONG",prueba},
        {4, "SERPIENTE", prueba},
        {4, "TRES EN RAYA", prueba},
        {5, "SALIR",prueba }
    };
    Menu menu{ menu_item };
    menu.navigation();
   

}
static void prueba() {
    printf("\nhola mudo\n");
   
}
