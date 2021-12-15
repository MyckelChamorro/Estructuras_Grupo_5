#pragma once
template <class T>
class Nodo
{
private:
	Nodo* siguiente;
	T dato;
public:
	Nodo();
	~Nodo();
	void establecer_dato(T);
	T obtener_dato(void);
	Nodo* obtener_siguiente(void);
	void establecer_siguiente(Nodo*);
};

template <class T>
Nodo<T>::Nodo() {
	siguiente = NULL;
	dato = 0;
}

template <class T>
	void Nodo<T>::establecer_dato(T value) {
	dato = value;
}

template <class T>
	T Nodo<T>::obtener_dato() {
	return dato;
}

template <class T>
	void Nodo<T>::establecer_siguiente(Nodo* item) {
	siguiente = item;
}

template <class T>
	Nodo<T>* Nodo<T>::obtener_siguiente() {
	return siguiente;
}
