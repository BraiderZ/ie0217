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

    def clusterinKMeans(self):
        self.k_meas = self.datos[['km_driven', 'selling_price']]

        kilometraje = self.k_meas['km_driven'].values.reshape(-1, 1)
        precios = self.k_meas['selling_price'].values.reshape(-1, 1)

        kmeans = KMeans(n_clusters=3)
        kmeans.fit(precios, kilometraje)

        labels = kmeans.labels_
        centroids = kmeans.cluster_centers_

        plt.figure(figsize=(12, 5))
        for i in range(len(precios)):
            plt.scatter(precios[i], kilometraje[i], c=('lightblue' if labels[i] == 0 else 'darkgoldenrod' if labels[i] == 1 else 'lightgreen'),
                        marker='o')
        plt.scatter(centroids[:, 0], centroids[:, 0]*0, c='black', marker='X', s=150, label='Centroides')
        plt.title('Agrupación según el precio y kilometraje')
        plt.legend()
        plt.xlabel("Precio")
        plt.ylabel("Kilometraje")
        plt.show()
