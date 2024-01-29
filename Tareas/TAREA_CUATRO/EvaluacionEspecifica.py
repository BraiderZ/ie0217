import pandas as pd
from time import sleep

class EvalucionEspecifica():
    def __init__(self):
        self.puntuacion_usuario = int(input("Ingrese su puntuacion de alergia: "))

    def imprimirResultados(self, combinacion_valores, combinacion_nombres):
        df = pd.DataFrame(
            {
                "Alergias del usuario": combinacion_nombres,
                "Valores": combinacion_valores,
            }
        )
        print(df)

    def encontrarCombinacion(self, alergias_sistema, actual, suma, combinacion_valores, combinacion_nombres):
        if suma == self.puntuacion_usuario:
            self.imprimirResultados(combinacion_valores, combinacion_nombres)
            return True

        for i in range(actual, len(alergias_sistema.valores_alergias)):
            if alergias_sistema.valores_alergias[i] not in combinacion_valores and suma + alergias_sistema.valores_alergias[i] <= self.puntuacion_usuario:
                combinacion_valores_nueva = combinacion_valores + [alergias_sistema.valores_alergias[i]]
                combinacion_nombres_nueva = combinacion_nombres + [alergias_sistema.nombres_alergias[i]]
                if self.encontrarCombinacion(alergias_sistema, i + 1, suma + alergias_sistema.valores_alergias[i], combinacion_valores_nueva, combinacion_nombres_nueva):
                    return True

        return False

    def evaluarAlergias(self, alergias_sistema):
        if self.encontrarCombinacion(alergias_sistema, 0, 0, [], []):
            print("Estas son tus alergias.\nPor favor, evita comer los alimentos mencionados en la lista.\n")
            sleep(3)
        else:
            print("No hay combinación que sume exactamente la puntuación del usuario.")