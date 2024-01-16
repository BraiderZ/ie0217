#include "MaterialAudiovisual.hpp"
/**
 * @file MaterialAudiovisual.cpp
 * 
 * @brief Implementación de los métodos para los materiales audiovisuales.
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
MaterialAudiovisual::MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : titulo(titulo), autor(autor), genero(genero), estado(estado), duracion(duracion), precio(precio) {}

void MaterialAudiovisual::imprimirInformacion() {
    cout << "Metodo base" << endl;
}

void MaterialAudiovisual::tamano() {
    cout << "Metodo base" << endl;
}

//Getters comunes
string MaterialAudiovisual::obtenerTitulo(){
    return titulo;
}

string MaterialAudiovisual::obtenerTipo(){
    return tipo_material;
}

int MaterialAudiovisual::obtenerPrecio(){
    return precio;
}