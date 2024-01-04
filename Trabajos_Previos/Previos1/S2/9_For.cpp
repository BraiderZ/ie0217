#include <iostream>
using namespace std;

int main(){
    cout << "For normal: ";

    for (int i = 1; i <= 5; ++i) { //Se crea unna variable, se coloca la condición, se realiza una acción y actualizamos datos
        cout << i << " ";
    }

    cout << "For arreglo: ";
    //Se crea un arreglo
    int num_array[] = {1,2,3,4,5,6,7,8,9,10};

    for (int n : num_array) { //Ahora se basa en el arreglo
        cout << n << " ";
    }
    return 0;
}