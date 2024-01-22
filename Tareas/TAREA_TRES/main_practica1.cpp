#include "funciones.hpp"
#include "Matriz_practica1.hpp"

int main(){
    int opcion;
    opcion = tiposDatosMatriz();

    try{
        switch (opcion){
            case 1:{
                Matriz<int> matrices;
                matrices.tamanoDatosMatriz();
                break;
            }
            case 2:{
                Matriz<double> matrices;
                matrices.tamanoDatosMatriz();
                break;
            }
            case 3:{
                Matriz<complex<double>> matrices;
                matrices.tamanoDatosMatriz();
                break;
            }
            default:
                throw  runtime_error("El tipo de dato elegido no entra dentro de las opciones.");
        }

    }catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    } catch (...){
        std::cout << "Error: hubo un error inesperado a la hora de elegir el tipo de la matriz." << std::endl;
    }

    return 0;
}