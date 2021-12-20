#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"
#include "Operaciones.cpp"
#include "Archivos.cpp"

/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Uso De Funciones Lambda o Anonimas 

	FECHA DE CREACION:        16-12-2021
	FECHA DE MODIFICACION:    20-12-2021*/

using namespace std;
void _mcm(long x, long y, long z);
void _MCD(int a, int b, int c);
int main(int argc, char** argv) {
	//DATOS
	int opcion;
	vector<int> vect{ 1,2,3,4,5 };
	int x = 2;
	int y = 3;
	Operaciones ope;
	do {
		opcion = menu();
		system("cls");
		switch (opcion) {
		case 1: {
			long x; long y; long z;
			cout << "CALCULO DEL MINIMO COMUN MULTIPLO (TRES NUMEROS)" << "\n\n";
			cout << "\nIngrese el primer numero: ";
			cin >> x;
			cout << "\nIngrese el segundo numero: ";
			cin >> y;
			cout << "\nIngrese el tercer numero: ";
			cin >> z;
			cout << "\nMinimo comun multiplo: " ;
			_mcm(x,y,z);
			
			break;
		}
		case 2: {
			int a, b, c;
			cout << "CALCULO DEL MAXIMO COMUN DIVISOR (TRES NUMEROS)" << "\n\n";
			cout << "\nIngrese el primer numero: ";
			cin >> a;
			cout << "\nIngrese el segundo numero: ";
			cin >> b;
			cout << "\nIngrese el tercer numero: ";
			cin >> c;
			cout << "\nMinimo comun multiplo: " ;
			_MCD(a,b,c);
		
			break;
		}
		case 3: {
			cout << "CALCULO DEL MINIMO COMUN MULTIPLO ('N' NUMEROS)" << "\n\n";
			Operaciones ope;
		    cout<<"\nMinimo comun multiplo: "<<ope.minimoComun(1,2,3,8,4,12)<<endl;
			break;
		}
		case 4: {
			cout << "CALCULO DEL MAXIMO COMUN DIVISOR ('N' NUMEROS)" << "\n\n";
			cout<<"\nMaximo comun Divisor es: "<<ope.maximoComun(3,9,15,12,21)<<endl;
			break;
		}
		case 5:{
			cout << "CALCULO DEL MINIMO COMUN MULTIPLO (desde un txt)" << "\n\n";
			Archivos ar;
			cout << "Los datos del archivo txt son:" <<endl;
			cout <<ar.ArchivoMCM()<<" es el MCM."<<endl;
			break;
		}
		case 6:{
			cout << "CALCULO DEL MAXIMO COMUN DIVISOR (desde un txt)" << "\n\n";
			Archivos ar;
			cout << "Los datos del archivo txt son:" <<endl;
			cout <<ar.ArchivoMCD()<<" es el MCM."<<endl;
			break;
		}
		case 0: {
			cout << "GRACIAS POR UTILIZARME :) BYE\n\n";
			opcion = 0;
			break;
		}
		default: {
			cout << "Ingrese un valor dentro del rango de las opciones por favor :(\n";
			break;
		}
		}
		system("pause");
	} while (opcion != 0);
	
	return 0;
}
///CALCULO MINIMO COMUN MULTIPLO LAMBDA
void _mcm(long x, long y, long z){
    auto _mcm = [&](long x, long y, long z) -> void {
				long mcm, max, i;
				max = x;
				if (y > max)
					max = y;
				if (z > max)
					max = z;
				mcm = 1;
				i = 2;
				while (i <= max)
				{
					if (x % i == 0 || y % i == 0 || z % i == 0)
					{
						if (x % i == 0)
							x = x / i;
						if (y % i == 0)
							y = y / i;
						if (z % i == 0)
							z = z / i;
						mcm = mcm * i;
						i = 1;
					}
					if (x % i == 0 || y % i == 0 || z % i == 0)
					{
						mcm = mcm * i;
						i = 1;
					}
					i++;
				}
				cout<<mcm<<"\n\n";
			};
    _mcm(x,y,z);
}
///CALCULO MAXIMO COMUN DIVISOR LAMBDA
	void _MCD(int a, int b, int c){
		auto _MCD = [&](int a,int b,int& c) -> void {
   		int d, i;
		d = 1;
		i = 1;
		while (i <= a && i <= b && i <= c) {
		if (a% i == 0 && b% i == 0 && c% i == 0)
		d = i;
		i ++;
}
		cout<<d<<"\n";
    };
    _MCD(a,b,c);
}