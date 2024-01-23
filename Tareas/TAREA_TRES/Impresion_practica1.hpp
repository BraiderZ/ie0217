#ifndef IMPRESION_HPP
#define IMPRESION_HPP

#include "Matriz_practica1.hpp"

/**
 * @file Impresio_practica1.hpp
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

template<typename T>
class Impresion{
    public:
        //Recibe las tres matrices y las imprime
        void imprimirMatriz(const std::vector<std::vector<T>>& matriz_resultado, Matriz<T> matrices, std::string operacion);
};

#include "Impresion_practica1.cpp"
#endif
