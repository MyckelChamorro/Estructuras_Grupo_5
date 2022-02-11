// EN ESTE PROBLEMA VAMOS A HACER UNA DOBLE COMPARACION DE UN ARRAY
// ES DECIR, VAMOS A COMPARAR TODOS LOS ELEMENTOS DEL ARRAY CON CADA ELEMENTO DEL ARRAY
// O EN OTRAS PALABRAS SE VAN A COMPARAR TODOS CONTRA TODOS

#include "Operaciones.cpp"

int main(){
    Operaciones op;
    op.llenarVector();
    op.comparacionDeficiente();
    cout << "El numero de comparaciones que se realizaron fue " << op.getVueltas1() << endl;
    op.comparacionEficiente();
    cout << "El numero de comparaciones que se realizaron fue " << op.getVueltas2() << endl;
    op.suma();
    op.sumaElementos();
    op.recorridos();
    op.cicloWhile();
}