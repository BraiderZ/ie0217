import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

'''Existen múltiples maneras de personalizar un gráfico
linestyle: elegir el tipo de línea
marker: como se marcar'an los puntos'''
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Añadimos una acotación
'''En este caso se le da un nombre, el valor que se marcará,
color y tamaño de la flecha, entre otros.
Es importante leer sobre el funcionamiento de la blibioteca
para conocer más a profundidad su uso.'''
plt.annotate('Valor Máximo', xy=(5,14), xytext=(3, 16),
             arrowprops=dict(facecolor='black', shrink=0.05),
             )

plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado con Acotación')
plt.legend()

plt.show()