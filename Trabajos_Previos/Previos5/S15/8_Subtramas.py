import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Creamos subtramas
# En este caso decimos que es una fila y dos columnas
fig, axs = plt.subplots(1, 2)

# Definimos el gráfico de ambas subtramas
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')

axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

# Los valores que definamos iguales, podemos hacerlo en for
# Con ello, ahorramos tiempo y código
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Ajustamos la disposición
plt.tight_layout()

# Ambos gráficos se imprimen en la misma imágen
plt.show()
