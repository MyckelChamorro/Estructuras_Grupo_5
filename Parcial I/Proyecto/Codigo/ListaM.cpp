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
#include "ListaM.h"
#include <ctime>
#include <iostream>
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool ListaM::ListaVacia(){
		return(this->primero==NULL);
		}
/**
 * @brief Construct a new Lista M:: Lista M object
 * 
 */
ListaM::ListaM(){
			this->primero=NULL;
			this->actual=NULL;
		}
/**
 * @brief 
 * 
 * @param _materia 
 */
void ListaM::insertar(Materia _materia){
			NodoM *nuevo=new NodoM(_materia,NULL);
			if(ListaVacia()){
				this->primero=nuevo;	
			}else{
				this->actual->setNodo(nuevo);
			}
			this->actual=nuevo;
		}
/**
 * @brief 
 * 
 * @param _materia 
 */
void ListaM::insertarFinal(Materia _materia){
			NodoM *aux;
			NodoM *aux1;
			NodoM *aux2=new NodoM(_materia,NULL);
			aux=this->primero;
			if(ListaVacia()){
				this->primero=aux;	
			}else{
					while (aux != NULL)
        			{
		            aux1 = aux;
		            aux = aux->getNodo();
        			}
        			aux1->setNodo(aux2);
				}
			}
/**
 * @brief 
 * 
 * @param _materia 
 */
void ListaM::borrarNodoEspe(Materia _materia){
			NodoM *aux_borrar;
			NodoM *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getMateria().get_NRC()!=_materia.get_NRC())){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				cout<<"Elemento no existe"<<endl;
			}
			else if(anterior==NULL){
				this->primero=this->primero->getNodo();
				delete aux_borrar;
			}else{
				anterior->setNodo(aux_borrar->getNodo());
				delete aux_borrar;
			}
		}
/**
 * @brief 
 * 
 * @param NRC 
 * @return NodoM* 
 */
NodoM *ListaM::buscarNodo(string NRC){
			NodoM *aux_borrar;
			NodoM *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getMateria().get_NRC()!=NRC)){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				cout<<"Elemento no existe"<<endl;
			}
			else{
				return aux_borrar;
			}
		}
/**
 * @brief 
 * 
 * @param NRC 
 * @return true 
 * @return false 
 */
bool ListaM::buscarBool(string NRC){
			NodoM *aux_borrar;
			NodoM *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getMateria().get_NRC()!=NRC)){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				cout<<endl<<"NO EXISTE EL NRC ESPECIFICADO"<<endl;
				return false;
			}
			else{
				return true;
			}
		}
/**
 * @brief 
 * 
 * @param _cedula 
 * @return true 
 * @return false 
 */
bool ListaM::buscarBool1(string _cedula){
			NodoM *aux_borrar;
			NodoM *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getMateria().get_profe().get_CI()!=_cedula)){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				
				return false;
			}
			else{
				return true;
			}
		}
/**
 * @brief 
 * 
 */
void ListaM::mostrar(){
			NodoM *tmp=this->primero;
			while(tmp){
				cout<<endl<<tmp->getMateria().get_NRC()<<"/"<<tmp->getMateria().get_Nombre()<<"/"<<tmp->getMateria().get_profe().get_Pnombre()<<"/"<<tmp->getMateria().get_profe().get_apellido()<<"/"<<"->";
			    tmp=tmp->getNodo();
			}
			cout<<"NULL\n";
		}
/**
 * @brief 
 * 
 * @return int 
 */
int ListaM::generarNRC(){
			int nrc;
			srand(time(NULL));
   			int i, n, aleatorio, DESDE=1000, HASTA=9999;
			 nrc = rand()%(HASTA-DESDE+1)+DESDE;
			 return nrc;
		}