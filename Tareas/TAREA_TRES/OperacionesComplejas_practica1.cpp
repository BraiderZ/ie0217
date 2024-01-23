#include "OperacionesComplejas_practica1.hpp"

/**
 * @file OperacionesComplejas_practica1.cpp
 * 
 * @brief Implementación de los métodos.
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

/*
*Todos los métodos simplemente invocan el método base
*/
template<typename T>
void OperacionesComplejas<T>::validarOperacion(Matriz<T> matrices, int tipo_operacion) {
    OperacionesBasicas<T>::validarOperacion(matrices, tipo_operacion);
}

template<typename T>
void OperacionesComplejas<T>::sumar(int filas, int columnas, Matriz<T> matrices) {
    OperacionesBasicas<T>::sumar(filas, columnas, matrices);
}

template<typename T>
void OperacionesComplejas<T>::restar(int filas, int columnas, Matriz<T> matrices) {
    OperacionesBasicas<T>::restar(filas, columnas, matrices);
}

template<typename T>
void OperacionesComplejas<T>::multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices) {
    OperacionesBasicas<T>::multiplicar(filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2, matrices);
}