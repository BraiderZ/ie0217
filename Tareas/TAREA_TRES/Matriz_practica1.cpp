#include "Matriz_practica1.hpp"

template<typename T>
void Matriz<T>::tamanoDatosMatriz(){
        const std::type_info& tipo = typeid(T);
    
    try{
        
        if (tipo == typeid(int) || tipo == typeid(double) || tipo == typeid(std::complex<double>)) {
            std::cout << "Tipo permitido" << std::endl;
        } else {
            throw std::runtime_error("Error: el tipo de dato especificado, no esta permitido");
        }
    }catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    }
}