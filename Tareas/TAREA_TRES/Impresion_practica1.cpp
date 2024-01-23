#include "Impresion_practica1.hpp"

template<typename T>
void Impresion<T>::imprimirMatriz(const std::vector<std::vector<T>>& matriz_resultado, Matriz<T> matrices, std::string operacion){
    int filas_matriz1 = matrices.matriz1.size();
    int columnas_matriz1 = matrices.matriz1[0].size();
    int filas_matriz2 = matrices.matriz2.size();
    int columnas_matriz2 = matrices.matriz2[0].size();
    int filas_matriz_reultado = matriz_resultado.size();
    int columnas_matriz_resultado = matriz_resultado[0].size();
    
    std::cout << "La " << operacion << " de la matriz: " << std::endl;
    for (int i = 0; i < filas_matriz1; ++i) {
            for (int j = 0; j < columnas_matriz1; ++j) {
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