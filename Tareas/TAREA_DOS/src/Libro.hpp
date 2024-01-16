#ifndef LIBRO_HPP
#define LIBRO_HPP
#include "MaterialLectura.hpp"
#include <iostream>
#include <string>
using namespace std;
/**
 * @file Libro.hpp
 * 
 * @brief Prototipo para la clase libro.
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

class Libro : public MaterialLectura {
    public:
        Libro(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio);
        void imprimirInformacion() override;
        void tamano() override;
        virtual ~Libro();
    protected:
        //Nuevos atributos
        string resumen;
        string material_relacionado;

};

#endif 