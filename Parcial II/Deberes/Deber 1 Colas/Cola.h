#pragma once
/* Plantilla de clase cola */
template <class T>
class Cola
{
private:
	Nodo<T>* cabeza, * cola;
	int tam;
public:
	Cola ();
	~Cola ();
	void encolar(int);
	int desencolar(void);
	int tamanio(void);
	void mostrar(void);
	bool estaVacia(void);
};

template <class T>
Cola<T>::Cola() {
	cabeza = cola = NULL;
	tam = 0;
}
template <class T>
void Cola<T>::encolar(int valor) {
	Nodo<T>* nuevo_nodo = new Nodo<T>();
	nuevo_nodo->establecer_dato(valor);
	if (cabeza == NULL) {
		cabeza = nuevo_nodo;
		cola = nuevo_nodo;
		nuevo_nodo->establecer_siguiente(NULL);
		tam++;
	}
	else {
		cola->establecer_siguiente(nuevo_nodo);
		nuevo_nodo->establecer_siguiente(NULL);
		cola = nuevo_nodo;
		tam++;
	}
}

template <class T>
int Cola<T>::desencolar() {
	int valor = -1;
	if (cabeza == NULL)
	return -1;
	else {
		valor = cabeza->obtener_dato();
		cabeza = cabeza->obtener_siguiente();
		tam--;
	}
	return valor;
}

template <class T>
int Cola<T>::tamanio() {
	return tam;
}
template <class T>
bool Cola<T>::estaVacia() {
	if (cabeza == NULL)
	return true;
	else
	return false;
}

template <class T>
void Cola<T>::mostrar() {
	if (cabeza == NULL)
	std::cout << "NO HAY DATOS";
	else {
		for (Nodo<int>* recorrer = cabeza; recorrer != NULL; recorrer = recorrer->obtener_siguiente()) {
			std::cout << recorrer->obtener_dato() << ", ";
		}
	}
}
