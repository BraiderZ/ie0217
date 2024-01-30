import cProfile
from time import sleep
from Alergias import Alergias
from EvaluacionEspecifica import EvalucionEspecifica
from TiposAlergia import TiposAlergia
from EvaluacionGeneral import EvaluacionGeneral




def opcionMenu():
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
    elif (opcion == 3):
        tipos_alergia = TiposAlergia()
        tipos_alergia.opcionIngresar(alergias_sistema)
        evaluacion = EvaluacionGeneral()
        if (tipos_alergia.opcion == 1 or tipos_alergia.opcion == 2 or tipos_alergia.opcion == 3):
            evaluacion.calcularPuntuacion(tipos_alergia)
    elif (opcion == 4):
        alergias_sistema.nuevaAlergia()
    elif (opcion == 5):
        print("Gracias por usar nuestro sistema de alergias!")
        return 1
    else:
        print("La opcion elegida es invalida\n")

def main():
    alergias_sistema = Alergias("Alergias.txt")
    seguir_ejecuntado = None
    while seguir_ejecuntado is None:
        try:
            opcion = opcionMenu()
            seguir_ejecuntado = procesarOpcion(opcion, alergias_sistema)
        except ValueError:
            print("Error: Haz ingresado un valor incorrecto... Intente nuevamente")
            sleep(1)

if __name__ == "__main__":
    # Crear un objeto cProfile
    profiler = cProfile.Profile()

    # Iniciar el perfilado
    profiler.enable()

    # Ejecutar el código a perfilar
    main()

    # Detener el perfilado
    profiler.disable()

    # Imprimir estadísticas
    profiler.print_stats(sort='cumulative')