/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE         
	AUTORES:    RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
	ENUNCIADO: EXTRA.							
	FECHA DE CREACION:        2-11-2021 	
	FECHA DE MODIFICACION:    2-11-2021*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include"Functions.cpp"
int main(){
	float valor1,valor2;
	Operations<float> ope;
	cout<<"**********************************"<<endl;
	cout<<"\tConversion de Monedas"<<endl;
	cout<<"Ingrese una cantidad en Grados Centigrados -> ";
	cin>>valor1;
	ope.setValue_1(valor1);
	Functions<float> operation;
	cout<<"---------------------------------"<<endl;
	cout<<"\tRESULTADO"<<endl;
	cout<<" "<<"\t\t"<<operation.conversionUnidades(ope)<<endl;	
	cout<<"---------------------------------";
	return 0;
}
