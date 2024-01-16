#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @file funciones.hpp
 * @brief Contiene los prototipos de las funciones utilizadas para la blibioteca.
 * 
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

/**
 * Muestra el menú del juego.
 */
void mostrarMenu();

/**
 * Procesa la opción seleccionada por el usuario.
 * @param nivel_dificultad Nivel de dificultad actual.
 * @param cantidad_intentos Cantidad de intentos disponibles.
 * @param intervalo_valores Intervalo de valores para el juego.
 * @param numero_secreto Número secreto a adivinar por el usuario.
 * @param ajuste_dificultad_dificil Ajuste de dificultad para el nivel difícil.
 */
void procesarOpcion(MaterialOrdenado* materiales, MaterialPrecio precio);

/**
 * Permite al usuario elegir la dificultad del juego.
 * @param nivel_dificultad Nivel de dificultad actual (se actualiza).
 */
void procesar_informacion(int tipo, MaterialOrdenado* materiales);

void procesar_informacion(int buscar, MaterialOrdenado* materiales, MaterialPrecio precio);
#endif