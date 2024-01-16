#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @file MaterialOrdenado.hpp
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


class MaterialOrdenado  {
    public:
        //Dos agregar material porque depende del tipo en cuestión
        void agregarMaterial(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio, string tipo);
        void agregarMaterial(string titulo, string autor, string genero, string estado, int duracion, int precio, string tipo);
        void eliminarMaterial(string titulo);
        void buscarMaterialPorTitulo(string titulo);
        void buscarMaterialesPorTipo(int tipo);
        //Funcionalidades fuera de lo pedido pero necesarias para el funcionamiento de otros métodos y funciones
        void buscarMaterialPorPrecio(int precio);
        void tamanoMaterial(string nombre);
        //Liberar la memoria reservada
        virtual ~MaterialOrdenado();
        //Vectores que almacenan todos los materiales dependiendo de su tipo
        vector<Noticia*> materiales_noticia;
        vector<Libro*> materiales_libro;
        vector<Pelicula*> materiales_pelicula;
        vector<Podcast*> materiales_podcast;
};

#endif