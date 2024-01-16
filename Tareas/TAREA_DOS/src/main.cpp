#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"
#include "funciones.hpp"

/**
 * @file main.cpp
 * 
 * @brief Se encarga de la inicialización de la blibioteca. Invoca y envía los parámetros iniciales al resto del programa.
 * 
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
    // Se crean los objetos de las clases encargadas de manejar el resto de clases
    MaterialOrdenado* materiales = new MaterialOrdenado();
    MaterialPrecio precio;

    while(1){
        mostrarMenu();
        procesarOpcion(materiales, precio);
    }
    return 0;
}