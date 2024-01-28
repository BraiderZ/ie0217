import matplotlib.pyplot as plt

proporciones = [15, 8, 12, 10]
etiquetas = ['A', 'B', 'C', 'D']

'''Usamos pie para gráficos pastel.
autopct funciona para definir la cantidad de decimales
starangle define el ángulo en el que empieza el gráfico'''

plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

plt.title("Gráfico de Pastel")

plt.show()
