/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTOR:  	CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				
	
	ENUNCIADO: Realizar un ejercicio con template				
				
	FECHA DE CREACION:        29-10-2021 	
	FECHA DE MODIFICACION:    29-10-2021*/
	
	template <class T> 
class Coordenada{
private:
  T x; 
  T y;
  
public:
  Coordenada(T x=0, T y=0); 
  T dameX(){return x}; 
  T dameY(){return y};      
  void nuevoX(T x){this -> x = x};
  void nuevoY(T y){this -> y = y};
}
template <class T>
Coordenada<T>::Coordenada(T x, T y){
  this -> x = x;
  this -> y = y;
}
