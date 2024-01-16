#include "Podcast.hpp"
/**
 * @file Podcast.cpp
 * 
 * @brief Implementación de la clase podcast.
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
Podcast::Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio) {
        this->grupo = "Audiovisual";
        this->tipo_material = "Podcast";

        cout << "Agregue un resumen sobre el podcast en cuestion: ";
        cin.ignore();
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nuevo podcast guardado exitosamente" << endl; 
    }

void Podcast::imprimirInformacion(){
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
    cout << "Algunos materiales relacionados al podcast son: " << material_relacionado << endl;
}

void Podcast::tamano() {
    if (duracion <= 30){
        cout << "El podcast " << titulo << " es de duracion corta." << endl;  
    } else if (duracion > 30 && duracion < 90){
        cout << "El podcast " << titulo << " es de duracion mediana." << endl;
    } else {
        cout << "El podcast " << titulo << " es de duracion larga." << endl;
    }
}

Podcast::~Podcast(){

}