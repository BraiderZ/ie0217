import pandas as pd


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)
        print(self.datos)


datos_csv = DatosCsv("MER_T01_09.csv")
