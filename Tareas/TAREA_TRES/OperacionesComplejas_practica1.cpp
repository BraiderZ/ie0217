#include "OperacionesComplejas_practica1.hpp"

template<typename T>
void OperacionesComplejas<T>::validarOperacion(Matriz<T> matrices, int tipo_operacion) {
    OperacionesBasicas<T>::validarOperacion(matrices, tipo_operacion);
}

template<typename T>
void OperacionesComplejas<T>::sumar(int filas, int columnas, Matriz<T> matrices) {
    OperacionesBasicas<T>::sumar(filas, columnas, matrices);
}

template<typename T>
void OperacionesComplejas<T>::restar(int filas, int columnas, Matriz<T> matrices) {
    OperacionesBasicas<T>::restar(filas, columnas, matrices);
}

template<typename T>
void OperacionesComplejas<T>::multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices) {
    OperacionesBasicas<T>::multiplicar(filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2, matrices);
}