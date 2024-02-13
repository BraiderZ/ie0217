import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score


class Clustering():
    def __init__(self, datos):
        self.datos = datos
        self.k_meas = pd.DataFrame()
        self.dbscan = pd.DataFrame()

    def metodoCodoClustering1(self, kilometraje, precios):
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
