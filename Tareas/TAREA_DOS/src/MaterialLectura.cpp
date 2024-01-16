#include "MaterialLectura.hpp"
/**
 * @file MaterialLectura.cpp
 * 
 * @brief Implementación de los métodos para los materiales de lectura.
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
 * Inicializa los atributos
 * 
 */

MaterialLectura::MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio) 
    : titulo(titulo), autor(autor), editorial(editorial), genero(genero), estado(estado), cantidad_hojas(cantidad_hojas), precio(precio) {}

void MaterialLectura::imprimirInformacion() {
    cout << "Metodo base" << endl;
}

void MaterialLectura::tamano() {
    cout << "Metodo base" << endl;
}

//Getters comunes
string MaterialLectura::obtenerTitulo(){
    return titulo;
}

string MaterialLectura::obtenerTipo(){
    return tipo_material;
}

int MaterialLectura::obtenerPrecio(){
    return precio;
}