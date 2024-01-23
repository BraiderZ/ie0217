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
                std::cout << "Si se puede sumar o restar";
            }else{
                throw std::runtime_error("Para suma y resta las matrices deben tener las mismas dimenciones.");
            }
        }else {
            if (columnas_matriz1 == filas_matriz2){
                std::cout << "Si se puede multiplicar";
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