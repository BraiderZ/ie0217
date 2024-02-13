import pandas as pd
"""
datos_pandas.py

Clase encargada de obtener los datos del csv.


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


class DatosPandas():
    """
    Esta clase instancia un objeto que crea un DataFrame con los datos
    obtenidos en el request
    Limpia los datos repetidos y los nulos
    Retorna el DataFrame
    """
    def __init__(self):
        self.datos = pd.read_csv("./cars_analysis/CAR DETAILS FROM CAR DEKHO.csv")

    def limpezaDatos(self):
        self.datos.dropna(inplace=True)
        self.datos.drop_duplicates(inplace=True)

    def getDatos(self):
        return self.datos
