#include "Matriz_practica1.hpp"

template<typename T>
void Matriz<T>::tamanoDatosMatriz(){
        
    try{
        if (T == complex<double> or T == int or T == float){
            cout << "Tipo permitido" << endl;
        } else {
            throw runtime_error("Error: el tipo de dato especificado, no esta permitido")
        }
    }
}