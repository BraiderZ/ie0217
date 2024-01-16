#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP
#include "MaterialOrdenado.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * @file MaterialPrecio.hpp
 * 
 * @brief Prototipo de la clase MaterialPrecio.
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

class MaterialPrecio {
    public:
        //Crea un vector con los precios de todos los materiales existentes
        void crearVectorPrecios(int ascendente_descendente, MaterialOrdenado* materiales);
        //Ordena los precios
        void ordenarPrecios(int ascendente_descendente, MaterialOrdenado* materiales);
        //Imprime los precios
        void imprimirPrecios(MaterialOrdenado* materiales);
        //Vector que almacena los precios
        vector<int> precios_materiales;
};


#endif