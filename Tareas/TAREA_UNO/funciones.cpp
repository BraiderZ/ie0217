#include "funciones.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @file funciones.cpp
 * 
 * @brief Implementación de las funciones para el juego de adivinar el número.
 */

/**
 * Muestra el menú del juego. Un total de 4 opciones.
 */
void mostrarMenu(){
    std::cout << "\n-----Adivina el entero!-----\n";
    std::cout << "1. Iniciar el juego\n";
    std::cout << "2. Elegir dificultad\n";
    std::cout << "3. Elegir el intervalo de valores\n";
    std::cout <<  "4. Salir del juego\n";
}

/**
 * @brief Procesa la opción ingresada por el usuario y realiza las acciones correspondientes.
 * 
 * @param nivel_dificultad Nivel de dificultad actual.
 * @param cantidad_intentos Cantidad de intentos para adivinar.
 * @param intervalo_valores Arreglo con el intervalo de valores.
 * @param numero_secreto Número secreto que debe adivinar el usuario.
 * @param ajuste_dificultad_dificil Valor de ajuste para la dificultad difícil.
 * 
 * @var opcion
 * Se encarga de guardar la opción elegida por el usuario.
 */
void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;
    // Se creó un switch para separar de mejor manera las posibles opciones del usuario e invocar las funciones correspondientes a cada una.
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

/**
 * @brief Permite al usuario elegir la dificultad del juego.
 * 
 * @param nivel_dificultad Nivel de dificultad actual (se actualiza con la nueva dificultad).
 */
void elegirDificultad(int& nivel_dificultad){
    int nueva_dificultad;

    std::cout <<  "\nNiveles disponibles\n";
    std::cout <<  "1. Nivel facil\n";
    std::cout <<  "2. Nivel dificil\n";
    std::cout << "Elige una dificultad: ";
    std::cin >> nueva_dificultad;

    // Nuevamente switch facilita organizar las posibles opciones.
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

/**
 * @brief Permite al usuario elegir el intervalo de números para adivinar.
 * 
 * @param cantidad_intentos Cantidad de intentos para adivinar (se actualiza).
 * @param intervalo_valores Arreglo con el intervalo de valores (se actualiza con la nueva selección).
 * @param ajuste_dificultad_dificil Valor de ajuste para la dificultad difícil (se actualiza).
 */
void elegirIntervaloNumeros(int& cantidad_intentos, int intervalo_valores[], int& ajuste_dificultad_dificil){

    std::cout << "Elige el valor menor valor del invervalo: ";
    std::cin >> intervalo_valores[0];
    std::cout << "Elige el valor mayor valor del invervalo: ";
    std::cin >> intervalo_valores[1];

    // Se verifica la cantidad de numeros en el intervalo, se divide entre 7 (mejor ajuste) y se suma uno para evitar que la cantidad de intentos sea 0.
    cantidad_intentos = ((intervalo_valores[1] - intervalo_valores[0]) / 7) + 1;
    // El resultado es el mismo para ajustar la dificultad del modo dificil
    ajuste_dificultad_dificil = cantidad_intentos;

    // Cuando el juego supera cierta cantidad de posibles respuestas, se debe establecer un máximo de intentos, si no, el juego se hace muy sencillo.
    if (cantidad_intentos > 10 && (intervalo_valores[1] - intervalo_valores[0]) <= 100){
        cantidad_intentos = 10;
    }else if (cantidad_intentos > 10 && (intervalo_valores[1] - intervalo_valores[0]) > 100){
        cantidad_intentos = 12;
    }

    std::cout << "Cantidad de intentos con este invervalo: " << cantidad_intentos << std::endl;

}

/**
 * @brief Elige un número secreto aleatorio dentro del intervalo especificado.
 * 
 * @param intervalo_valores Arreglo con el intervalo de valores.
 * @param numero_secreto Número secreto que debe adivinar el usuario (se actualiza con el nuevo número).
 */
void elegirNumeroSecreto(int intervalo_valores[], int& numero_secreto){

    // Utiliza el tiempo de la máquina para elegir un valor aleatorio.
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    numero_secreto = std::rand() % (intervalo_valores[1] - intervalo_valores[0] + 1) + intervalo_valores[0];
}

/**
 * @brief Implementación del nivel fácil del juego.
 * 
 * @param cantidad_intentos Cantidad de intentos para adivinar.
 * @param intervalo_valores Arreglo con el intervalo de valores.
 * @param numero_secreto Número secreto que debe adivinar el usuario.
 * 
 * @var eleccion_usuario
 * Se encarga de almacenar el valor dado por el usuario en un turno  determinado
 * @var ganar_juego
 * Flag encargada de almacenar si el usuario acertó el número secreto.
 */
void nivelFacil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto){
    int eleccion_usuario;
    int ganar_juego = 0;

    // Se realiza un for con la cantidad de intentos posibles.
    for (int i = 0; i < cantidad_intentos; ++i){
        std::cout << "Ingrese el numero: ";
        std::cin >> eleccion_usuario;

        // El if se encarga de valorar los tres casos posibles.
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

    // If encargado de imprimir el final del juego, dependiendo del rersultado del usuario.
    if (ganar_juego == 1){
        std::cout << "\nEl juego a terminado" << std::endl;    
    }else {
        std::cout << "\nLo sentimos, el juego a terminado." << std::endl;
        std::cout << "El numero secreto era: " << numero_secreto << std::endl;  
        std::cout << "Intentelo nuevamente" << std::endl; 
    }
}

/**
 * @brief Implementación del nivel difícil del juego.
 * 
 * @param cantidad_intentos Cantidad de intentos para adivinar.
 * @param intervalo_valores Arreglo con el intervalo de valores.
 * @param numero_secreto Número secreto que debe adivinar el usuario.
 * @param ajuste_dificultad_dificil Valor de ajuste para la dificultad difícil.
 * 
 * @var eleccion_usuario
 * Se encarga de almacenar el valor dado por el usuario en un turno  determinado
 * @var ganar_juego
 * Flag encargada de almacenar si el usuario acertó el número secreto.
 * @var hirviendo
 * Posee una fórmula lineal para definir los valores más cercanos al número secreto.
 * @var caliente
 * Posee una fórmula lineal para definir los valores cercanos al número secreto.
 * @var frio
 * Posee una fórmula lineal para definir los valores lejanos al número secreto.
 * @var congelado
 * Posee una fórmula lineal para definir los valores más lejanos al número secreto.
 */
void nivelDificil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil){
    int eleccion_usuario;
    int ganar_juego = 0;
    int hirviendo = 0.5*ajuste_dificultad_dificil + 0.5;
    int caliente = 1*ajuste_dificultad_dificil + 0.5;
    int frio = 1.5*ajuste_dificultad_dificil + 0.5;
    int congelado = 2*ajuste_dificultad_dificil + 0.5;

    // Se realiza un for con la cantidad de intentos posibles.
    for (int i = 0; i < cantidad_intentos; ++i){
        std::cout << "Ingrese el numero: ";
        std::cin >> eleccion_usuario;

        // El if se encarga de valorar los cinco casos posibles.
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

    // If encargado de imprimir el final del juego, dependiendo del rersultado del usuario.
    if (ganar_juego == 1){
        std::cout << "\nEl juego a terminado" << std::endl;    
    }else {
        std::cout << "\nLo sentimos, el juego a terminado. Intentelo nuevamente" << std::endl;
        std::cout << "El numero secreto era: " << numero_secreto << std::endl;
        std::cout << "Intentelo nuevamente" << std::endl; 
    }
}