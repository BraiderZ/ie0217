from sklearn.cluster import AgglomerativeClustering
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
import matplotlib.pyplot as plt

# Generamos datos por medio de make blobs
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Elegimos el tipo de enlace para el Hierarchical Clustering
# En este caso se elige completo, o sea, se basa en los puntos alejados
Z = linkage(X, method='complete')

# Visualizamos el dendrograma
plt.figure(figsize=(10, 5))
dendrogram(Z)
plt.title('Dendograma Hierarchical Clustering')
plt.xlabel('Índice del Punto de Datos')
plt.ylabel('Distancia')
plt.show()

# Configuramos que sea de tipo aglomerativo
# Significa entonces que son muchos datos y los iremos agrupando en jerarquías
# Un total de 3 jerarquías
agg_clustering = AgglomerativeClustering(n_clusters=3)
agg_labels = agg_clustering.fit_predict(X)

# Visualizar los datos con el clustering
# Si cortamos en distancias más arriba, la jerarquía abarca más datos
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolors='k', s=50)
plt.title('Resultado de Clustering Jerárquico')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
