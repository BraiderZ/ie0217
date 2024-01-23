#ifndef OperacionesBasicas_HPP
#define OperacionesBasicas_HPP

#include "Matriz_practica1.hpp"
#include "Impresion_practica1.hpp"

/**
 * @file OperacionesBasicas_practica1.hpp
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
 * Posee el método para validar si las matrices cumplen con el tamaño de la matriz
 * Posee los métodos para las diferentes operaciones
 */

template<typename T>
class OperacionesBasicas{
    public:
        void validarOperacion(Matriz<T> matrices, int tipo_operacion);
    protected:
        void sumar(int filas, int columnas, Matriz<T> matrices);
        void restar(int filas, int columnas, Matriz<T> matrices);
        void multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices);  
};



#include "OperacionesBasicas_practica1.cpp"
#endif