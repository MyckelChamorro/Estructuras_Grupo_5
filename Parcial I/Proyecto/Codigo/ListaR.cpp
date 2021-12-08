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
#include "ListaR.h"
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool ListaR::ListaVacia(){
		return(this->primero==NULL);
}
/**
 * @brief Construct a new Lista R:: Lista R object
 * 
 */
ListaR::ListaR(){
			this->primero=NULL;
			this->actual=NULL;
}
/**
 * @brief 
 * 
 * @param _registro 
 */
void ListaR::insertar(Registro _registro){
			Nodo *nuevo=new Nodo(_registro,NULL);
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
 * @param _registro 
 */
void ListaR::insertarFinal(Registro _registro){
			Nodo *aux;
			Nodo *aux1;
			Nodo *aux2=new Nodo(_registro,NULL);
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
 * @param _registro 
 */
void ListaR::borrarNodoEspe(Registro _registro){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getRegistro().get_CI()!=_registro.get_CI())){
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
 * @param CI 
 * @return Nodo* 
 */
Nodo *ListaR::buscarNodo(string CI){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getRegistro().get_CI()!=CI)){
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
 * @param CI 
 * @return true 
 * @return false 
 */
bool ListaR::buscarBool(string CI){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getRegistro().get_CI()!=CI)){
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
void ListaR::mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->getRegistro().get_CI()<<"/"<<tmp->getRegistro().get_Materia1()<<"/"<<tmp->getRegistro().get_Materia2()<<"/"<<tmp->getRegistro().get_Materia3()<<"/"<<tmp->getRegistro().get_Materia4()<<"/"<<tmp->getRegistro().get_Materia5()<<"/"<<tmp->getRegistro().get_Materia6()<<"/"<<"->";
			    tmp=tmp->getNodo();
			}
			cout<<"NULL\n";
}