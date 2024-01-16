#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"

int main(){
    MaterialOrdenado* materiales = new MaterialOrdenado();
    MaterialPrecio precio;
    materiales->agregarMaterial("Game of Thrones", "George R. R. Martin", "Bantam", "Ciencia Ficcion", "Disponible", 583, 30000, "LIBRO");
    materiales->agregarMaterial("Aumento en el precio de la gasolina", "Luis", "ABB", "Informativo", "Disponible", 4, 1000, "NOTICIA");
    materiales->agregarMaterial("Avengers", "Luis", "Accion", "Reservado", 100, 15000, "PELICULA");
    materiales->agregarMaterial("El tiempo vuela", "Luis", "Informativo", "Disponible", 30, 5000, "PODCAST");
    materiales->agregarMaterial("El hambre del exito", "George", "Argentina", "Psicologia", "Disponible", 83, 50000, "LIBRO");
    precio.crearVectorPrecios(2, materiales);
    return 0;
}