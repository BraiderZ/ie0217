#include "MaterialLectura.hpp"

int main(){
    MaterialLectura material("Titanic", "Del Toro", "Maxwell", "Accion", "Disponible", 100, 10000);
    material.imprimirInformacion();
    material.tamano();
    
    return 0;
}