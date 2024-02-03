from sklearn.cluster import KMeans
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler

# Obtenemos el conjunto de datos
data = pd.read_csv('data.csv')

# Verificamos que no hayan valores nulos
# Escalar características
print(data.head())
scaler = StandardScaler()
scaled_data = scaler.fit_transform(data)

# Usamos el método del codo para definir los K-meas
inercia = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(scaled_data)
    inercia.append(kmeans.inertia_)

plt.plot(range(1, 11), inercia, marker='o')
plt.title('Método del Codo para Selección de k')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

# Se asume 4 como la cantidad de k óptima
# Definimos la cantidad de K-means
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)
data['Cluster'] = cluster_labels

# Análisis de segmentos agrupando por su valor medio
segment_analysis = data.groupby('Cluster').mean()

# Visualizamos los segmentos
plt.figure(figsize=(12,6))
for cluster in range(4):
    plt.scatter(data[data['Cluster'] == cluster]['Frequency'],
                data[data['Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')
plt.title('Segmentación de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
plt.legend()
plt.show()
