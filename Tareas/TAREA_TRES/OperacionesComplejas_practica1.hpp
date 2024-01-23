#ifndef OperacionesComplejas_HPP
#define OperacionesComplejas_HPP

#include "OperacionesBasicas_practica1.hpp"

template<typename  T>
class OperacionesComplejas : public OperacionesBasicas<T>{
    public:
        void validarOperacion(Matriz<T> matrices, int tipo_operacion);
        void sumar(int filas, int columnas, Matriz<T> matrices);
        void restar(int filas, int columnas, Matriz<T> matrices);
        void multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices);  
};

#include "OperacionesComplejas_practica1.cpp"
#endif