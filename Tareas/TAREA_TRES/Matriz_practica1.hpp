#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <complex>

using namespace std;

template <typename T>
class Matriz {
    public:
        void tamanoDatosMatriz();
        void operacionMatricial();
        T get_matrices();
    private:
        vector<T> matriz1;
        vector<T> matriz 2;
};

#endif