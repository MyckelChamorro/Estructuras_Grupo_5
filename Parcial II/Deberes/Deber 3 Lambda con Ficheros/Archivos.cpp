#include "Archivos.h"
#include <fstream>
#include <algorithm>
#include <sstream>
#include <vector>
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
int Archivos::ArchivoMCM(){
    int i=0;
    ifstream archivo1; 
    int valor;
    archivo1.open("numeros.txt",ios::in);
     if(archivo1.fail()){
        cout<<"No se encuentra el archivo"<<endl;
    }else{
    vector<int> datos;
    while(archivo1>>valor){
    	cout<<valor<<endl;
    	datos.push_back(valor);
    }
	cout<<"---------------"<<endl;
    int residuo, mcm, i, n,aux;
    i=1;
    int producto;
    for_each(datos.begin(),datos.end(),[&](int num){ 
    aux=num;
	 if (i == 1)
        {
            mcm = aux;
            producto = aux;
        }
        else
        {
            producto = mcm * aux;

            do
            {
                residuo = mcm % aux;
                mcm = aux;
                aux= residuo;
            } while (residuo != 0);

            mcm = producto / mcm;
        }
        i++;
	});
	return mcm;
    }
    archivo1.close();
    
}

int Archivos::ArchivoMCD(){
	int i=0;
    ifstream archivo1; 
    int valor;
    archivo1.open("numeros.txt",ios::in);
     if(archivo1.fail()){
        cout<<"No se encuentra el archivo"<<endl;
    }else{
    vector<int> datos;
    while(archivo1>>valor){
    	cout<<valor<<endl;
    	datos.push_back(valor);
    }
	cout<<"---------------"<<endl;
    int n,mcd1,r,aux; 
    for_each(datos.begin(),datos.end(),[&](int num){ 
    aux=num;
	 do{
    r=mcd1%aux;
    mcd1=aux;
   aux=r;
  }while(r!=0);
	});
		return mcd1;
    }
    archivo1.close();
    
	
}