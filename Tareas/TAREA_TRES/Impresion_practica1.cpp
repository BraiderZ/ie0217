#include "Impresion_practica1.hpp"

/**
 * @file Impresio_practica1.cpp
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
 * @brief Imprime las matrices creada por el usuario y la matriz que posee el resultado de la operación
 * 
 * @param operacion String que cambia dependiendo del tipo de operación realizada por el usuario
 * @param matrices Objeto que posee las matrices creada por el usuario
 * @param matriz_resultado Matriz que da como resultado de la operación
 * 
 * @return ** int 
 */
template<typename T>
void Impresion<T>::imprimirMatriz(const std::vector<std::vector<T>>& matriz_resultado, Matriz<T> matrices, std::string operacion){
    //Guardamos las medidas de las tres matrices para el loop de cada una
    int filas_matriz1 = matrices.matriz1.size();
    int columnas_matriz1 = matrices.matriz1[0].size();
    int filas_matriz2 = matrices.matriz2.size();
    int columnas_matriz2 = matrices.matriz2[0].size();
    int filas_matriz_reultado = matriz_resultado.size();
    int columnas_matriz_resultado = matriz_resultado[0].size();
    
    //Imprimimos el tipo de operación que se realizó e impresión de las 3 matrices
    std::cout << "La " << operacion << " de la matriz: " << std::endl;
    for (int i = 0; i < filas_matriz1; ++i) {
            for (int j = 0; j < columnas_matriz1; ++j) {
                //If encargado de colocar limites a ambos lados de la matriz para una mejor vista
                if (j == 0){
                    std::cout << std::setw(8) << "|" << matrices.matriz1[i][j];
                }else if (j == columnas_matriz1-1){
                    std::cout << std::setw(8) << matrices.matriz1[i][j] << "|";
                }else{
                    std::cout << std::setw(8) << matrices.matriz1[i][j];
                }
                
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

    std::cout << "Con la matriz: " << std::endl;
    for (int i = 0; i < filas_matriz2; ++i) {
            for (int j = 0; j < columnas_matriz2; ++j) {
                if (j == 0){
                    std::cout << std::setw(8) << "|" << matrices.matriz2[i][j];
                }else if (j == columnas_matriz1-1){
                    std::cout << std::setw(8) << matrices.matriz2[i][j] << "|";
                }else{
                    std::cout << std::setw(8) << matrices.matriz2[i][j];
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    
    std::cout << "Da como resultado la matriz: " << std::endl;
    for (int i = 0; i < filas_matriz_reultado; ++i) {
            for (int j = 0; j < columnas_matriz_resultado; ++j) {
                if (j == 0){
                    std::cout << std::setw(8) << "|" << matriz_resultado[i][j];
                }else if (j == columnas_matriz1-1){
                    std::cout << std::setw(8) << matriz_resultado[i][j] << "|";
                }else{
                    std::cout << std::setw(8) << matriz_resultado[i][j];
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
}