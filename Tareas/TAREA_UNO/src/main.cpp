#include "funciones.hpp"
#include <string>
#include <iostream>
#include <random>

/**
 * @file main.cpp
 * 
 * @brief Se encarga de la inicialización del juego. Invoca y envía los parámetros iniciales al resto del programa
 * 
 * @var nivel_dificultad
 * Flag encargada de determinar una de las dos dificultades del juego (dificultad fácil por defecto).  
 * @var cantidad_intentos
 * Cantidad de intentos para adivinar el número secreto. (4 por defecto)
 * @var intervalo_valores
 * Arreglo que posee el número menor y mayor definido por el usuario (0-20 por defecto). 
 * @var ajuste_dificultad_dificil
 * Valor necesario para definir el intervalo de valores que irán dentro de las diferentes pistas en la dificultad dificil (3 por defecto). 
 * @var numero_secreto
 * Número que deberá de avriguar el usuario en cada partida. 
 * 
 * @return int
 * 
 * @license 
 * Copyright 2024 [Luis José Brenes Campos]
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

int main(){
    int nivel_dificultad = 1;
    int cantidad_intentos = 4;
    int intervalo_valores[2] = {0, 20};
    int ajuste_dificultad_dificil = 3;
    int numero_secreto = 0;

    while(1){
        mostrarMenu();
        procesarOpcion(nivel_dificultad, cantidad_intentos, intervalo_valores, numero_secreto, ajuste_dificultad_dificil);
    }
    return 0;
}