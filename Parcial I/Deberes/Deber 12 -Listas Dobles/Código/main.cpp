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
#include <iostream>
#include "Lista_Doble.cpp"
using namespace std;
int main(int argc, char** argv) {
	int num,n,posicion;
	ListaDobleEnlazada lst;
	printf("FUNCION INSERTAR \n");
	printf("Ingrese la cantidad de numeros que va ingresar-> ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Numero %d-> ",i+1);
		scanf("%d",&num);
		lst.insertar(num);
		num=0;	
	}
	printf("\n");
	lst.imprimirLista();
	printf("\n");
	printf("FUNCION INSERTAR POR LA COLA\n");
	printf("Ingrese el numero que va insertar en la cola de la lista-> ");
	scanf("%d",&num);
	lst.insertarCola(num);
	lst.imprimirLista();
	printf("\n");
	printf("\nFUNCION ANIADIR EN CUALQUIER POSICION DE LA LISTA\n");
	printf("Ingrese la posicion-> ");
	scanf("%d",&posicion);
	printf("Ingrese el numero-> ");
	scanf("%d",&num);
    lst.anadirMitad(posicion,num);
    printf("\n");
	lst.imprimirLista();
	printf("\nFUNCION BORRAR\n");
	printf("Ingrese el elemento a borrar-> ");
	scanf("%d",&num);
	lst.borrarNodoEspe(num);
	lst.imprimirLista();
	printf("\nFUNCION SUMAR ELEMENTOS\n");
	lst.suma();
	return 0;
}