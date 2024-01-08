#include "funciones.hpp"
#include <string>
#include <iostream>
#include <random>

int main(){
    int nivel_dificultad = 1;
    int cantidad_intentos = 0;
    int intervalo_valores[2] = {0, 20};

    mostrarMenu();
    procesarOpcion(nivel_dificultad, cantidad_intentos, intervalo_valores);
    std::cout <<  "\nNivel " << nivel_dificultad << std::endl;
    std::cout <<  "Intentos " << cantidad_intentos << std:: endl;
    std::cout <<  "Intervalo " << intervalo_valores[0] << "-" << intervalo_valores[1] << std::endl;
    return 0;
}