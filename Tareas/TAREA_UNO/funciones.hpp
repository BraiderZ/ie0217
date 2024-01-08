#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>

/**
 * @file funciones.hpp
 * @brief Contiene los prototipos de las funciones utilizadas en el juego.
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
void procesarOpcion(int& nivel_dificultad, int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil);

/**
 * Permite al usuario elegir la dificultad del juego.
 * @param nivel_dificultad Nivel de dificultad actual (se actualiza).
 */
void elegirDificultad(int& nivel_dificultad);

/**
 * Permite al usuario elegir el intervalo de valores para el juego.
 * @param cantidad_intentos Cantidad de intentos disponibles (se actualiza).
 * @param intervalo_valores Intervalo de valores para el juego (se actualiza).
 * @param ajuste_dificultad_dificil Ajuste de dificultad para el nivel difícil (se actualiza).
 */
void elegirIntervaloNumeros(int& cantidad_intentos, int intervalo_valores[], int& ajuste_dificultad_dificil);

/**
 * Genera y asigna un número secreto dentro del intervalo dado.
 * @param intervalo_valores Intervalo de valores para el juego.
 * @param numero_secreto Número secreto generado (se actualiza).
 */
void elegirNumeroSecreto(int intervalo_valores[], int& numero_secreto);

/**
 * Implementa el nivel fácil del juego.
 * @param cantidad_intentos Cantidad de intentos disponibles (se actualiza).
 * @param intervalo_valores Intervalo de valores para el juego.
 * @param numero_secreto Número secreto para adivinar.
 */
void nivelFacil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto);

/**
 * Implementa el nivel difícil del juego.
 * @param cantidad_intentos Cantidad de intentos disponibles (se actualiza).
 * @param intervalo_valores Intervalo de valores para el juego.
 * @param numero_secreto Número secreto para adivinar.
 * @param ajuste_dificultad_dificil Ajuste de dificultad para el nivel difícil.
 */
void nivelDificil(int& cantidad_intentos, int intervalo_valores[], int& numero_secreto, int& ajuste_dificultad_dificil);

#endif