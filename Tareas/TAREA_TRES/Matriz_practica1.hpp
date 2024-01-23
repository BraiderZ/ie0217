#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <complex>
#include <typeinfo>
#include <iomanip>
#include <type_traits>
#include <limits>

/**
 * @file Matriz_practica1.hpp
 * 
 * @brief Prototipo de las diferentes funcionalidades de la clase.
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
 * Posee el método para que el usuario elija el tamaño y el valor de las matrices
 * Posee el método encargado de que el usuario elija el tipo de operación a realizar
 * @param matriz1 Primera matriz a operar
 * @param matriz2 Segunda matriz a operar
 * @param filas Define las filas de las matrices
 * @param columnas Define las columnas de las matrices
 */
template <typename T>
class Matriz {
    public:
        int tamanoDatosMatriz();
        int operacionMatricial();     
        std::vector<std::vector<T>> matriz1;
        std::vector<std::vector<T>> matriz2;
    private:
        int filas;
        int columnas;
};        

#include "Matriz_practica1.cpp"
#endif