/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        27-10-2021 	
	FECHA DE MODIFICACION:    28-10-2021*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"Functions.cpp"
int main(){
	float valor1,valor2;
	Operations<float> ope;
	cout<<"**********************************"<<endl;
	cout<<"\tSuma de Dos Numeros"<<endl;
	cout<<"Ingrese el primer digito -> ";
	cin>>valor1;
	ope.setValue_1(valor1);
	cout<<"Ingrese el segundo digito -> ";
	cin>>valor2;
	cout<<endl;
	ope.setValue_2(valor2);
	Functions<float> operation;
	cout<<"---------------------------------"<<endl;
	cout<<"\tRESULTADOS"<<endl;
	cout<<"SUMA = "<<"\t\t\t"<<operation.add(ope)<<endl;	
	
	cout<<"---------------------------------";
	return 0;
}
