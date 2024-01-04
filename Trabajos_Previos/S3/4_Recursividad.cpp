#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, resultado;

    cout << "Ingrese un  numero no negativo: ";
    cin >> n;

    resultado =  factorial(n);
    cout << "El factorial de " << n << " = " << resultado;
    return 0;
}

int factorial(int n){
    if (n > 1) {
        return n * factorial(n-1); //Dentro de la función, la llamamos nuevamente. Esta recursión se realizará hasta llegar a un punto límite y empezará a retornar valores
    } else {
        return 1; //Punto límite
    }
}