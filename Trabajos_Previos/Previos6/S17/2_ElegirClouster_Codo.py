from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

np.random.seed(42)
X = np.random.rand(100, 2) * 10

# Creamos un gráfico de inercias
# Buscamos obtener el k que se encuentre en el "codo", o sea, un valor medio
# Así tenemos una cantidad de K-means no tan pequeña ni tan grande
inercia = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    inercia.append(kmeans.inertia_)

plt.plot(range(1, 11), inercia, marker='o')
plt.title('Método del Codo')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()
