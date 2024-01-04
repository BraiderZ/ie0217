#include <iostream>
using namespace std;

//Se crea una función con argumentos.
int suma(int a, int b) { //n1 y n2 son argumentos 
    return(a + b);  //Devuelve una summa
}

int main(){

    int sum;
    //Llamar a la funcion con argumentos
    //Lo que retorne la función, se guarda en una variable 
    sum = suma(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}