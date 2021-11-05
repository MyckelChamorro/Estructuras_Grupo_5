/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTOR:  	CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				
	
	ENUNCIADO: Realizar un ejercicio con template				
				
	FECHA DE CREACION:       02-10-2021 	
	FECHA DE MODIFICACION:    04-10-2021*/
	
	#include

template void permutar(S& a, S& b);

template void ordenar (T *vector, int num);

 

void main(void)

{

float mivector[10]={2,4,6,8,1,3,5,7,9,0};

char cadena[10]="efghBACDI";

ordenar(mivector,8);

ordenar(cadena,10);

for(i=0;i<10;i++)cout<

cout<<

}

 

template void permutar(S &a, S &b)

{

S temp;

temp = a;

a = b;

b = temp;

}

 

template void ordenar (T *vector, int num)

{

int i,j;

for(i=0;i

for(j=i+1;j

if(vector[i]

}
