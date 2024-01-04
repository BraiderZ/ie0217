#include <iostream>
using namespace std;

int main(){
    int number = 0;

    //Iniciamos condición. Si se cumple, se realiza lo que dica el "if", sino, lo que diga el "else"

    if (number > 0) { // Si colocamos un <, cambiamos la condición a lo contrario
       cout << "Se cumple el if"; 
    }
    else {
        cout << "No se cumple el if"; 
    }
    
    //Podemos agregar más codigo después si queremos
    return 0;
}