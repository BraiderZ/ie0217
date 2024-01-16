#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP
#include <iostream>
#include <string>
using namespace std;

/**
 * @file MaterialAudiovisual.hpp
 * 
 * @brief Atributos y prototipos de los métodos para los materiales audiovisuales.
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

class MaterialAudiovisual {
    public:
        //Construtor
        MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio);
        //Se encarga de saber el tamaño del material en cuestión
        virtual void tamano();
        //Imprime la informaciónn
        virtual void imprimirInformacion();
        //Simples getters
        string obtenerTitulo();
        string obtenerTipo();
        int obtenerPrecio();

    protected:
        //Atributos
        string titulo;
        string grupo;
        string tipo_material;
        string autor;
        string genero;
        string estado;
        int duracion;
        int precio;

};

#endif 