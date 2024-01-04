#include <iostream>
using namespace std;

//Main recibe argumentos dados por el usuario
int main(int argc, char *argv[]){
    cout << "Numero de argumentos: " <<  argc << endl;
    cout << "Nombre de programa: " << argv[0] << endl;

    // Imprimir argumentos adicionales si existen
    if (argc > 1){
        cout << "Arguentos adicionales: " << endl;
        for (int i = 1; i < argc;  ++i){
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }
    return 0;
}