/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
	INGENIERA DE SOFTWARE

	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec


	ENUNCIADO: Crear un escolastico con listas y archivos txt.

	FECHA DE CREACION:        20-11-2021
	FECHA DE MODIFICACION:    07-12-2021*/
#include "Validar.h"
#include <conio.h>
#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 * @param msj 
 * @param dim 
 * @param espacio 
 * @return string 
 */
string Validar::validarLetras(string msj,int dim, bool espacio){
    char dato[dim];
	int i;
    char tecla;
    cout<<msj;
    i = 0;
    dato[0] = '\0';
    do{
        tecla = getch ();
        if(i<dim){
        	if ( i > 0 && tecla == 8 )
        {
            cout<<"\b \b";
            dato[--i] = '\0';
        }
        else{
            if(espacio == false){
                if ( (tecla >= 65 && tecla <= 95)  || 
                 (tecla >= 97 && tecla <= 122) && 
                  tecla != 32 )
                {
                cout<<tecla;
                dato[i++] = tecla;
                }
            }else{
                if ( (tecla >= 65 && tecla <= 95)  || 
                 (tecla >= 97 && tecla <= 122) || 
                  tecla == 32 )
                {
                cout<<tecla;
                dato[i++] = tecla;
                }
            }
        }	
		}	
    } while ((tecla != 13 || dato[0] == '\0'));
    dato[i] = '\0';
	string retorno(dato);
    return retorno;
}
/**
 * @brief 
 * 
 * @param msj 
 * @param dim 
 * @return string 
 */
string Validar::validarNumeros(string msj,int dim){
	char dato[dim];
	int i;
    char tecla;
    cout<<msj;
    i = 0;
    dato[0] = '\0';
    do
    {
        tecla = getch ();
        if ( i > 0 && tecla == 8 ){
            cout<<"\b \b";
            dato[--i] = '\0';
        }else{
	        if(i<dim){
				if ( (tecla >= 48 && tecla <= 57)){
	                cout<<tecla;
	                dato[i++] = tecla;
	            }
	        }
		}	
    } while ((tecla != 13 || dato[0] == '\0'));
    dato[i] = '\0';
    string retorno(dato);
    return retorno;
}
/**
 * @brief 
 * 
 * @return string 
 */
string Validar::validarCedula(){
	bool verificador;
	string cedula;
	do{
        cedula = validarNumeros("cedula: ",10);
        char *cedulaAux = (char*)cedula.c_str();
        int *numeros = new int[10];
        for(int i=0;i<10;i++){
            *(numeros+i) = *(cedulaAux+i) - 48;
        }
        int impares=0,pares=0,res;
        int suma=0,resul;
        for(int i=0;i<9;i+=2){
            if((*(numeros+i) * 2) > 9){
                (*(numeros+i))*=2;
                do{
                    res = (*(numeros+i))/10;
                    (*(numeros+i)) = (*(numeros+i))%10;
                    impares += (*(numeros+i));
                    (*(numeros+i)) = res;
                }while((*(numeros+i)) != 0);
            }
            else{
            impares += ((*(numeros+i)) * 2);
            }
        }
        for(int i=1;i<9;i+=2){
            pares += (*(numeros+i));
        }
        suma = impares + pares;
        resul = (suma/10 + 1) * 10;
        resul -= suma;
        if((*(numeros+9)) == 0){
            (*(numeros+9)) = 10;
            if((*(numeros+9)) == resul){
                verificador = true;
            }
        }
        else{
            if(resul == (*(numeros+9))){
                verificador = true;
            }
            else{
                verificador = false;
                cout<<endl;
            }
        }
    }while(!verificador);
    return cedula;
}
/**
 * @brief 
 * 
 * @param numero 
 * @return true 
 * @return false 
 */
bool Validar::validarFloat(string const& numero){
bool toReturn = false;
  try
  {
    std::size_t pos = 0;
    std::stof(numero,&pos);
    toReturn = ( pos == numero.length() );
  }
  catch(std::exception const&)
  {
  }
  return toReturn;
}