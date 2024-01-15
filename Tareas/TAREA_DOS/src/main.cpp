#include "Libro.hpp"

int main(){
    Libro* ptr_libro1 = new Libro("Game of Thrones", "George R. R. Martin", "Bantam", "Ciencia Ficcion", "Disponible", 583, 30000);
    ptr_libro1 -> imprimirInformacion();
    ptr_libro1 -> tamano();
    delete ptr_libro1;
    return 0;
}