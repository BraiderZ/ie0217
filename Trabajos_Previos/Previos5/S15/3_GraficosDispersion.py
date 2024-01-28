import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Para gráfico de dispersión usamos scatter
# Definimos una variable lebel encargada de asignar etiquetas
# Definir variables funciona con otros tipos de gráficos como .plot
plt.scatter(x, y, label="Puntos")

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Dispersión')
# Legenda para identicar los valores de un color
# Toma label definido para colocar el nombre
plt.legend()

# Podemos guargar el gráfico como una imagen
# En este caso se guarda en formato PNG
plt.savefig('grafico.png')

plt.show()
