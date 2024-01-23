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
        std::vector<std::vector<T>> matriz1;
        std::vector<std::vector<T>> matriz2;
    private:
        int filas;
        int columnas;
};        

#include "Matriz_practica1.cpp"
#endif