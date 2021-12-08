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
#include "ListadoRegistro.h"
#include<fstream>
#include <sstream>
/**
 * @brief 
 * 
 * @param registro 
 */
void ListadoRegistro::agregarArchivo(Registro registro){
    ofstream archivo;
    archivo.open("Registro.txt",ios::app);
    if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    archivo<<registro.get_CI()<<"\n"<<registro.get_Materia1()<<"\n"<<registro.get_Materia2()<<"\n"<<registro.get_Materia3()<<"\n"<<registro.get_Materia4()<<"\n"<<registro.get_Materia5()<<"\n"<<registro.get_Materia6()<<"\n"<<endl;
    archivo.close();
}
/**
 * @brief 
 * 
 * @return ListaR 
 */
ListaR ListadoRegistro::leerArchivo(){
    int i=0;
    ifstream archivo; 
    string texto; 
    ListaR list;
    archivo.open("Registro.txt",ios::in);
    Registro registro;
     if(archivo.fail()){
        return list;
    }
    while(!archivo.eof()){
        i++;
        getline(archivo,texto);
        switch(i){
            case 1:
                    registro.set_CI(texto);
                    break;
            case 2:
                    registro.set_Materia1(texto);
                    break;
            case 3:
                    registro.set_Materia2(texto);
                    break;        
            case 4:  
                    registro.set_Materia3(texto);
                    break;
            case 5:
                      registro.set_Materia4(texto);
                    break;
            case 6:
                    registro.set_Materia5(texto);
                    break;
            case 7:
                    registro.set_Materia6(texto);
                    break;
             case 8:
             list.insertar(registro);
             i=0;
             break;
        }
    }
    archivo.close();
    return list;
}