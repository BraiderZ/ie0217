#include "funciones.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>


void mostrarMenu(){
    std::cout << "\n-----Adivina el entero!-----\n";
    std::cout << "1. Iniciar el juego\n";
    std::cout << "2. Elegir dificultad\n";
    std::cout << "3. Elegir el intervalo de valores\n";
    std::cout <<  "4. Salir del juego\n";
}

void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1:
            std::cout << "\nIniciando juego..." << std::endl;
            elegirNumeroSecreto(intervalo_valores, numero_secreto); 
            if (nivel_dificultad == 1){
                nivelFacil(cantidad_intentos, intervalo_valores, numero_secreto);
            } else{
                nivelDificil(cantidad_intentos, intervalo_valores, numero_secreto, ajuste_dificultad_dificil);
            }
            break;
        case 2: 
            elegirDificultad(nivel_dificultad);
            break;
        case 3:
            elegirIntervaloNumeros(cantidad_intentos, intervalo_valores, ajuste_dificultad_dificil);
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
            std::cout <<  "Se ha cambiado a dificultad a facil\n";
            break;
        case 2: 
            nivel_dificultad = nueva_dificultad;
            std::cout <<  "Se ha cambiado a dificultad a dificil\n";
            break;

        default:
            std::cout << "Opcion no valida.\n";
    }
}

void elegirIntervaloNumeros(int& cantidad_intentos, int intervalo_valores[], int& ajuste_dificultad_dificil){

    std::cout << "Elige el valor menor valor del invervalo: ";
    std::cin >> intervalo_valores[0];
    std::cout << "Elige el valor mayor valor del invervalo: ";
    std::cin >> intervalo_valores[1];

    cantidad_intentos = ((intervalo_valores[1] - intervalo_valores[0]) / 7) + 1;
    ajuste_dificultad_dificil = cantidad_intentos;

    if (cantidad_intentos > 10 && (intervalo_valores[1] - intervalo_valores[0]) <= 100){
        cantidad_intentos = 10;
    }else if (cantidad_intentos > 10 && (intervalo_valores[1] - intervalo_valores[0]) > 100){
        cantidad_intentos = 12;
    }

    std::cout << "Cantidad de intentos con este invervalo: " << cantidad_intentos << std::endl;

}

void elegirNumeroSecreto(int intervalo_valores[], int& numero_secreto){
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    numero_secreto = std::rand() % (intervalo_valores[1] - intervalo_valores[0] + 1) + intervalo_valores[0];
}

void nivelFacil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto){
    int eleccion_usuario;
    int ganar_juego = 0;

    for (int i = 0; i < cantidad_intentos; ++i){
        std::cout << "Ingrese el numero: ";
        std::cin >> eleccion_usuario;

        if (eleccion_usuario == numero_secreto){
            std::cout << "\nFelicidades! Haz acertado!\n";
            std::cout << "El numero secreto era: " << numero_secreto << std::endl;
            ganar_juego = 1;
            break;
        }else if (eleccion_usuario < numero_secreto){
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: el numero secreto es mayor" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }else if(eleccion_usuario > numero_secreto){
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: el numero secreto es menor" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }
    }

    if (ganar_juego == 1){
        std::cout << "\nEl juego a terminado" << std::endl;    
    }else {
        std::cout << "\nLo sentimos, el juego a terminado." << std::endl;
        std::cout << "El numero secreto era: " << numero_secreto << std::endl;  
        std::cout << "Intentelo nuevamente" << std::endl; 
    }
}

void nivelDificil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil){
    int eleccion_usuario;
    int ganar_juego = 0;
    int hirviendo = 0.5*ajuste_dificultad_dificil + 0.5;
    int caliente = 1*ajuste_dificultad_dificil + 0.5;
    int frio = 1.5*ajuste_dificultad_dificil + 0.5;
    int congelado = 2*ajuste_dificultad_dificil + 0.5;

    for (int i = 0; i < cantidad_intentos; ++i){
        std::cout << "Ingrese el numero: ";
        std::cin >> eleccion_usuario;

        if (eleccion_usuario == numero_secreto){
            std::cout << "\nFelicidades! Haz acertado!\n";
            std::cout << "El numero secreto era: " << numero_secreto << std::endl;
            ganar_juego = 1;
            break;
        }else if ((numero_secreto - eleccion_usuario) <= hirviendo && (numero_secreto - eleccion_usuario) >= -(hirviendo)){
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: hirviendo" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }else if ((numero_secreto-eleccion_usuario) <= caliente && (numero_secreto-eleccion_usuario) >= -(caliente)){
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: caliente" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }else if ((numero_secreto-eleccion_usuario) <= frio && (numero_secreto-eleccion_usuario) >= -(frio)){
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: frio" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }else{
            std::cout << "\nTe has equivocado\n";
            std::cout << "Pista: congelado" << std::endl;
            std::cout << "Cantidad de intentos restantes: " << cantidad_intentos - (i + 1) << std::endl;
        }
    }

    if (ganar_juego == 1){
        std::cout << "\nEl juego a terminado" << std::endl;    
    }else {
        std::cout << "\nLo sentimos, el juego a terminado. Intentelo nuevamente" << std::endl;
        std::cout << "El numero secreto era: " << numero_secreto << std::endl;
        std::cout << "Intentelo nuevamente" << std::endl; 
    }
}