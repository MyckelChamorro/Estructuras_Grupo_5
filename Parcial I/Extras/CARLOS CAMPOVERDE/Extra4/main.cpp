/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTOR:  	CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				
	
	ENUNCIADO: Realizar un ejercicio con template				
				
	FECHA DE CREACION:       01-10-2021 	
	FECHA DE MODIFICACION:    04-10-2021*/
	
	template <class T, int nElementos>
class Tabla {
  public:
   Tabla();
   ~Tabla();
   T& operator[](int indice) { return pT[indice]; }

  private:
   T *pT;
};

// Definición:
template <class T, int nElementos>
Tabla<T,nElementos>::Tabla() {
   pT = new T[nElementos];
}

template <class T, int nElementos>
Tabla<T, nElementos>::~Tabla() {
   delete[] pT;
}
