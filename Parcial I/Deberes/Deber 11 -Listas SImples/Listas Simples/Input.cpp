/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE

    AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALISSON CAIZA - alcaiza3@espe.edu.ec
                LIZBETH RECALDE - klcajas1@espe.edu.ec
                STEVE ACHIG - sjachig1@espe.edu.ec


    ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.

    FECHA DE CREACION:        21-11-2021
    FECHA DE MODIFICACION:    21-11-2021*/

#include "Input.h"
#include <conio.h>
#include <sstream> 

using namespace std;

string Input::text_input(string message) {
    string text = "";
    char letter;

    cout << "\n\t" << message << "\n\t";
    letter = _getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48) {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}

int Input::number_input(string message) {
    string num = "";
    char dig;
    int numero;

    cout << "\n\t" << message << "\n\t";
    dig = _getch();
    while (dig != 13) {

        if (dig < 58 && dig > 47) {
            num.push_back(dig);
            cout << dig;
        }
        dig = _getch();
    }
    istringstream(num) >> numero;
    return numero;
}
