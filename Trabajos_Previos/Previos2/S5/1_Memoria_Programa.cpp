#include <iostream>

// Se almacena en el segmento llamado data, o sea, la parte de las variables contantes y globales
int globalVariable = 42;

int main(){
    // Se almacena en el stack, osea, lugar de las variables locales
    int stackVariable = 10;

    // Declaramos un puntero
    int* heapVariable;
    
    // Se almacena en el heap, espacio de la memoria dinámica que el usuario especifíca qué uso se le dará
    // La memoria es dada para guardar un entero
    heapVariable = new int; //new es el comando para obtener un espacio en la memoria. Esto nos retorna una ubicación, por lo que, es importante usar un puntero

    // Se asigna un valor
    *heapVariable = 20; // todo el proceso se puede realizar en un paso: tipo_de_dato* nombre_puntero = new tipo_de_dato(valor);

    // Se almacenan las impresiones en el text 
    std::cout << "Valor de globalVariable" << globalVariable << std::endl;
    std::cout << "Valor de stackVariable" << stackVariable << std::endl;
    std::cout << "Valor de heapVariable" << *heapVariable << std::endl;

    //Es importante eliminar la memoria reservada para que pueda ser usada en otro momento del programa. No realizar estas liberaciones, puede llegar a generar errores o incluso que no funciones el programa
    delete heapVariable;

    return 0;
}