#include "funciones.hpp"
#include "OperacionesBasicas_practica1.hpp"
#include "OperacionesComplejas_practica1.hpp"

/**
 * @file main_practica1.cpp
 * 
 * @brief Implementación de la función que invoca al resto junto con sus detalles.
 * 
 * 
 * @license 
 * Copyright 2024 [Luis José Brenes Campos]
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

/**
 * @brief Invoca de manera específica, las diferentes funciones del programa
 * 
 * @return ** int 
 */
int main(){
    //Guarda en una variable, el tipo de dato elegipo por el usuario invocado la fucnión que se encarga de ello
    int opcion;
    opcion = tiposDatosMatriz();
    int tipo_operacion;

    try{
        /**
        *Swtich para los diferentes tipos de datos
        *Dependiendo del tipo de dato, se instancia un objeto de dicho tipo
        *Invoca el método encargado de pedir el tamaño de las matrices y sus valores. Dependiendo de si la operaciñón sale bien, continua con el programa
        *Si el tipo de operación es válido, crea un objeto del mismo tipo que el anterior para invocar la opción que valida e invoca la operación deseada
        */
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
                        OperacionesComplejas<complex<float>> operaciones;
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