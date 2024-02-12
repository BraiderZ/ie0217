import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression


class Regresiones():
    def __init__(self, datos):
        self.datos = datos
        self.regresion1 = pd.DataFrame()
        self.regresion2 = pd.DataFrame()

    def datosRegresion1_lineal(self):
        self.regresion1 = self.datos.groupby('year')['selling_price'].mean()

        fechas = self.regresion1.index.values.reshape(-1, 1)
        precios = self.regresion1.values.reshape(-1, 1)

        modelo = LinearRegression()
        modelo.fit(fechas, precios)

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas, precios, color="#3498db", label="Datos reales")
        plt.plot(fechas, modelo.predict(fechas), color='#800000', linewidth=3, label="Regresión")
        plt.title('Precio promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Precio")
        plt.show()

    def datosRegresion2_lineal(self):
        self.regresion2 = self.datos.groupby('year')['km_driven'].mean()

        fechas = self.regresion2.index.values.reshape(-1, 1)
        kilometraje = self.regresion2.values.reshape(-1, 1)

        modelo = LinearRegression()
        modelo.fit(fechas, kilometraje)

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas, kilometraje, color="#00CED1", label="Datos reales")
        plt.plot(fechas, modelo.predict(fechas), color='purple', linewidth=3, label="Regresión")
        plt.title('Kilometraje promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Kilómetros recorridos")
        plt.show()
