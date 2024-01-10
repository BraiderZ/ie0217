#include <iostream>
using namespace std;

// Función encargada de intercambiar posiciones
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función encargada del selectio sort
void selectionSort(int array[], int size){
    
    for (int step = 0; step < (size-1); ++step){

        //Variable que nos ayuda a verificar cual es el valor menor
        int min_idx = step;
        for (int i = step + 1; i < size; ++i){

            //Verificamos que el valor sea menor al valor del loop en ese momento
            if (array[i] < array[min_idx]){
                min_idx = i;
            }
        }
        // El cambio se realiza en un función aparte para mejorar la legin¡bilidadd del código.
        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}


int main () {
    int data[] = {20, 12, 10, 15, 2};

    //Para conseguir el tamaño del arreglo, es mejor divir el total de bytes entre los bytes de un espacio. Con ello, no hará falta modificar este aspecto si suceden cambios.
    int size = sizeof(data) / sizeof(data[0]);

    selectionSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}