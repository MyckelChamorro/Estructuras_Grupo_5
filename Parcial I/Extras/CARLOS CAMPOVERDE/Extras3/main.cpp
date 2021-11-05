/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTOR:  	CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				
	
	ENUNCIADO: Realizar un ejercicio con template				
				
	FECHA DE CREACION:        31-10-2021 	
	FECHA DE MODIFICACION:    04-10-2021*/
	
#include <iostream>

#include <cstdlib>
#include <ostream>


template <typename T>
class my_vector_t{
 protected:
  unsigned tamaño;
  T *data; 
 public:
 
  my_vector_t(unsigned tamaño0 = 0,const T & x0 = T()):
   tamaño(tamaño0),
   data((T *)malloc(sizeof(T)*tamaño0))
  {
   for(unsigned i=0;i<taille;<gras>i) data[i] = x0;
  }

 
  ~my_vector_t(){
   free(data);
  }

 
  inline unsigned size() const{
   return tamaño;
  }

  
  inline const T & operator[](unsigned i) const{
   if(i >= size()) throw;
   return data[i];
  }


  inline T & operator[](unsigned i){
   if(i >= size()) throw;
   return data[i];
  }
};


template <typename T>
std::ostream & operator<<(std::ostream & out,const my_vector_t<T> & v){
 unsigned n = v.size();
 out << "[ ";
 for(unsigned i=0;i<n;<gras>i) out << v[i] << ' '; 
 out << ']'; 
 return out;
}


template <typename T>
void escribir(const my_vector_t<T> & v){
 unsigned n = v.size();
 std::cout << "[ ";
 for(unsigned i=0;i<n;<gras>i) std::cout << v[i] << ' '; 
 std::cout << ']';
}
