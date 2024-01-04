#include <iostream>
using namespace std;

int main(){
    int i = 1;

    // Si colocamos el Do, el while se realizará mínimo una vez y después se revisa si continua. Esto difiere del while normal, que en caso de no tener el Do, verifica la condición y si no se cum`le a la primera, no lo realiza
    do {
        cout << i << " "; //Lo que se imprime
        ++i;
    }
    while(i <= 5); // En caso de querer un while normal, colocamos la condición en el lugar del do.

    return 0;
}