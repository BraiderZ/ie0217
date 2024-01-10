#include <iostream>
using namespace std;


// Función encargada del selectio sort
void insertionSort(int array[], int size){
    
    for (int step = 1; step < size; ++step){

        //Guardamos en una variable, el valor clave de ese loop
        int key = array[step];
        int j = step -1;

        //Solo comparemos la clave con los valores a su izquierda. Mueve los valores en caso de que la clave sea menor al valor para ordernalo.
        while(key < array[j] && j >= 0){
            array[j + 1] = array[j];
            --j;
        }
        array[j+1] = key;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}


int main () {
    int data[] = {9, 5, 1, 4, 3};

    //Para conseguir el tamaño del arreglo, es mejor divir el total de bytes entre los bytes de un espacio. Con ello, no hará falta modificar este aspecto si suceden cambios.
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}