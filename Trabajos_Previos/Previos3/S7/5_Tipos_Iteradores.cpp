#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec{1, 2, 3, 4};

    /*Creamos iteradores de acceso aleatorio. Estos operadores pueden leer, escribir, avanzar hacia adelante y atrás, y hacia el elemento elegido por el usuario
    * Otros iteradores poseen menos características:
    * Bidireccional: lee, escribe y avanza hacia el valor anterior o siguiente
    * Forward: lee, escribe y avanza hacia el valor siguiente
    * Salida: escribe y avanza hacia el valor siguiente
    * Entrada: lee y avanza hacia el valor siguiente
    */

    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1; //Se le resta 1 para caer en el útimo valor

    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;


    cout << "Second Last Element: " << *(itr_last -1) << endl;
    cout << "Last Element: " << *(itr_last) << endl;

    return 0; 
}