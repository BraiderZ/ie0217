#include "MaterialPrecio.hpp"
/**
 * @file MaterialPrecio.cpp
 * 
 * @brief Implementación de la clase MaterialPrecio.
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
 * Itera dentro de todos los vectores de cada tipo de material y va obteniendo los precios de cada uno
 * @param ascendente_descendente Bandera encargada de determinar el tipo de acomodo elegido por el usuario
 */
void MaterialPrecio::crearVectorPrecios(int ascendente_descendente, MaterialOrdenado* materiales){
    for (Noticia* material : materiales->materiales_noticia) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Libro* material : materiales->materiales_libro) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Pelicula* material : materiales->materiales_pelicula) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Podcast* material : materiales->materiales_podcast) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

    //Invoca las funciones para terminar el proceso
    ordenarPrecios(ascendente_descendente, materiales);
    imprimirPrecios(materiales);
}

/**
 * Por medio de bubble sort, ordena de manera ascendente o descendente los precios de todos los materiales
 * 
 */
void MaterialPrecio::ordenarPrecios(int ascendente_descendente, MaterialOrdenado* materiales) {
    int n = precios_materiales.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            switch (ascendente_descendente) {
                case 1:
                    if (precios_materiales[j] > precios_materiales[j + 1]) {
                        swap(precios_materiales[j], precios_materiales[j + 1]);
                    }
                    break;
                case 2:
                    if (precios_materiales[j] < precios_materiales[j + 1]) {
                        swap(precios_materiales[j], precios_materiales[j + 1]);
                    }
                    break;
            }
        }
    }
}

/**
 * Cuando tenemos ordenados los precios, iteramos por cada precios y vamos pidiendote al método creado en MaterialOrdenado, que busque cuál es el material con dicho precio y lo imprima
 * 
 */
void MaterialPrecio::imprimirPrecios(MaterialOrdenado* materiales){
    for (int precio : precios_materiales) {
        materiales->buscarMaterialPorPrecio(precio);
    }
}