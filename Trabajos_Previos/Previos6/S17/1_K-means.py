from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generamos valores random
np.random.seed(42)
X = np.random.rand(100, 2) * 10

# Creamos la subgráfica sin K-means
plt.figure(figsize=(12, 5))
plt.subplot(1, 2, 1)
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')

# Definimos la cantidad de K-means
kmeans = KMeans(n_clusters=3)
kmeans.fit(X)

# Obtenemos los centroides y etiquetas para colocarlos en la subgráfica
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Subgráfico 2 para mostrar los resultados con K-means
plt.subplot(1, 2, 2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
            label='Centroids')
plt.title('Resultado de Clustering con K-Means')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.legend()
plt.tight_layout()
plt.show()

'''K-means separa en la cantidad de conjuntos elegidos. Divide en diferentes
posiciones los k y na vez elegido los elementos que va en cada k,
se centra entre sus puntos.
Si hubo algún cambio de los puntos por la centralización,
vuelve a realizar el proceso'''
