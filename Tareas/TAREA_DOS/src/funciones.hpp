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
 * Muestra el menú de la biblioteca.
 */
void mostrarMenu();

/**
 * Procesa la opción seleccionada por el usuario.
 */
void procesarOpcion(MaterialOrdenado* materiales, MaterialPrecio precio);

/**
 * Procesa la información para decidir si agregar un nuevo material o buscar un material
 * 
 * @param tipo Representa el tipo de material que se va a crear
 * @param buscar Opcion de busqueda elegida por el usuario
 */

void procesar_informacion(int tipo, MaterialOrdenado* materiales);
void procesar_informacion(int buscar, MaterialOrdenado* materiales, MaterialPrecio precio);
#endif