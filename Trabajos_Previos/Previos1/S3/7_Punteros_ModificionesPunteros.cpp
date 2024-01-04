#include <iostream>

using namespace std;

int main () {
    int var = 5;

    //Creamos una variable puntero
    int* pointVar;

    // Se le da como valor la dirección de la otra variable. Con ello, podremos saber tanto el valor como la dirección de una variable al mismo tiempo
    pointVar = &var; //Solo puede almacenar direcciones

    // Imprimimos el valor de var
    cout << "var = " << var << endl;

    //Imprimimos la dirección de var
    cout << "Address of var (&var): " << &var << endl;

    //imprimimos el puntero
    cout << "pointVar = " << pointVar << endl;

    //Imprimimos el valor de la dirección que almacena el puntero
    cout << "El contenido de la direccion que almacena el puntero (*pointVar) = " << *pointVar << "\n" << endl;

    //Si modificamos el valor de la variable, el puntero detecta el cambio
    var = 7;
    cout << "El nuevo valor de var es: " << *pointVar << "\n" << endl;

    //Podemos modificarlo desde el propio puntero
    *pointVar =  16;
    cout << "El nuevo valor dado por el puntero, visto desde la variable: " << var << endl;
    cout << "El nuevo valor dado por el puntero, visto desde el puntero: " << *pointVar << endl;
    return 0;
}