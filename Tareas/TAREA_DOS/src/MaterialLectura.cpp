#include "MaterialLectura.hpp"

MaterialLectura::MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio) 
    : titulo(titulo), autor(autor), editorial(editorial), genero(genero), estado(estado), cantidad_hojas(cantidad_hojas), precio(precio) {}

void MaterialLectura::imprimirInformacion() {
    cout << "Metodo base" << endl;
}

void MaterialLectura::tamano() {
    cout << "Metodo base" << endl;
}