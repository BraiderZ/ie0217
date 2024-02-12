import pandas as pd


class DatosPandas():
    def __init__(self):
        self.datos = pd.read_csv("./cars_analysis/CAR DETAILS FROM CAR DEKHO.csv")

    def limpezaDatos(self):
        print(self.datos.describe())
        self.datos.dropna(inplace=True)
        self.datos.drop_duplicates(inplace=True)
        print(self.datos.describe())

    def getDatos(self):
        return self.datos
