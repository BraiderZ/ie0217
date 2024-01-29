import pandas as pd


class Alergias:
    nombres_alergias = []
    valores_alergias = []

    def __init__(self, nombre_archivo):
        with open(nombre_archivo, 'r') as archivo:
            for linea in archivo:
                linea = linea.strip()
                if linea:
                    nombre, valor = linea.rsplit(' (', 1)
                    self.nombres_alergias.append(nombre)
                    self.valores_alergias.append(int(valor[:-1]))

    def imprimirValores(self, opcion):
        if (opcion == 1):
            df = pd.DataFrame(
                {
                    "Nombre de la alergia": self.nombres_alergias,
                    "Valores": self.valores_alergias,
                }
            )
            print(df)
        elif (opcion == 2):
            pass


alergias = Alergias("Alergias.txt")
alergias.imprimirValores(1)
