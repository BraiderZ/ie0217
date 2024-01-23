#ifndef IMPRESION_HPP
#define IMPRESION_HPP

#include "Matriz_practica1.hpp"

template<typename T>
class Impresion{
    public:
        void imprimirMatriz(const std::vector<std::vector<T>>& matriz_resultado, Matriz<T> matrices, std::string operacion);
};

#include "Impresion_practica1.cpp"
#endif
