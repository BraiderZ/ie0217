#include <iostream>

extern int count;
//Función necesaria para el primer programa
void write_extern(void) {
    std::cout << "Count is " << count << std::endl;
}