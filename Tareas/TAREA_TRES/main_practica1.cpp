#include "funciones.hpp"
#include "OperacionesBasicas_practica1.hpp"

int main(){
    int opcion;
    opcion = tiposDatosMatriz();
    int tipo_operacion;

    try{
        switch (opcion){
            case 1:{
                Matriz<int> matrices;
                int continuar = matrices.tamanoDatosMatriz();
                if (continuar == 1){
                    tipo_operacion = matrices.operacionMatricial();
                    if (tipo_operacion != 0){
                        OperacionesBasicas<int> operaciones;
                        operaciones.validarOperacion(matrices, tipo_operacion);
                    }
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
                    if (tipo_operacion != 0){
                        OperacionesBasicas<double> operaciones;
                        operaciones.validarOperacion(matrices, tipo_operacion);
                    }
                }else{
                    return 0;
                }
                break;
            }
            case 3:{
                Matriz<complex<float>> matrices;
                int continuar = matrices.tamanoDatosMatriz();
                if (continuar == 1){
                    tipo_operacion = matrices.operacionMatricial();
                    if (tipo_operacion != 0){
                        OperacionesBasicas<complex<float>> operaciones;
                        operaciones.validarOperacion(matrices, tipo_operacion);
                    }
                }else{
                    return 0;
                }
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