#include "Expresiones_practica2.hpp"

/**
 * @file Expresiones_practica2.cpp
 * 
 * @brief Implementación de los métodos.
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
 * @brief Se encarga de recibir el correo del usuario y verificar si cumple con los estándares
 * 
 * @param regex Almacena el patrón de la expresión regular
 * @param correo Correo del usuario a verificar
 * @return ** void 
 */
void Expresiones::verificarExpresiones(){
    auto const regex = std::regex("^[A-Za-z0-9][A-Za-z0-9._-]{0,13}[A-Za-z0-9]@[A-Za-z]+[.]+[A-Za-z]{2,4}$");
    std::string correo;

    try{

        std::cout << "Ingrese el correo electronico a verificar: ";
        getline(std::cin, correo);

        size_t simbolo_existe = correo.find('@');

        // Verificamos que exista el símbolo @
        if (simbolo_existe == std::string::npos){
            throw std::runtime_error("El correo debe poseer el simbolo '@'.");
        }
    
        bool verificarCorreo = std::regex_search(correo,regex);

        if (verificarCorreo == true){
            std::cout << "Felicidades! Su correo cumple con los patrones establecidos para su uso." << std::endl;
        }else {
            //En caso de ser erroneo el correo, recordamos las reglas a seguir para que sea válido
            std::cout << "Lo sentimos, su correo no cumple con los patrones establecidos..." << std::endl;
            std::cout << "Siga las siguientes reglas para que su correo sea permitido: " << std::endl;
            std::cout << "1. El nombre debe poseer de 2 a 15 simbolos que pueden ser letras, numeros, guiones o puntos. Los puntos y guines no son permitidos al inicio y final del nombre." << std::endl;
            std::cout << "2. el dominio inicia con '@' y solo permite letras. Debe terminar con un punto." << std::endl;
            std::cout << "3. La extesion solo permite de 2 a 4 letras." << std::endl;
        }
    } catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    } catch (...){
        std::cout << "Error: hubo un problema a la hora de verificar el correo, intentelo nuevamente." << std::endl;
    }
}