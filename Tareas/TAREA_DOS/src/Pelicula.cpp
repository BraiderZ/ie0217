#include "Pelicula.hpp"
/**
 * @file Pelicula.cpp
 * 
 * @brief Implementación de la clase película.
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
Pelicula::Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio) {
        this->grupo = "Audiovisual";
        this->tipo_material = "Pelicula";

        cout << "Agregue un resumen sobre de la pelicula en cuestion: ";
        cin.ignore();
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nueva pelicula guardado exitosamente" << endl; 
    }

void Pelicula::imprimirInformacion(){
    cout << "---Informacion sobre el material de entretenimiento---" << endl;
    cout << "Grupo al que pertenece: " << grupo << endl;
    cout << "Tipo de material: " << tipo_material << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Duracion: " << duracion << " minutos." << endl;
    cout << "Precio: " << precio << " colones." << endl;
    cout << "Resumen del libro: " << resumen << endl;
    cout << "Algunos materiales relacionados a la pelicula son: " << material_relacionado << endl;
}

void Pelicula::tamano() {
    if (duracion <= 90){
        cout << "La pelicula " << titulo << " es de duracion corta." << endl;  
    } else if (duracion > 90 && duracion < 150){
        cout << "La pelicula " << titulo << " es de duracion mediana." << endl;
    } else {
        cout << "La pelicula " << titulo << " es de duracion larga." << endl;
    }
}
Pelicula::~Pelicula(){

}