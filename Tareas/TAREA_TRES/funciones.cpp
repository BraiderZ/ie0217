#include "funciones.hpp"

/**
 * @file funciones.cpp
 * 
 * @brief Implementación del método.
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
 * @brief Imprime las diferentes opciones que el usuario puede elegir para el tipo de dato y guarda el tipo de dato que decida
 * 
 * @param opcion Guarda el tipo de dato elegido por le usuario
 * 
 * @return ** int 
 */
int tiposDatosMatriz(){
        int opcion;

        cout << "Bienvennido a la calculadora de matrices" << endl;
        cout << "Tipos de numeros permitidos: " << endl;
        cout << "1. Numeros enteros." << endl;
        cout << "2. Numeros reales" << endl;
        cout << "3. Numeros complejos" << endl;
        cout << "Eliga el tipo de datos que tendran las matrices: ";
        cin >> opcion; 
        cout << endl;

        return opcion;
}