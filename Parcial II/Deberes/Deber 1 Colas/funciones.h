#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

bool esEntero(string);
int escogerMaximo(int, int);
int generarTiempoLlegada(int);
int generarTiempoEspera(int, int);
int generarTiempoNoTrabaja(int, int);
int generarTiempoServicio();
int generarTiempoSalida(int, int, int);
int generarTiempoEntreLlegada(int, int);

bool esEntero(string linea){
	bool esEntero = true;
	int longitud = linea.size();
	
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		
		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	
	return esEntero;
}

int escogeMaximo(int numUno, int numDos){
	int maximo;
	
	if(numUno>numDos)
		maximo = numUno;
	else if(numUno<numDos)
		maximo = numDos;
	else if(numUno==numDos)
		maximo = numDos;
		
	return maximo;
} 

bool continuar(char mensaje[]){
	char ch;
	printf(mensaje);
	do{
		scanf("%c",&ch);
		ch = toupper(ch);
	}while(ch!='S'&&ch!='N');
	return (ch=='S'?true:false);
}

int generarTiempoLlegada(int numeroClientes){
	int llegada;
	llegada = 0;
	for(int i=0; i<numeroClientes; i++){
		llegada = llegada + (1 + (rand()%(25-1)));	
	}
}

int generarTiempoEspera(int salida, int llegada){
	return escogeMaximo(salida, llegada)-llegada;
}

generarTiempoNoTrabaja(int arrive, int salida){
	return escogeMaximo(arrive, salida)-salida;
}

int generarTiempoServicio(){
	return 1 + (rand()%(16-1));
}

int generarTiempoSalida(int llegada, int espera, int servicio){
	return +llegada + espera + servicio;
}
int generarTiempoEntresalida(int llegadaPrimero, int llegadaDespues){
	return llegadaDespues-llegadaPrimero;
}
