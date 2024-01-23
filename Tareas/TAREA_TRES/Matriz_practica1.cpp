#include "Matriz_practica1.hpp"

template<typename T>
int Matriz<T>::tamanoDatosMatriz(){
        const std::type_info& tipo = typeid(T);
    
    try{   
        if (tipo == typeid(int) || tipo == typeid(double) || tipo == typeid(std::complex<double>)) {
            for (int i = 1; i <= 2; ++i) {
                std::cout << "Ingrese la cantidad de filas de la matriz " << i << ": ";
                std::cin >> filas;
                std::cout << "Ingrese la cantidad de columnas de la matriz " << i << ": ";
                std::cin >> columnas;

                if (filas >= 2 && columnas >= 2) {
                    if (i == 1) {
                        matriz1.resize(filas, std::vector<T>(columnas));
                    } else {
                        matriz2.resize(filas, std::vector<T>(columnas));
                    }
                } else {
                    throw 0;
                }

                for (int j = 1; j <= filas; j++) {
                    for (int k = 1; k <= columnas; k++) {
                        T valor;

                        if (tipo == typeid(std::complex<double>)) {
                            // Explicacion para valores complejos
                            std::cout << "Ingrese el valor de la parte real para la posicion [" << j << "][" << k << "] en la matriz " << i << ": ";
                            double parte_real;
                            std::cin >> parte_real;

                            std::cout << "Ingrese el valor de la parte imaginaria para la posicion [" << j << "][" << k << "] en la matriz " << i << ": ";
                            double parte_imaginaria;
                            std::cin >> parte_imaginaria;

                            std::complex<double> valor(parte_real, parte_imaginaria);
                        } else {
                            // Explicacion para valores enteros o de punto flotante
                            std::cout << "Ingrese el valor para la posicion [" << j << "][" << k << "] en la matriz " << i << ": ";
                            std::cin >> valor;
                        }

                        if (std::cin.fail()) {
                            throw 1;
                        }

                        if (i == 1) {
                            matriz1[j-1][k-1] = valor;
                        } else {
                            matriz2[j-1][k-1] = valor;
                        }
                    }
                }
            }

            int filas_matriz1 = matriz1.size();
            int columnas_matriz1 = (filas_matriz1 > 0) ? matriz1.at(0).size() : 0;

            std::cout << "Tamano de la matriz1: " << filas_matriz1 << "x" << columnas_matriz1 << std::endl;

            int filas_matriz2 = matriz2.size();
            int columnas_matriz2 = (filas_matriz2 > 0) ? matriz2.at(0).size() : 0;

            std::cout << "Tamano de la matriz2: " << filas_matriz2 << "x" << columnas_matriz2 << std::endl;
        } else {
            throw std::runtime_error("Error: el tipo de dato especificado no está permitido");
        }
    }catch (std::exception& e){
        std::cout << std::endl;
        std::cerr << "Error detectado: " << e.what() << std::endl;
        return 0;
    }catch (int excepcion){
        if (excepcion == 0){
            std::cout << std::endl;
            std::cout << "Error: El tamano de la matriz es invalido. Debe poseer minimo tamano 2x2." << std::endl;
            return 0;
        }else if (excepcion == 1){
            std::cout << std::endl;
            std::cout << "Error: El valor ingresado no concuerda con el tipo de dato elegido." << std::endl;
            return 0;
        }
    }
    return 1;
}

template<typename T>
int Matriz<T>::operacionMatricial(){
    int operacion;
    std::cout << "\n---Operaciones basicas con matrices---\n";
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicacion" << std::endl;
    std::cout << "Elija una opcion: ";
    try {
        std::cin >> operacion;
        std::cout << std::endl;
        if (std::cin.fail() || (operacion != 1 && operacion != 2 && operacion != 3)){
            throw std::runtime_error("Error: la operacion matricial elegida no existe dentro de lo establecido.");
        }
    }catch (std::exception& e){
        std::cout << std::endl;
        std::cerr << "Error detectado: " << e.what() << std::endl;
        return 0;
    }
    return operacion;
}