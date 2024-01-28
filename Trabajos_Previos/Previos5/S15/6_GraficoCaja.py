import matplotlib.pyplot as plt

datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Para graficar en caja se usa boxplot
'''Dentro de la caja estan el 50% cetral de los valores
El valor medio se marca con una línea
Los bigotes abarcan valores para representar un rango de datos
Por valores atípicos cno entran en el gráfico y son aquellos
fuera de los bogotes'''
# Todo lo hace el programa
plt.boxplot(datos)

plt.ylabel("Valores")
plt.title("Gráfico de Caja")

plt.show()
