#include <iostream>

using namespace std;

//Los tipos de variables creadas por el usuario, también ppueden utilizar punteros

struct Distancia {
    int pies;
    float pulgadas;
};

int main () {
    //Creamos dos variables del tipo que creamos, o sea, distancia
    Distancia *ptr, d;

    ptr = &d;

    cout << "Ingrese los pies: ";
    cin >> (*ptr).pies; //De esta manera almacenamos el valor dado por el usuario, en los pies por medio del puntero. Es necesario utilizar los paréntesis para el buen funcionamiento
    cout << "Ingrese las pulgadas: ";
    cin >> ptr -> pulgadas; //Otra manera de almacenar el valor. Esta es más recomendada para evitar los errores a la hora de usar los paréntesis

    //Para imprimir, se usan también cualquiera de los dos tipos
    cout << "Desplegando la informacion: " << endl;
    //Intercalamos métodos para evaluar su igualdad
    cout << "Distancia = " << ptr -> pies << " pies " << (*ptr).pulgadas << " pulgadas ";

    return 0;
}