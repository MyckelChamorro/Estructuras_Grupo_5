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

#include "List.h"

template<typename T>
List<T>::List(){
    m_num_nodes = 0;
    m_head = NULL;
}

template<typename T>
bool List<T>::is_empty() {
    return (m_head == NULL);
}

template<typename T>
void List<T>::add_head(T data_){
    Node<T>* new_node = new Node<T>(data_);
    Node<T>* temp = m_head;

    if (!m_head) {
        m_head = new_node;
    }
    else {
        new_node->next = m_head;
        m_head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

template<typename T>
void List<T>::add_end(T data_){
    Node<T>* new_node = new Node<T>(data_);
    Node<T>* temp = m_head;

    if (!m_head) {
        m_head = new_node;
    }
    else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

template<typename T>
bool List<T>::del_head() {
    Node<T> *previous = NULL;
    Node<T> *temp = m_head;
    if (!is_empty() ) {
        if (temp) {
            if (previous) 
                previous->next = temp->next;
            else         
                m_head = temp->next;  
            delete temp;
            return true; 
        }
    }
}

template<typename T>
void List<T>::del_end() {  
    Node<T>* temp = m_head;  
    if (!is_empty()) {
        if (m_head ->next) {
            while (temp -> next ->next)
            {
                temp = temp->next;
            }
            Node<T>* del = m_head;
            temp->next = NULL;
            delete del;

        }
        else {
            Node<T>* del = m_head;
            m_head = NULL;
            delete del;
        }
   }
}


template<typename T>
void List<T>::del_all(){
    m_head->delete_all();
    m_head = 0;
}

template<typename T>
void List<T>::print(){
    Node<T>* temp = m_head;
    if (!m_head) {
        std::cout << "La Lista esta vacia " << std::endl;
    }
    else {
        while (temp) {
            temp->print();
            if (!temp->next) std::cout << "NULL";
            temp = temp->next;
        }
    }
    std::cout << std::endl << std::endl;
}

template<typename T>
List<T>::~List() {}
