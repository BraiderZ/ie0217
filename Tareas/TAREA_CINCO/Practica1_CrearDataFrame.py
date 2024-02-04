import pandas as pd
from time import sleep


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)

    def limpiarDatos(self):
        filas_eliminar = []
        for indices, filas in self.datos.iterrows():
            for valores in filas:
                if pd.isna(valores):
                    filas_eliminar.append(indices)
                    print(filas)
                    break
        if not len(filas_eliminar) == 0:
            print("Limpiando datos...")
            sleep(3)
            self.datos = self.datos.drop(filas_eliminar)
            print(self.datos)
