#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float *ptr, *new_ptr;
    
    //Podemos usar malloc para reservar memoria, lo cual, nos devuelve un void*. En el caso de calloc, es lo mismo pero limpia la memoria a usar.
    ptr = (float*) malloc(5*sizeof(float)); //Cambiamos el tipo de la memoria tomada. Dentro de malloc colocamos la cantidad de bytes que necesitamos
    
    if(ptr == NULL){ // Si la memoria asignada apunta a NULL, significa que hubo un fallo. !ptr también es válido para verificar. 
        cout << "Memory Allocation Failed";
        exit(1);
    }

    // Agregamos los valores a la memoria tomada
    for (int i = 0; i < 5; ++i){
        ptr[i] = i * 1.5;
    }
    
    // Con realloc podemos cambiar la cantidad de memoria que necesitamos anteriormente tomada.
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float)); //Tenemos que especificar la ubicación de la memoria a la que le haremos cambios y la nueva cantidad de bytes.
    if (new_ptr == NULL){ //Siempre verificar que se pueda
        cout << "Memory Re-allocation Failed";
        exit(1);
    }
    
    // Agregamos el valor a los bloques de memoria vacíos
    for (int i = 5; i < 10; ++i){
        new_ptr[i] = i * 2.5;
    }
    cout << "\nPrinting Values" << endl;

    for (int i = 0; i < 10; i++){
        cout << new_ptr[i] << endl;
    }

    // Siempre debemos liberar la memoria para evitar fugas. free es el comando en este caso
    free(new_ptr);

    return 0;
}