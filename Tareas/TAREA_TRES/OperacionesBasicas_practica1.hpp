#ifndef OperacionesBasicas_HPP
#define OperacionesBasicas_HPP

#include "Matriz_practica1.hpp"
#include "Impresion_practica1.hpp"

template<typename T>
class OperacionesBasicas{
    public:
        void validarOperacion(Matriz<T> matrices, int tipo_operacion);
        void sumar(int filas, int columnas, Matriz<T> matrices);
        void restar(int filas, int columnas, Matriz<T> matrices);
        void multiplicar(int filas_matriz1, int columnas_matriz1, int filas_matriz2, int columnas_matriz2, Matriz<T> matrices);  
};



#include "OperacionesBasicas_practica1.cpp"
#endif