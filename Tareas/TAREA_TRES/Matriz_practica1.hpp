#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <complex>
#include <typeinfo>
#include <iomanip>


template <typename T>
class Matriz {
    public:
        int tamanoDatosMatriz();
        int operacionMatricial();
        int filas;
        int columnas;
        std::vector<std::vector<T>> matriz1;
        std::vector<std::vector<T>> matriz2;
};

#include "Matriz_practica1.cpp"
#endif