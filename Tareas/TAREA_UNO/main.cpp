#include "funciones.hpp"
#include <string>
#include <iostream>
#include <random>

int main(){
    int nivel_dificultad = 1;
    int cantidad_intentos = 0;
    int intervalo_valores[2] = {0, 20};
    int numero_secreto = 0;

    while(1){
        mostrarMenu();
        procesarOpcion(nivel_dificultad, cantidad_intentos, intervalo_valores, numero_secreto);
    }
    return 0;
}