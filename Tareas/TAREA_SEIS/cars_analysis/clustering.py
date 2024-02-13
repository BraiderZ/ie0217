import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
"""
clustering.py

Clase encargada de realizar el clustering de los datos.


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


class Clustering():
    def __init__(self, datos):
        """
        Args:
            datos(DataFrame): posee los datos que se obtienen del csv

        Crea un atributo principal para almacenar los datos y dos
        secundarios que usarán en para los 2 clustering.
        """
        self.datos = datos
        self.k_meas = pd.DataFrame()
        self.dbscan = pd.DataFrame()

    def metodoCodoClustering1(self, kilometraje, precios):
        """
        Args:
            kilometraje(lista): posee el kilometraje de cada auto
            precios(lista): posee el precio de cada auto

            Usa la lógicca encarga de usar el método del codoy
            crea la gráfica para verificar la mejor opción
        """
        inercia = []
        for k in range(1, 11):
            kmeans = KMeans(n_clusters=k, random_state=42)
            kmeans.fit(precios, kilometraje)
            inercia.append(kmeans.inertia_)

        plt.plot(range(1, 11), inercia, marker='o')
        plt.title('Método del Codo para Clustering 1')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Inercia')
        plt.show()

    def clusteringKMeans1(self):
        """
        Agregar al atributo los datos necesarios para el clustering
        Separa los datos en dos listas
        Invoca el método encargado de revisar el rendimiento
        Elije la cantidad de clusters y procede a crear la gráfica
        """
        self.k_meas = self.datos[['km_driven', 'selling_price']]

        kilometraje = self.k_meas['km_driven'].values.reshape(-1, 1)
        precios = self.k_meas['selling_price'].values.reshape(-1, 1)

        self.metodoCodoClustering1(kilometraje, precios)

        kmeans = KMeans(n_clusters=4)
        kmeans.fit(precios, kilometraje)

        labels = kmeans.labels_
        centroids = kmeans.cluster_centers_

        plt.figure(figsize=(10, 6))
        for i in range(len(precios)):
            plt.scatter(precios[i], kilometraje[i], c=('lightblue' if labels[i] == 0 else 'darkgoldenrod' if labels[i] == 1 else 'lightgreen' if labels[i] == 2 else '#800000'),
                        marker='o', s=20)
        plt.scatter(centroids[:, 0], centroids[:, 0]*0, c='black', marker='X', s=150, label='Centroides')
        plt.title('Agrupación según el precio y kilometraje')
        plt.legend()
        plt.xlabel("Precio")
        plt.ylabel("Kilometraje")
        plt.show()

    def metodoSilhouetteClustering2(self, data):
        """
        Args:
            data(matriz): posee los datos crear para el métod de la silueta

        Usa la lógica encargada de verificar el rendimiento por medio
        del método de la silueta
        Imprime la gráfica para elgir la mejor opción
        """
        silhouette_scores = []
        for k in range(3, 13):
            kmeans = KMeans(n_clusters=k, random_state=42)
            kmeans.fit(data)
            score = silhouette_score(data, kmeans.labels_)
            silhouette_scores.append(score)

        plt.plot(range(3, 13), silhouette_scores, marker='o')
        plt.title('Método de la Silueta para Clusetring 2')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Coeficiente de Silueta')
        plt.show()

    def clusteringKMeans2(self):
        """
        Agregar al atributo los datos necesarios para el clustering
        Separa los datos en dos listas  y después los convierte en matriz
        Invoca el método encargado de revisar el rendimiento
        Elije la cantidad de clusters y procede a crear la gráfica
        """
        self.k_meas = self.datos[['year', 'selling_price']]

        fecha = self.k_meas['year'].values.reshape(-1, 1)
        precios = self.k_meas['selling_price'].values.reshape(-1, 1)

        data = np.column_stack((fecha.flatten(), precios.flatten()))
        self.metodoSilhouetteClustering2(data)

        kmeans = KMeans(n_clusters=3)
        kmeans.fit(fecha, precios)

        labels = kmeans.labels_
        centroids = kmeans.cluster_centers_

        plt.figure(figsize=(10, 6))
        for i in range(len(precios)):
            plt.scatter(data[i][0], data[i][1], c=('green' if labels[i] == 0 else '#3498db' if labels[i] == 1 else 'orange'),
                        marker='o', s=20)
        plt.scatter(centroids[:, 0], centroids[:, 0]*0, c='black', marker='X', s=150, label='Centroides')
        plt.title('Agrupación según el año y precio')
        plt.legend()
        plt.xlabel("Año")
        plt.ylabel("Precios")
        plt.show()
