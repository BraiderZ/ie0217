import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
"""
regresion.py

Clase encargada de crear gráficas con regresiones lineales
y no lineales.


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


class Regresiones():
    def __init__(self, datos):
        """
        Args:
            datos(DataFrame): posee los datos que se obtienen del csv

        Crea un atributo principal para almacenar los datos y dos
        secundarios que usarán en para las regresiones.
        """
        self.datos = datos
        self.regresion1 = pd.DataFrame()
        self.regresion2 = pd.DataFrame()

    def datosRegresionLineal1(self):
        """
        Agrega los datos necesarios al primer atributo para la regresión

        Separa los datos en dos listas y se procede a separar en datos de
        entrenamiento y de testeo

        Crea la regresión y verifica el rendimiento
        
        Imprime el rendimiento y la gráfica
        """
        self.regresion1 = self.datos.groupby('year')['selling_price'].mean()

        fechas = self.regresion1.index.values.reshape(-1, 1)
        precios = self.regresion1.values.reshape(-1, 1)

        fechas_train, fechas_test, precio_train, precio_test = train_test_split(
            fechas, precios, test_size=0.5, random_state=121)

        modelo = LinearRegression()
        modelo.fit(fechas_train, precio_train)

        precios_pred = modelo.predict(fechas_test)

        mae = mean_absolute_error(precio_test, precios_pred)
        mse = mean_squared_error(precio_test, precios_pred)
        r2 = r2_score(precio_test, precios_pred)

        print(f'MAE de regresion lineal 1: {mae:.2f}')
        print(f'MSE de regresion lineal 1: {mse:.2f}')

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas_test, precio_test, color="#3498db", label="Datos reales")
        plt.plot(fechas_test, precios_pred, color='#800000', linewidth=3, label=f'Regresión lineal (R^2={r2:.2f})')
        plt.title('Precio promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Precio")
        plt.show()

    def datosRegresionNoLineal1(self):
        """
        Mismo proceso pero ahora para regresión no lineal
        """
        self.regresion1 = self.datos.groupby('year')['selling_price'].mean()

        fechas = self.regresion1.index.values.reshape(-1, 1)
        precios = self.regresion1.values.reshape(-1, 1)

        fechas_train, fechas_test, precio_train, precio_test = train_test_split(
            fechas, precios, test_size=0.5, random_state=121)

        grado_polinomico = 2
        modelo_polinomico = make_pipeline(
            PolynomialFeatures(grado_polinomico), LinearRegression())
        modelo_polinomico.fit(fechas_train, precio_train)
        
        precios_pred = modelo_polinomico.predict(fechas_test)

        mae = mean_absolute_error(precio_test, precios_pred)
        mse = mean_squared_error(precio_test, precios_pred)
        r2 = r2_score(precio_test, precios_pred)

        print(f'MAE de regresion no lineal 1: {mae:.2f}')
        print(f'MSE de regresion no lineal 1: {mse:.2f}')

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas_test, precio_test, color="#3498db", label="Datos reales")
        plt.plot(fechas_test, precios_pred, color='#800000', linewidth=3, label=f'Regresión no lineal (R^2={r2:.2f})')
        plt.title('Precio promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Precio")
        plt.show()

    def datosRegresionLineal2(self):
        """
        Agrega los datos necesarios al primer atributo para la regresión

        Separa los datos en dos listas y se procede a separar en datos de
        entrenamiento y de testeo

        Crea la regresión y verifica el rendimiento
        
        Imprime el rendimiento y la gráfica
        """
        self.regresion2 = self.datos.groupby('year')['km_driven'].mean()

        fechas = self.regresion2.index.values.reshape(-1, 1)
        kilometraje = self.regresion2.values.reshape(-1, 1)

        fechas_train, fechas_test, kilometraje_train, kilometraje_test = train_test_split(
            fechas, kilometraje, test_size=0.5, random_state=121)

        modelo = LinearRegression()
        modelo.fit(fechas_train, kilometraje_train)

        kilometraje_pred = modelo.predict(fechas_test)

        mae = mean_absolute_error(kilometraje_test, kilometraje_pred)
        mse = mean_squared_error(kilometraje_test, kilometraje_pred)
        r2 = r2_score(kilometraje_test, kilometraje_pred)

        print(f'MAE de regresion lineal 2: {mae:.2f}')
        print(f'MSE de regresion lineal 2: {mse:.2f}')

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas_test, kilometraje_test, color="#00CED1", label="Datos reales")
        plt.plot(fechas_test, kilometraje_pred, color='purple', linewidth=3, label=f'Regresión lineal (R^2={r2:.2f})')
        plt.title('Kilometraje promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Kilómetros recorridos")
        plt.show()

    def datosRegresionNoLineal2(self):
        """
        Mismo proceso pero ahora para regresión no lineal
        """
        self.regresion2 = self.datos.groupby('year')['km_driven'].mean()

        fechas = self.regresion2.index.values.reshape(-1, 1)
        kilometraje = self.regresion2.values.reshape(-1, 1)

        fechas_train, fechas_test, kilometraje_train, kilometraje_test = train_test_split(
            fechas, kilometraje, test_size=0.5, random_state=121)

        grado_polinomico = 2
        modelo_polinomico = make_pipeline(
            PolynomialFeatures(grado_polinomico), LinearRegression())
        modelo_polinomico.fit(fechas_train, kilometraje_train)
        kilometraje_pred = modelo_polinomico.predict(fechas_test)

        mae = mean_absolute_error(kilometraje_test, kilometraje_pred)
        mse = mean_squared_error(kilometraje_test, kilometraje_pred)
        r2 = r2_score(kilometraje_test, kilometraje_pred)

        print(f'MAE de regresion no lineal 2: {mae:.2f}')
        print(f'MSE de regresion no lineal 2: {mse:.2f}')

        plt.figure(figsize=(10, 6))
        plt.scatter(fechas_test, kilometraje_test, color="#00CED1", label="Datos reales")
        plt.plot(fechas_test, kilometraje_pred, color='purple', linewidth=3, label=f'Regresión no lineal (R^2={r2:.2f})')
        plt.title('Kilometraje promedio de los vehículos según el año')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Kilómetros recorridos")
        plt.show()
