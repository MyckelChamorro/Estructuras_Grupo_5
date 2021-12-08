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
#include "Lista.h"
/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool Lista::ListaVacia(){
		return(this->primero==NULL);
}
/**
 * @brief Construct a new Lista:: Lista object
 * 
 */
Lista::Lista(){
		this->primero=NULL;
		this->actual=NULL;
}
/**
 * @brief 
 * 
 * @param _persona 
 */
void Lista::insertar(Persona _persona){
		Nodo *nuevo=new Nodo(_persona,NULL);
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
 * @param _persona 
 */
void Lista::insertarFinal(Persona _persona){
		Nodo *aux;
		Nodo *aux1;
		Nodo *aux2=new Nodo(_persona,NULL);
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
 * @param _persona 
 */
void Lista::borrarNodoEspe(Persona _persona){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=this->primero;
		while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=_persona.get_CI())){
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
 * @return Nodo* 
 */
Nodo *Lista::buscarNodo(string cedula){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=this->primero;
		while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=cedula)){
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
bool Lista::buscarBool(string cedula){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=this->primero;
		while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=cedula)){
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
void Lista::mostrar(){
		Nodo *tmp=this->primero;
		while(tmp){
		cout<<endl<<tmp->getPersona().get_CI()<<"/"<<tmp->getPersona().get_Pnombre()<<"/"<<tmp->getPersona().get_Snombre()<<"/"<<tmp->getPersona().get_apellido()<<"/"<<tmp->getPersona().get_edad()<<"/"<<tmp->getPersona().get_ID()<<"/"<<tmp->getPersona().get_correo()<<"->";
		tmp=tmp->getNodo();
		}
		cout<<"NULL\n";
}