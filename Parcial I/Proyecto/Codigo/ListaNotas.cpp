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
#include "ListaNotas.h"
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool ListaNotas::ListaVacia(){
		return(this->primero==NULL);
}
/**
 * @brief Construct a new Lista Notas:: Lista Notas object
 * 
 */
ListaNotas::ListaNotas(){
			this->primero=NULL;
			this->actual=NULL;
}
/**
 * @brief 
 * 
 * @param _notas 
 */
void ListaNotas::insertar(Notas _notas){
			NodoNotas *nuevo=new NodoNotas(_notas,NULL);
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
 * @param _notas 
 */
void ListaNotas::insertarFinal(Notas _notas){
			NodoNotas *aux;
			NodoNotas *aux1;
			NodoNotas *aux2=new NodoNotas(_notas,NULL);
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
 * @param _notas 
 */
void ListaNotas::borrarNodoEspe(Notas _notas){
			NodoNotas *aux_borrar;
			NodoNotas *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getNotas().get_CI()!=_notas.get_CI())){
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
 * @param cedula 
 * @return NodoNotas* 
 */
NodoNotas *ListaNotas::buscarNodo(string cedula){
			NodoNotas *aux_borrar;
			NodoNotas *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getNotas().get_CI()!=cedula)){
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
 * @param cedula 
 * @return true 
 * @return false 
 */
bool ListaNotas::buscarBool(string cedula){
			NodoNotas *aux_borrar;
			NodoNotas *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getNotas().get_CI()!=cedula)){
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
void ListaNotas::mostrar(){
			NodoNotas *tmp=this->primero;
			while(tmp){
				cout<<tmp->getNotas().get_CI()<<"/"<<tmp->getNotas().get_materia1()[0]<<"/"<<tmp->getNotas().get_materia1()[1]<<"/"<<tmp->getNotas().get_materia1()[2]<<"/"
                <<tmp->getNotas().get_materia2()[0]<<"/"<<tmp->getNotas().get_materia2()[1]<<"/"<<tmp->getNotas().get_materia2()[2]<<"/"
                <<tmp->getNotas().get_materia3()[0]<<"/"<<tmp->getNotas().get_materia3()[1]<<"/"<<tmp->getNotas().get_materia3()[2]<<"/"
                <<tmp->getNotas().get_materia4()[0]<<"/"<<tmp->getNotas().get_materia4()[1]<<"/"<<tmp->getNotas().get_materia4()[2]<<"/"
                <<tmp->getNotas().get_materia5()[0]<<"/"<<tmp->getNotas().get_materia5()[1]<<"/"<<tmp->getNotas().get_materia5()[2]<<"/"
                <<tmp->getNotas().get_materia6()[0]<<"/"<<tmp->getNotas().get_materia6()[1]<<"/"<<tmp->getNotas().get_materia6()[2]<<"->";
				tmp=tmp->getNodo();
			}
			cout<<"NULL\n";
}