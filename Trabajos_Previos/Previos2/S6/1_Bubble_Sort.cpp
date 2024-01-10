#include <iostream>
using namespace std;

// Función encargada del bubble sort
void bubbleSort(int array[], int size){
    
    //Loop encargado de acceder a cada elemento del arreglo
    for (int step = 0; step < (size-1); ++step){

        //Bandera que verifica si se realizaron cambios en cada loop
        int swapped = 0;

        //Con este for, evitamos que se repitan comparaciones ya realizadas
        for (int i = 0; i < (size-step-1); ++i){

            if (array[i] > array[i + 1]){

                //Si es mayor al siguiente, cambian de lugar. Es importante guardar el valor en una variable temporal
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                //La bandera se modifica
                swapped = 1;
            }
        }
        //Verificamos que hubieron cambios en a la hora de vericar el valor. Si no hubieron, significa que la lista ya se encuentra acomodada
        //Este paso y la bandera no son necesarios pero mejoran la eficiencia del programa
        if (swapped == 0){
            break;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i){
        cout << " " << array[i];
    }
    cout << "\n";
}

int main () {
    int data[] = {-2, 45, 0, 11, -9};

    //Para conseguir el tamaño del arreglo, es mejor divir el total de bytes entre los bytes de un espacio. Con ello, no hará falta modificar este aspecto si suceden cambios.
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}