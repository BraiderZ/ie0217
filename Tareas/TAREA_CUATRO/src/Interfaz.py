from time import sleep
from Alergias import Alergias
from EvaluacionEspecifica import EvaluacionEspecifica
from TiposAlergia import TiposAlergia
from EvaluacionGeneral import EvaluacionGeneral
"""
Interfaz.py

Interfaz encargada de iniciar el programa


@license:
Copyright 2024 [Luis José Brenes Campos]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

def opcionMenu():
    """
    Función que muestra el menú de opciones y solicita al usuario que elija una opción.

    Returns:
        int: Opción elegida por el usuario.
    """
    print("\n----Bienvenido al sistema de manejo de alergias!----\n")
    print("Opciones:")
    print("1. Imprimir informacion de las alergias")
    print("2. Ingresar su puntuacion de alergia")
    print("3. Ingresar los tipos de alergia que posee")
    print("4. Agregar una nueva alergia")
    print("5. Salir")
    opcion = int(input("Elija una opcion: "))
    return opcion

def procesarOpcion(opcion, alergias_sistema):
    """
    Función que procesa la opción elegida por el usuario y realiza las acciones correspondientes.

    Args:
        opcion (int): Opción elegida por el usuario.
        alergias_sistema (Alergias): Instancia de la clase Alergias.

    Raises:
        ValueError: Se lanza si se ingresa un valor no válido.

    """
    if (opcion == 1):
        """
        En caso de elegir la opción 1, invoca el método encargado de la impresión
        Da paso a una nueva condición dependiendo de si decide imprir una o todas las alergias
        """
        print("1. Imprimir todas las alergias")
        print("2. Imprimir una alergia en específico")
        opcion_impresion = int(input("Elija una opcion: "))
        if (opcion_impresion == 1):
            
            alergias_sistema.imprimirValores(opcion_impresion)
            sleep(3)
        elif (opcion_impresion == 2):
            alergias_sistema.imprimirValores(opcion_impresion)
            sleep(1)
        else:
            print("La opcion elegida no existe")
            sleep(1)
    elif (opcion == 2):
        """
        En caso de elegir la opción 2, crea una instancia de tipo EvaluacionEspecifica para invocar su método
        """
        evaluacion_usuario = EvaluacionEspecifica()
        evaluacion_usuario.evaluarAlergias(alergias_sistema)
    elif (opcion == 3):
        """
        En caso de elegir la opción 3, crea una instancia de tipo EvaluacioGeneral y TiposAlergia
        Invoca el método para ordenar los datos dados por el usuario
        Invoca el método para imprimir los datos y calcular la puntuación
        """
        tipos_alergia = TiposAlergia()
        tipos_alergia.opcionIngresar(alergias_sistema)
        evaluacion = EvaluacionGeneral()
        if (tipos_alergia.opcion == 1 or tipos_alergia.opcion == 2 or tipos_alergia.opcion == 3):
            evaluacion.calcularPuntuacion(tipos_alergia)
    elif (opcion == 4):
        """
        En caso de elegir la opción 4, invoca al método encargado de ello
        """
        alergias_sistema.nuevaAlergia()
    elif (opcion == 5):
        """
        En caso de elegir la opción 5, cierra el programa completamente
        """
        print("Gracias por usar nuestro sistema de alergias!")
        exit(0)
    else:
        print("La opcion elegida es invalida\n")

def main():
    """
    Función principal que inicia el sistema de manejo de alergias.
    """
    alergias_sistema = Alergias("Alergias.txt")
    while True:
        try:
            opcion = opcionMenu()
            procesarOpcion(opcion, alergias_sistema)
        except ValueError:
            print("Error: Haz ingresado un valor incorrecto... Intente nuevamente")
            sleep(1)



main()
