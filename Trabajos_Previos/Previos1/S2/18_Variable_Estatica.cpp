#include <iostream>
using namespace std;


void estatica() {  
    //Se crea una variable estática. Esta a diferencia de la local, mantiene su valor en el tiempo
    static int var = 0; //Gracias al "Statatic, se mantiene la variable"
    ++ var;

    cout << var << endl;
}

int main(){

    //Llamamos dos veces a la variable para compronar que funciona
    estatica();
    estatica();
    return 0;
}