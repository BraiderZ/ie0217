from time import sleep
from Alergias import Alergias
from EvaluacionEspecifica import EvalucionEspecifica

alergias_sistema = Alergias("Alergias.txt")


def opcionMenu():
    print("----Bienvenido al sistema de manejo de alergias!----")
    print("Opciones:")
    print("1. Imprimir informacion de las alergias")
    print("2. Ingresar su puntuacion de alergia")
    print("3. Ingresar los tipos de alergia que posee")
    print("4. Agregar una nueva alergia")
    print("5. Salir")
    opcion = int(input("Elija una opcion: "))
    return opcion


def procesarOpcion(opcion, alergias_sistema):
    if (opcion == 1):
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
        evaluacion_usuario = EvalucionEspecifica()
        evaluacion_usuario.evaluarAlergias(alergias_sistema)
    elif (opcion == 5):
        print("Gracias por usar nuestro sistema de alergias!")
        exit(0)


while True:
    try:
        opcion = opcionMenu()
        procesarOpcion(opcion, alergias_sistema)
    except ValueError:
        print("Error: Haz ingresado un valor incorrecto... Intente nuevamente")
        sleep(1)
