#include <iostream>
using namespace std;

int main(){
    int number = -10;

    //Iniciamos condición. Si se cumple, se realiza lo que dica el "if", sino, pasará a el siguiente "else if" y así hasta llegar al "else" si ninguna condición se cumple

    if (number > 0) { // Si colocamos un <, cambiamos la condición a lo contrario
       cout << "Se cumple el if"; 
    }

    else if (number < 0) { // Condición extra
       cout << "Se cumple el else if"; 
    }

    else { // En caso de que ninguna condición se verdadera
        cout << "No se cumple el if"; 
    }
    
    return 0;
}