import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.pipeline import make_pipeline
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score


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
        plt.title('Método del Codo')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Inercia')
        plt.show()

    def clusterinKMeans1(self):
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
                        marker='o')
        plt.scatter(centroids[:, 0], centroids[:, 0]*0, c='black', marker='X', s=150, label='Centroides')
        plt.title('Agrupación según el precio y kilometraje')
        plt.legend()
        plt.xlabel("Precio")
        plt.ylabel("Kilometraje")
        plt.show()
