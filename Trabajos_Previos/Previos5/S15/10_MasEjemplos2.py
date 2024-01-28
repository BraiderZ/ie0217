import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencias = [5, 10, 8, 13]

# Creamos subtramas de diferente tipo
# Definimos el tamaño
fig, axs = plt.subplots(1, 2, figsize=(10,4))

# Definimos el gráfico de ambas subtramas
axs[0].plot(categorias, valores, color='royalblue')
axs[0].set_title('Gráfico de Barras')

axs[1].plot(categorias, tendencias, color='green', marker='o')
axs[1].set_title('Gráficop de Línea')

for ax in axs:
    ax.set_xlabel('Categorías')
    ax.set_ylabel('Valores')

# Ajustamos la disposición
plt.tight_layout()

# Ambos gráficos se imprimen en la misma imágen
plt.show()
