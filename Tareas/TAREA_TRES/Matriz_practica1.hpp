#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <complex>
#include <typeinfo>


template <typename T>
class Matriz {
    public:
        void tamanoDatosMatriz();
        void operacionMatricial();
        T get_matrices();
    private:
        std::vector<T> matriz1;
        std::vector<T> matriz2;
};

#include "Matriz_practica1.cpp"
#endif