#include "Operaciones.h"

/*La solucion de vueltas que se realizara al array aqui es n^2

*/
void Operaciones::comparacionDeficiente(){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            vueltas1++;//cantidad de veces que se recorre y compara el array 
        }
        
    }
    
}

/*muchas de las veces no se necesita comparar un numero consigo mismo por ejemplo el 1 con el 1
 o comparar los mismos numeros ya comparados anteriormente por ejemplo el 2 con el 1 o el 1 con el 2
 para ello
 La solucion matematica aqui de cuantas vueltas se realizara al array es (n^2/2)-n
*/
void Operaciones::comparacionEficiente(){
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            vueltas2++;//cantidad de veces que se recorre y compara el array 
        }
        
    }
}

void Operaciones::suma(){
    resultado = vec.size()*8;
    resultado += 3;
    cout << resultado << endl;
}

void Operaciones::sumaElementos(){
    for (int i = 0; i < vec.size(); i++)
    {
        resultado += i;
    }
    for (int j = 0; j < vec.size(); j++)
    {
        resultado *= 5;
        resultado /= 2;
    }
    cout << resultado << endl;
}

void Operaciones::recorridos(){
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            resultado = i*7;
            resultado /= 2;
        }
        
    }
    cout << resultado << endl;
}

void Operaciones::cicloWhile(){
    bool encontrado = false;
    int numero_a_buscar = 1;
    int i = 0;
    while (encontrado == false)
    {
        if (vec[i] == numero_a_buscar)
        {
            cout << "El numero coincidio en la posicion "<< i << "." << endl;
            encontrado = true;
        }
        i++;
    }
    
}

void Operaciones::llenarVector(){
    int aux = 1;
    for (int i = 0; i < 8; i++)
    {
        vec.push_back(aux);
        aux++;
    }
}

int Operaciones::getVueltas1() {
      return vueltas1;
}

int Operaciones::getVueltas2() {
      return vueltas2;
}