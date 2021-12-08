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
#include "ListadoMaterias.h"
#include<fstream>
#include <sstream>
/**
 * @brief 
 * 
 * @param materia 
 */
void ListadoMaterias::agregarArchivo(Materia materia){
    ofstream archivo1;
    archivo1.open("Materias.txt",ios::app);
    if(archivo1.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    archivo1<<materia.get_NRC()<<"\n"<<materia.get_Nombre()<<"\n"<<materia.get_profe().get_Pnombre()<<"\n"<<materia.get_profe().get_apellido()<<"\n"<<materia.get_profe().get_CI()<<"\n"<<materia.get_profe().get_ID()<<"\n"<<endl;
    archivo1.close();
}
/**
 * @brief 
 * 
 * @return ListaM 
 */
ListaM ListadoMaterias::leerArchivo(){
    int i=0;
    ifstream archivo1; 
    string texto; 
    ListaM listm;
    Profesor proof;
    archivo1.open("Materias.txt",ios::in);
    Materia materia;
     if(archivo1.fail()){
        return listm;
    }
    while(!archivo1.eof()){
        i++;
        getline(archivo1,texto);
        switch(i){
            case 1:
                    materia.set_NRC(texto);
                    break;
            case 2:
                    materia.set_Nombre(texto);
                    break;
            case 3:
                    proof.set_Pnombre(texto);
                   
                    break;
             case 4:
                   proof.set_apellido(texto);
                    break;
            case 5:
                    proof.set_CI(texto);
                    break;        
             case 6:     
                    proof.set_ID(texto);
                    break;   
             case 7:
             materia.set_profe(proof);
             listm.insertar(materia);
             i=0;
             break;
        }
    }
    archivo1.close();
    return listm;
}