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

void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[], int& numero_secreto){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1:
            std::cout << "Iniciando juego..." << std::endl;
            elegirNumeroSecreto(intervalo_valores, numero_secreto);
            if (nivel_dificultad == 1){
                nivelFacil(cantidad_intentos, intervalo_valores, numero_secreto);
            } else{
                nivelDificil(cantidad_intentos, intervalo_valores, numero_secreto);
            }
            break;
        case 2: 
            elegirDificultad(nivel_dificultad);
            break;
        case 3:
            elegirIntervaloNumeros(cantidad_intentos, intervalo_valores);
            break;
        case 4: 
            std::cout << "Saliendo del juego...\n";
            exit(0);
        
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

void elegirDificultad(int& nivel_dificultad){
    int nueva_dificultad;

    std::cout <<  "\nNiveles disponibles\n";
    std::cout <<  "1. Nivel facil\n";
    std::cout <<  "2. Nivel dificil\n";
    std::cout << "Elige una dificultad: ";
    std::cin >> nueva_dificultad;

    switch (nueva_dificultad){
        case 1:
            nivel_dificultad = nueva_dificultad;
            std::cout <<  "Se ha cambiado a dificultad a facil";
            break;
        case 2: 
            nivel_dificultad = nueva_dificultad;
            std::cout <<  "Se ha cambiado a dificultad a dificil";
            break;

        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}
