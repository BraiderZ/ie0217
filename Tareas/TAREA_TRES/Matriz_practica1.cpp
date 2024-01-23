#include "Matriz_practica1.hpp"

/**
 * @file Matriz_pratica1.cpp
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
 * @brief Toma el tamaño de la matriz elegida por el usuario y agrega los datos dados por el usuario 
 * 
 * @return ** int 
 */

template<typename T>
int Matriz<T>::tamanoDatosMatriz(){
        //Guardamos el tipo del objeto creado
        const std::type_info& tipo = typeid(T);
    
    try{   
        //Si concuerda con los tres tipos posibles, sigue el funcionamiento
        if (tipo == typeid(int) || tipo == typeid(double) || tipo == typeid(std::complex<float>)) {
            //Loop para automatizar la creación de ambas matrices
            for (int i = 1; i <= 2; ++i) {
                std::cout << "Ingrese la cantidad de filas de la matriz " << i << ": ";
                std::cin >> filas;
                std::cout << "Ingrese la cantidad de columnas de la matriz " << i << ": ";
                std::cin >> columnas;

                //Agregamos el tamaño a las matrices si cumple con un tamaño correcto
                if (filas >= 2 && columnas >= 2) {
                    if (i == 1) {
                        matriz1.resize(filas, std::vector<T>(columnas));
                    } else {
                        matriz2.resize(filas, std::vector<T>(columnas));
                    }
                } else {
                    throw 0;
                }

                for (int j = 0; j < filas; j++) {
                    for (int k = 0; k < columnas; k++) {
                        //En caso de ser una matriz compleja, es importante recordarle al usuario cómo agregar los datos
                        if(tipo == typeid(std::complex<float>)){
                            std::cout << "Ingrese el elemento en la posicion (" << j + 1 << "," << k + 1 << ")\nAl ser compleja ingrese los valores de la siguiente manera: '(parte real, parte imaginaria)': ";
                        }else{
                            std::cout << "Ingrese el elemento en la posicion (" << j + 1 << "," << k + 1 << "): ";
                        }
                        std::string entrada;
                        std::cin >> entrada;

                        //Ya que cuando la matriz es compleja un 'cin' no funcionará de manera correcta, utilizamos iss para que reconoca el tipo de dato ingresado
                        std::istringstream iss(entrada);
                        T elemento;
                        iss >> elemento;


                        //Verificamos que los datos agregados sean correctos
                        if (iss.fail()) {
                            throw 1;
                        }
                        //Agregamos los datos a la matriz correspondiente
                        if (i == 1){
                            matriz1[j][k] = elemento;
                        }else{
                            matriz2[j][k]= elemento;
                        }
                                
                    }
                }
            }

        } else {
            throw std::runtime_error("El tipo de dato especificado no está permitido");
        }
    }catch (std::exception& e){
        std::cout << std::endl;
        std::cerr << "Error detectado: " << e.what() << std::endl;
        return 0;
    }catch (int excepcion){
        if (excepcion == 0){
            std::cout << std::endl;
            std::cout << "Error: El tamano de la matriz es invalido. Debe poseer minimo tamano 2x2." << std::endl;
            return 0;
        }else if (excepcion == 1){
            std::cout << std::endl;
            std::cout << "Error: El valor ingresado no concuerda con el tipo de dato elegido." << std::endl;
            return 0;
        }
    }
    //Retornamos 1 si podemos continuar con la ejecución del programa
    return 1;
}

/**
 * @brief Método que imprime las diferentes operaciones matriciales y toda la elegida por el usuario para retornala
 * 
 * @return ** template<typename T> 
 */
template<typename T>
int Matriz<T>::operacionMatricial(){
    int operacion;
    std::cout << "\n---Operaciones basicas con matrices---\n";
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicacion" << std::endl;
    std::cout << "Elija una opcion: ";
    try {
        std::cin >> operacion;
        std::cout << std::endl;
        if (std::cin.fail() || (operacion != 1 && operacion != 2 && operacion != 3)){
            throw std::runtime_error("Error: la operacion matricial elegida no existe dentro de lo establecido.");
        }
    }catch (std::exception& e){
        std::cout << std::endl;
        std::cerr << "Error detectado: " << e.what() << std::endl;
        //En caso de que la opción sea inválida, retorna 0
        return 0;
    }
    return operacion;
}
