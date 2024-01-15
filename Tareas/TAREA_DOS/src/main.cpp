#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"

int main(){
    Libro* ptr_libro1 = new Libro("Game of Thrones", "George R. R. Martin", "Bantam", "Ciencia Ficcion", "Disponible", 583, 30000);
    ptr_libro1 -> imprimirInformacion();
    ptr_libro1 -> tamano();
    delete ptr_libro1;

    Noticia* noticia1 = new Noticia("Aumento en el precio de la gasolina", "Luis", "ABB", "Informativo", "Disponible", 4, 1000);
    noticia1 -> imprimirInformacion();
    noticia1 -> tamano();
    delete noticia1;
    return 0;
}