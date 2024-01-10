#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Enter a total number of students: ";
    cin >> num;
    float* ptr;
    
    // Podemos pedir memoria, la cual, sea un arreglo si le adjuntamos el tamaño del mismo.
    /** En caso de las clases, el tipo de dato es el nombre de la clase y para ingresar a métodos o atributos usamos:
     *  "puntero->atributo/método" 
     * */
    ptr = new float[num]; 

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i){
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i); //Utilizando la lógica de punteros, guardamos los valores de cada espacio en el arreglo.
    }

    cout << "\nDisplaying GPA of students" << endl;
    for (int i = 0; i < num; ++i){
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }
    
    // Para eliminar memoria, debemos especificar que es un arreglo
    delete[] ptr;

    return 0;
}