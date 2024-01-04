#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 10; ++i) { //Se crea unna variable, se coloca la condición, se realiza una acción y actualizamos datos
        if (i == 4) {
            cout << "Nos brincamos el 4\n";
            continue; // Pasa a la siguiente iteración.  
        }
        else if (i == 9){
            cout << "Termina el loop\n";
            break;
        }
        cout << i << "\n";
        
    }

    return 0;
}