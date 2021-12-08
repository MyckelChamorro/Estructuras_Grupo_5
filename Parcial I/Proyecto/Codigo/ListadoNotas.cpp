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
#include "ListadoNotas.h"
#include<fstream>
#include <sstream>
/**
 * @brief 
 * 
 * @param notas 
 */
void ListadoNotas::agregarArchivo(Notas notas){
    ofstream archivo;
    archivo.open("Notas.txt",ios::app);
    if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    archivo<<notas.get_CI()<<"\n"<<notas.get_materia1()[0]<<"\n"<<notas.get_materia1()[1]<<"\n"<<notas.get_materia1()[2]
    <<"\n"<<notas.get_materia2()[0]<<"\n"<<notas.get_materia2()[1]<<"\n"<<notas.get_materia2()[2]<< "\n"<<notas.get_materia3()[0]
    <<"\n"<<notas.get_materia3()[1]<<"\n"<<notas.get_materia3()[2]<<"\n"<<notas.get_materia4()[0]<<"\n"<<notas.get_materia4()[1]
    <<"\n"<<notas.get_materia4()[2]<<"\n"<<notas.get_materia5()[0]<<"\n"<<notas.get_materia5()[1]<<"\n"<<notas.get_materia5()[2]
    <<"\n"<<notas.get_materia6()[0]<<"\n"<<notas.get_materia6()[1]<<"\n"<<notas.get_materia6()[2]<<"\n"<<endl;
    archivo.close();
}
/**
 * @brief 
 * 
 * @return ListaNotas 
 */
ListaNotas ListadoNotas::leerArchivo(){
    int i=0;
    ifstream archivo; 
    string texto; 
    ListaNotas list;
    archivo.open("Notas.txt",ios::in);
    Notas notas;
     if(archivo.fail()){
        return list;
    }
    while(!archivo.eof()){
        i++;
        getline(archivo,texto);
        switch(i){
            case 1:
                    notas.set_CI(texto);
                    break;
            case 2:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia1(num,0);
          }
                    break;
            case 3:  {
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia1(num,1);
          }
                    break;
            case 4:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia1(num,2);
         }
                    break;
            case 5:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia2(num,0);
            }
                    break;
            case 6:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia2(num,1);
            }
                    break;
            case 7:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia2(num,2);
            }
                    break;
            case 8:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia3(num,0);
            }
                    break;
            case 9:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia3(num,1);
            }
                    break;
            case 10:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia3(num,2);}
                    break;
            case 11:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia4(num,0);
            }
                    break;
            case 12:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia4(num,1);
            }
                    break;
            case 13:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia4(num,2);
            }
                    break;
            case 14:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia5(num,0);
            }
                    break;
            case 15:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia5(num,1);
            }
                    break;
            case 16:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia5(num,2);
            }
                    break;
             case 17:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia6(num,0);
             }
                    break;
             case 18:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia6(num,1);
             }
                    break;
             case 19:{
                    float num=0;
                    num=std::stof(texto);
                    notas.set_materia6(num,2);
             }
                    break;
             case 20:

                   list.insertar(notas);
                    i=0;
                    break;
        }
    }
    archivo.close();
    return list;
}