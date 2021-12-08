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
#include "ListadoPersonas.h"
#include<fstream>
#include <sstream>
/**
 * @brief 
 * 
 * @param persona 
 */
void ListadoPersonas::agregarArchivo(Persona persona){
    ofstream archivo;
    archivo.open("Personas.txt",ios::app);
    if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    archivo<<persona.get_CI()<<"\n"<<persona.get_Pnombre()<<"\n"<<persona.get_Snombre()<<"\n"<<persona.get_apellido()<<"\n"<<persona.get_edad()<<"\n"<<persona.get_correo()<<"\n"<<persona.get_telefono()<<"\n"<<persona.get_ID()<<"\n"<<endl;
    archivo.close();
}
/**
 * @brief 
 * 
 * @return Lista 
 */
Lista ListadoPersonas::leerArchivo(){
    int i=0;
    ifstream archivo; 
    string texto; 
    Lista list;
    archivo.open("Personas.txt",ios::in);
    Persona persona;
     if(archivo.fail()){
        return list;
    }
    while(!archivo.eof()){
        i++;
        getline(archivo,texto);
        switch(i){
            case 1:
                    persona.set_CI(texto);
                    break;
            case 2:
                    persona.set_Pnombre(texto);
                    break;
            case 3:
                    persona.set_Snombre(texto);
                    break;        
            case 4:  
                    persona.set_apellido(texto);
                    break;
            case 5:
                        int edad;
                        istringstream(texto)>>edad; 
                    persona.set_edad(edad);
                    break;
            case 6:
                    persona.set_correo(texto);
                    break;
            case 7:
                    persona.set_telefono(texto);
                    break;
            case 8:
                    persona.set_ID(texto);
                    break;
             case 9:
             list.insertar(persona);
             i=0;
             break;
        }
    }
    archivo.close();
    return list;
}