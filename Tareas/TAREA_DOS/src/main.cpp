#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"
#include "funciones.hpp"

int main(){
    MaterialOrdenado* materiales = new MaterialOrdenado();
    MaterialPrecio precio;

    while(1){
        mostrarMenu();
        procesarOpcion(materiales, precio);
    }
    return 0;
}