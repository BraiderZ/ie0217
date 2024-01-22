#include "funciones.hpp"

int tiposDatosMatriz(){
        int opcion;

        cout << "Bienvennido a la calculadora de matrices" << endl;
        cout << "Tipos de numeros permitidos: " << endl;
        cout << "1. Numeros enteros." << endl;
        cout << "2. Numeros reales" << endl;
        cout << "3. Numeros complejos" << endl;
        cout << "Eliga el tipo de datos que tendran las matrices: ";
        cin >> opcion; 
        cout << endl;

        return opcion;
}