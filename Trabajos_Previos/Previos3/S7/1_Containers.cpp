#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

void imprimir(auto x){ //Auto detecta automaticamente el tipo de dato y lo complementa 
    cout << "Numbers are: ";
    for(auto& num: x){
        cout << num << ", ";
    }
    cout << endl;
}


int main() {
    // Contairner de tipo secuencia. Almacena los datos según fueron agregados
    vector<int> secuencia = {1, 100, 10, 70, 100};

    //Container de tipo asociativo. Elimina los valores iguales y los ordena de menor a mayor.
    set<int> asociativo = {1, 100, 10, 70, 100};

    //Container de tipo asociativo desordenado. Lo mismo que el asociativo pero con orden aleatorio.
    unordered_set<int> asociativo_desordenado = {1, 100, 10, 70};

    imprimir(secuencia);
    imprimir(asociativo);
    imprimir(asociativo_desordenado);

    return 0;
}