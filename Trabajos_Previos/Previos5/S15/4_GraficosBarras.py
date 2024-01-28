import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

'''Para el gráfico de barras usamos .bar
En este caso usando color= definimos un color para el gráfico.'''
plt.bar(categorias, valores, color='royalblue')

plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras verticales')

# Por defcto da un grosor a las barras
plt.show()
