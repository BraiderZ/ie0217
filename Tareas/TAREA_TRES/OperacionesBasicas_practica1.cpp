#include "OperacionesBasicas_practica1.hpp"

template<typename T>
void OperacionesBasicas<T>::validarOperacion(Matriz<T> matrices, int tipo_operacion){
    int filas_matriz1 = matrices.matriz1.size();
    int columnas_matriz1 = (filas_matriz1 > 0) ? matrices.matriz1.at(0).size() : 0;
    int filas_matriz2 = matrices.matriz2.size();
    int columnas_matriz2 = (filas_matriz2 > 0) ? matrices.matriz2.at(0).size() : 0;
    try{
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
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "suma");
}

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
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "resta");
}

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
    Impresion<T> imprimir;
    imprimir.imprimirMatriz(matriz_resultado, matrices, "multiplicacion");
}