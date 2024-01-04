#include <iostream>

using namespace std;

//Función para intercambiar valores. Ahora se deben nombrar como punteros

void cambiar(int* n1, int* n2){

    //Guardamos temporalmente le valor de n1
    int temp;
    temp = *n1;

    //Intercambiamos valores
    *n1 = *n2;
    *n2 = temp;
}

int main () {
    
    int a = 1, b = 2;

    cout << "Antes del intercambio:\n" << endl;
    cout << "a = " << a << "\n" << endl;
    cout << "b = " << b << "\n" << endl;

    cout << "&a = " << &a << "\n" << endl;
    cout << "&b = " << &b << "\n" << endl;
    
    //Hacemos el cambio. Las variables que se envían deben ser sus direccionnes
    cambiar(&a, &b);

    cout << "Despues del intercambio:\n" << endl;
    cout << "a = " << a << "\n" << endl;
    cout << "b = " << b << "\n" << endl;


    return 0;
}