import pandas as pd


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)
        print(self.datos)
