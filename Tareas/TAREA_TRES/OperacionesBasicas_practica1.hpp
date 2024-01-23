#ifndef OperacionesBasicas_HPP
#define OperacionesBasicas_HPP

#include "Matriz_practica1.hpp"

template<typename T>
class OperacionesBasicas{
    public:
        void validarOperacion(Matriz<T> matrices, int tipo_operacion);
};



#include "OperacionesBasicas_practica1.cpp"
#endif