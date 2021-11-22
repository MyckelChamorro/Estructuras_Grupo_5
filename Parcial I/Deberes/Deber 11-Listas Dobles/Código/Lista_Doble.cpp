#include "Lista_Doble.h"

void ListaDobleEnlazada::insertar(int valor){
	Nodo *nodo=new Nodo(valor);
	if(cabeza==NULL){
		this->cabeza=nodo;
		tamanio++;
		return;
	}
	Nodo *ultimo = ultimo_nodo();
	ultimo->setSiguiente(nodo);
	nodo->setAnterior(ultimo);
}

Nodo *ListaDobleEnlazada::ultimo_nodo(){
	Nodo *tmp=cabeza;
	while(tmp->getSiguiente()!=NULL){
		tmp=tmp->getSiguiente();
	}
	return tmp;
}

bool ListaDobleEnlazada::ListaVacia(){
	return (this->cabeza == NULL) ? true : false;
}

void ListaDobleEnlazada::insertarCola(int dato) {

    if (this->cabeza==NULL) {
        this->cabeza = new Nodo(dato);
    }
    else {
        Nodo *aux1;
        Nodo *aux2 = new Nodo(dato);

        aux1=ultimo_nodo();

        aux1->setSiguiente(aux2);
        aux2->setAnterior(aux1);
    }
}

void ListaDobleEnlazada::anadirMitad(int posicion,int valor) {
    Nodo *nodo=new Nodo(valor);
    if (this->cabeza==NULL) {
        this->cabeza = nodo;
    }
    else {
        Nodo *aux;
        Nodo *aux1;

        aux = this->cabeza;

        int indice = 0;
        while (aux != NULL && indice != posicion)
        {
            aux1 = aux;
            aux = aux->getSiguiente();
            indice++;
        }
        Nodo *atrasNode = aux1->getAnterior();
        atrasNode->setSiguiente(nodo);
        nodo->setSiguiente(aux1);
    }
}

void ListaDobleEnlazada::borrarNodoEspe(int val){
	Nodo *aux_borrar;
	Nodo *anterior=NULL;
	aux_borrar=this->cabeza;
	while((aux_borrar!=NULL)&&(aux_borrar->getValor()!=val)){
		anterior=aux_borrar;
		aux_borrar=aux_borrar->getSiguiente();
	}
	if(aux_borrar==NULL){
		cout<<"Elemento no existe"<<endl;
	}
	else if(anterior==NULL){
		this->cabeza=this->cabeza->getSiguiente();
		delete aux_borrar;
	}else{
		anterior->setSiguiente(aux_borrar->getSiguiente());
		delete aux_borrar;
	}
}
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    MYCKEL CHAMORRO - mschamorro@espe.edu.ec ( LIDER )
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALISSON CAIZA - alcaiza3@espe.edu.ec 
				LIZBETH RECALDE - klcajas1@espe.edu.ec
				STEVE ACHIG - sjachig1@espe.edu.ec
				
	
	ENUNCIADO: Crear un programa con las funciones insertar,borrar,mostrar,procesar con listas dobles.				
				
	FECHA DE CREACION:        21-11-2021 	
	FECHA DE MODIFICACION:    21-11-2021*/
void ListaDobleEnlazada::imprimirLista(){
	Nodo *tmp=cabeza;
	int indice=0;
	while(tmp!=NULL){
		std::cout<<"Indice:  "<<indice<<"  valor "<<tmp->getValor()<<std::endl;
		indice++;
		tmp=tmp->getSiguiente();
	}
}	
void ListaDobleEnlazada::suma(){
	int resultado=0;
	Nodo *tmp=cabeza;
	int indice=0;
	while(tmp!=NULL){
		resultado+=tmp->getValor();
		tmp=tmp->getSiguiente();
	}
	printf("El resulatdo de la suma es: %d",resultado);
}	