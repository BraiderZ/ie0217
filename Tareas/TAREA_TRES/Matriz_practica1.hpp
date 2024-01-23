#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <complex>
#include <typeinfo>
#include <iomanip>
#include <type_traits>
#include <limits>


template <typename T>
class Matriz {
    public:
        int tamanoDatosMatriz();
        int operacionMatricial();
        void sumar(int filas, int columnas);
        void restar(int filas, int columnas);
        void multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2);       
        std::vector<std::vector<T>> matriz1;
        std::vector<std::vector<T>> matriz2;
    private:
        int filas;
        int columnas;
};        

#include "Matriz_practica1.cpp"
#endif