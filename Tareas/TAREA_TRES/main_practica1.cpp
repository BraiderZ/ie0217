#include "funciones.hpp"
#include "Matriz_practica1.hpp"

int main(){
    int opcion;
    opcion = tiposDatosMatriz();
    int tipo_operacion;
    int *ptr_tipo_operacion = &tipo_operacion;

    try{
        switch (opcion){
            case 1:{
                Matriz<int> matrices;
                int continuar = matrices.tamanoDatosMatriz();
                if (continuar == 1){
                    tipo_operacion = matrices.operacionMatricial();
                }else{
                    return 0;
                }
                break;
            }
            case 2:{
                Matriz<double> matrices;
                int continuar = matrices.tamanoDatosMatriz();
                if (continuar == 1){
                    tipo_operacion = matrices.operacionMatricial();
                }else{
                    return 0;
                }
            }
            case 3:{
                Matriz<complex<double>> matrices;
                int continuar = matrices.tamanoDatosMatriz();
                if (continuar == 1){
                    tipo_operacion = matrices.operacionMatricial();
                }else{
                    return 0;
                }
            }
            default:
                throw  runtime_error("El tipo de dato elegido no entra dentro de las opciones.");
        }

    }catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    } catch (...){
        std::cout << "Error: hubo un error inesperado a la hora de elegir el tipo de la matriz." << std::endl;
    }

    if (tipo_operacion != 0){
        std::cout << "Todo bien por el momento";
    }

    return 0;
}