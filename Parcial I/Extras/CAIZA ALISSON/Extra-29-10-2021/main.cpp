#include <iostream>

/* Nombre: Alisson Caiza
Fecha de creacion: 29/10/2021
Fecha de modificacion: 29/10/2021
 */

using namespace std;
#include<vector>
//funcion template que devuelve el mayor elemento de un vector//
template <class T>
 T maximo(const vector<T> &a)
{
 T max=a[0];
for (int i=1;i<a.size();i++)
if (a[i]>max)
 max=a[i];
return max;
}

