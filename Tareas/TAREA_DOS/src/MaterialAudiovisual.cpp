#include "MaterialAudiovisual.hpp"

MaterialAudiovisual::MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : titulo(titulo), autor(autor), genero(genero), estado(estado), duracion(duracion), precio(precio) {}

void MaterialAudiovisual::imprimirInformacion() {
    cout << "Metodo base" << endl;
}

void MaterialAudiovisual::tamano() {
    cout << "Metodo base" << endl;
}

string MaterialAudiovisual::obtenerTitulo(){
    return titulo;
}

string MaterialAudiovisual::obtenerTipo(){
    return tipo_material;
}

int MaterialAudiovisual::obtenerPrecio(){
    return precio;
}