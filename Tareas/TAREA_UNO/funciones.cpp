#include "funciones.hpp"
#include <string>
#include <iostream>
#include <random>

void mostrarMenu(){
    std::cout << "\n-----¡Adivina el entero!-----\n";
    std::cout << "1. Iniciar el juego\n";
    std::cout << "2. Elegir dificultad\n";
    std::cout << "3. Elegir el intervalo de valores\n";
    std::cout <<  "4. Salir del juego\n";
}

void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[]){
    std::cout <<  "\nNivel " << nivel_dificultad << std::endl;
    std::cout <<  "Intentos " << cantidad_intentos << std:: endl;
    std::cout <<  "Intervalo " << intervalo_valores[0] << "-" << intervalo_valores[1] << std::endl;

    nivel_dificultad =  9;
    cantidad_intentos = 10;
    intervalo_valores[0] = 9;
    intervalo_valores[1] = 100;

}