import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generamos datos en formas de lunas crecientes
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configuramos el tipo de cluster
# Este no se basa en distancias, sino en ruido, o sea, densidad
# No se especifica la cantidad de clusters
# Elegimos un ep para ajustar los vecindarios (conjuntos)
# Elegimos un min_samples para ajustar la densidad del vecindario
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(X)

# Visualizar resultados
plt.scatter(X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolors='k', s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
