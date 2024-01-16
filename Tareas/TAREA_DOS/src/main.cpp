#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"
#include "MaterialOrdenado.hpp"

int main(){
    MaterialOrdenado* materiales = new MaterialOrdenado();
    materiales->agregarMaterial("Game of Thrones", "George R. R. Martin", "Bantam", "Ciencia Ficcion", "Disponible", 583, 30000, "LIBRO");
    materiales->agregarMaterial("Aumento en el precio de la gasolina", "Luis", "ABB", "Informativo", "Disponible", 4, 1000, "NOTICIA");
    materiales->agregarMaterial("Avengers", "Luis", "Accion", "Reservado", 100, 15000, "PELICULA");
    materiales->agregarMaterial("El tiempo vuela", "Luis", "Informativo", "Disponible", 30, 5000, "PODCAST");
    materiales->eliminarMaterial("Avengers");
    materiales->buscarMaterialPorTitulo("El tiempo vuela");
    materiales->buscarMaterialPorTitulo("Avengers");
    return 0;
}