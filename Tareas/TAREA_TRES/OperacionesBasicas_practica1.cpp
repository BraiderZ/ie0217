#include "OperacionesBasicas_practica1.hpp"

/**
 * @file OperacionesBasicas_practica1.cpp
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
 * @brief Verifica que el tamaño de las matrices cumple con las medidas para que la operación elegida sea posible
 * 
 * @param matrices Clase que posee las matrices a operar
 * @param tipo_operacion Operación a realizar
 * 
 * @return ** int 
 */
template<typename T>
void OperacionesBasicas<T>::validarOperacion(Matriz<T> matrices, int tipo_operacion){
    //Verificamos el tamaño de las matrices
    int filas_matriz1 = matrices.matriz1.size();
    int columnas_matriz1 = (filas_matriz1 > 0) ? matrices.matriz1.at(0).size() : 0;
    int filas_matriz2 = matrices.matriz2.size();
    int columnas_matriz2 = (filas_matriz2 > 0) ? matrices.matriz2.at(0).size() : 0;
    try{
        /**
         * Si es suma o resta las dimensiones tiene que ser iguales
         * De ser así, invoca la operación correspondiente
         */
        if (tipo_operacion == 1 || tipo_operacion == 2) {
            if(filas_matriz1 == filas_matriz2 && columnas_matriz1 == columnas_matriz2){
                if(tipo_operacion == 1){
                    sumar(filas_matriz1, columnas_matriz2, matrices);
                }else{
                    restar(filas_matriz1, columnas_matriz2, matrices);
                }
            }else{
                throw std::runtime_error("Para suma y resta las matrices deben tener las mismas dimenciones.");
            }
        }else {
            /**
            * Si es multiplicación, la matriz 1 debe tener las misma columnas que filas la matriz 2
            * De ser así, invoca la operación correspondiente
            */
            if (columnas_matriz1 == filas_matriz2){
                multiplicar(filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2, matrices);
            }else{
                throw std::runtime_error("Para multiplicacion la matriz 1 debe tener las mismas columnas que las filas de la matriz 2.");
            }
        }
    }catch (std::exception& e){
        std::cout << std::endl;
        std::cerr << "Error detectado: " << e.what() << std::endl;
        return;
    }
}

/**
 * @brief Suma las matrices
 * 
 * Al ser matrices para suma y resta, solo se deben enviar una de las dos cantidades de cada fila y columna para crear una nueva matriz con esas dimensiones
 * @param filas 
 * @param columnas 
 *
 * @param matrices Posee las matrices a sumar
 */
template<typename T>
void OperacionesBasicas<T>::sumar(int filas, int columnas, Matriz<T> matrices) {
    std::vector<std::vector<T>> matriz_resultado;
    matriz_resultado.resize(filas, std::vector<T>(columnas));
    for (int i = 0; i < filas; ++i) { 
        for (int j = 0; j < columnas; ++j) { 
            T valor_matriz1 = matrices.matriz1[i][j];
            T valor_matriz2 = matrices.matriz2[i][j];
            T resultado = valor_matriz1 + valor_matriz2;
            matriz_resultado[i][j] = resultado;
        }
    }
    //Una vez hecha la operación e imprime las 3 matrices. Envía un string con la operación correspondiente 
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "suma");
}

/**
 * @brief Resta las matrices
 * 
 * Al ser matrices para suma y resta, solo se deben enviar una de las dos cantidades de cada fila y columna para crear una nueva matriz con esas dimensiones
 * @param filas 
 * @param columnas 
 *
 * @param matrices Posee las matrices a restar
 */
template<typename T>
void OperacionesBasicas<T>::restar(int filas, int columnas, Matriz<T> matrices) {
    std::vector<std::vector<T>> matriz_resultado;
    matriz_resultado.resize(filas, std::vector<T>(columnas));

    for (int i = 0; i < filas; ++i) {  // Corregir aquí, iniciar desde 0
        for (int j = 0; j < columnas; ++j) {  // Corregir aquí, iniciar desde 0
            T valor_matriz1 = matrices.matriz1[i][j];
            T valor_matriz2 = matrices.matriz2[i][j];
            T resultado = valor_matriz1 - valor_matriz2;
            matriz_resultado[i][j] = resultado;
        }
    }
    //Una vez hecha la operación e imprime las 3 matrices. Envía un string con la operación correspondiente 
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "resta");
}

/**
 * @brief Multiplica las matrices
 * 
 * Al ser matrices a multiplicar, se deben enviar todas las medidas
 * @param filas_matriz1
 * @param columnas_matriz1
 * @param filas_matriz2
 * @param columnas_matriz2
 *
 * @param matrices Posee las matrices a multiplicar
 */

template<typename T>
void OperacionesBasicas<T>::multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices) {
    std::vector<std::vector<T>> matriz_resultado;
    matriz_resultado.resize(filas_matriz1, std::vector<T>(columnas_matriz2, 0));

    for (int i = 0; i < filas_matriz1; ++i) {
        for (int j = 0; j < columnas_matriz2; ++j) {
            for (int k = 0; k < columnas_matriz1; ++k) {
                matriz_resultado[i][j] += matrices.matriz1[i][k] * matrices.matriz2[k][j];
            }
        }
    }
    //Una vez hecha la operación e imprime las 3 matrices. Envía un string con la operación correspondiente 
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "multiplicacion");
}