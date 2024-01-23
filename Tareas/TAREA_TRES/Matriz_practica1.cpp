#include "Matriz_practica1.hpp"

template<typename T>
int Matriz<T>::tamanoDatosMatriz(){
        const std::type_info& tipo = typeid(T);
    
    try{   
        if (tipo == typeid(int) || tipo == typeid(double) || tipo == typeid(std::complex<float>)) {
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

                for (int j = 0; j < filas; j++) {
                    for (int k = 0; k < columnas; k++) {
                        if(tipo == typeid(std::complex<float>)){
                            std::cout << "Ingrese el elemento en la posicion (" << j + 1 << "," << k + 1 << ")\nAl ser compleja ingrese los valores de la siguiente manera: '(parte real, parte imaginaria)': ";
                        }else{
                            std::cout << "Ingrese el elemento en la posicion (" << j + 1 << "," << k + 1 << "): ";
                        }
                        std::string entrada;
                        std::cin >> entrada;

                        std::istringstream iss(entrada);
                        T elemento;
                        iss >> elemento;

                        if (iss.fail()) {
                            throw 1;
                        }
                        if (i == 1){
                            matriz1[j][k] = elemento;
                        }else{
                            matriz2[j][k]= elemento;
                        }
                                
                    }
                }
            }

        } else {
            throw std::runtime_error("El tipo de dato especificado no está permitido");
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
