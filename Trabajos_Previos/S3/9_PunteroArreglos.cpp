#include <iostream>

using namespace std;

int main () {
    float arreglo[3];

    float *ptr; 

    cout << "Desplegando la ubicacion usando el arreglo: " << endl;

    //Se necesita un loop para imprimir todas las direcciones
    for (int i = 0; i < 3; ++i){
        cout << "&arreglo[" << i << "] = " << &arreglo[i] << endl;
    }

    //Le damos la dirección al puntero
    ptr = arreglo; //No es necesario agregar "&arreglo[0]", el compilador lo entiende. Ambas maneras son correctas.

    cout << "\nDesplegando la ubicacion usando el puntero: " << endl;
    //Nuevamente un lopp
    for (int i = 0; i < 3; ++i){
        cout << "ptr + " << i << " = " << ptr + i << endl; //Sumar enteros al puntero es ir cambiando entre cada ubicación. El sabe cuandos bytes tiene cada tipo de dato
    }
    
    return 0;
}