#include <iostream>
using namespace std;

int main(){
    int num1;
    cout << "Ingrese un numero: " << endl;
    cin >> num1;

    //Si cumple el if, valora los otros casos que estan dentro del if
    if (num1 != 0){
        if (num1 > 0){
            cout << "El numero es positivo" << endl;
        }

        else{
            cout << "El numero es negativo" << endl;
        }
    }
    else{
        cout << "El numero es cero. No es positivo ni negativo" << endl;
    }

    cout << "Esta linea siempre se imprime" << endl;
    return 0;
}