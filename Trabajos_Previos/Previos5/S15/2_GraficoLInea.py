import matplotlib.pyplot as plt

# Creamos variables para los valores del gráfico
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Pasamos las variables para graficar los valores
plt.plot(x, y)

# Pesonalizamos
# Nombre de ejes
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
# Título
plt.title('Gráfico de línea simple')
# Si queremos grilla
plt.grid(True)

plt.show()
