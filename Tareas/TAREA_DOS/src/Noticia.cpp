#include "Noticia.hpp"
/**
 * @file Noticia.cpp
 * 
 * @brief Implementación de la clase noticia.
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
 * Ahora se necesita que el usuario agregue un resumen y material relacionado
 * 
 */
Noticia::Noticia(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio) 
    : MaterialLectura(titulo, autor, editorial, genero, estado, cantidad_hojas, precio) {
        this->grupo = "Lectura";
        this->tipo_material = "Noticia";

        cout << "Agregue un resumen sobre la noticia en cuestion: ";
        cin.ignore();
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nueva noticia guardado exitosamente" << endl; 
    }

void Noticia::imprimirInformacion(){
    cout << "---Informacion sobre el material de entretenimiento---" << endl;
    cout << "Grupo al que pertenece: " << grupo << endl;
    cout << "Tipo de material: " << tipo_material << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Estado: " << estado << endl;
    cout << "Tamano: " << cantidad_hojas << " hojas." << endl;
    cout << "Precio: " << precio << " colones." << endl;
    cout << "Resumen del libro: " << resumen << endl;
    cout << "Algunos materiales relacionados a la noticia son: " << material_relacionado << endl;
}

void Noticia::tamano() {
    if (cantidad_hojas <= 5){
        cout << "La noticia " << titulo << " es corta." << endl;  
    } else if (cantidad_hojas > 5 && cantidad_hojas < 10){
        cout << "La noticia " << titulo << " es mediana." << endl;
    } else {
        cout << "La noticia " << titulo << " es larga." << endl;
    }
}
Noticia::~Noticia(){

}