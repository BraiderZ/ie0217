#include "Matriz_practica1.hpp"

template<typename T>
void Matriz<T>::tamanoDatosMatriz(){
        const std::type_info& tipo = typeid(T);
    
    try{
        
        if (tipo == typeid(int) || tipo == typeid(double) || tipo == typeid(std::complex<double>)) {
            for (int i = 1; i <= 2; ++i){
                std::cout << "Ingrese la cantidad de filas de la matriz " << i << ": ";
                std::cin >> filas;
                std::cout << "Ingrese la cantidad de columnas de la matriz " << i << ": ";
                std::cin >> columnas;

                if (filas >= 2 && columnas >= 2){    
                    if (i == 1){
                        matriz1.resize(filas, std::vector<T>(columnas));
                    } else{
                        matriz2.resize(filas, std::vector<T>(columnas));
                    }
                }else{
                    throw 0;
                }
            }
        } else {
            throw std::runtime_error("Error: el tipo de dato especificado, no esta permitido");
        }
    int filas_matriz1 = matriz1.size();
    int columnas_matriz1 = (filas_matriz1 > 0) ? matriz1.at(0).size() : 0;

    std::cout << "Tamano de la matriz1: " << filas_matriz1 << "x" << columnas_matriz1 << std::endl;

    int filas_matriz2 = matriz2.size();
    int columnas_matriz2 = (filas_matriz2 > 0) ? matriz2.at(0).size() : 0;

    std::cout << "Tamano de la matriz2: " << filas_matriz2 << "x" << columnas_matriz2 << std::endl;


    }catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    }catch (int excepcion){
        if (excepcion == 0){
            std::cout << "El tamano de la matriz es invalido. Debe poseer minimo tamano 2x2" << std::endl;
        }
    }
}