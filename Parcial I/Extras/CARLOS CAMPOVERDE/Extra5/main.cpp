/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTOR:  	CARLOS CAMPOVERDE - cdcampoverde@espe.edu.ec 
				
	
	ENUNCIADO: Realizar un ejercicio con template				
				
	FECHA DE CREACION:       02-10-2021 	
	FECHA DE MODIFICACION:    04-10-2021*/
	
	 #include

class Vector

{

 public:

       float x, y;

       bool operator>(Vector v)

       {

             return ((x*x + y*y) > (v.x*v.x + v.y*v.y))? true: false;

       }

};

 template T max(T a, T b){ return (a > b) ? a : b;}

 

void main()

{

Vector v1 = {2, 3}, v2 = {1, 5};

Int x = 2, y = 3;

cout <<"Mayor: "<<< endl;

cout <<"Mayor:"<<<", "<<< endl;

}
