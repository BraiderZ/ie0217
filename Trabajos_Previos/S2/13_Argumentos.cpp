#include <iostream>
using namespace std;

//Se crea una función con argumentos.
void displayNum(int n1, float n2) { //n1 y n2 son argumentos 
    cout << "El numero int es " << n1 << "\n";
    cout << "El numero doble es " << n2;
}

int main(){

    int num1 = 5;
    double num2 = 5.5;
    //Llamar a la funcion con argumentos
    displayNum(num1, num2); //Enviamos los argumentos
    return 0;
}
