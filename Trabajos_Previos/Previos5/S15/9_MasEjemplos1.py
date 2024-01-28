import matplotlib.pyplot as plt
import numpy as np

'''Cremoas variables de tipo coseno y seno
linspace no ayuda a definir: inicio, final y cantidad de puntos entre ambos'''

x = np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Agregamos ambas al mismo gráfico, no subtramas
plt.plot(x, y1, label="Seno")
plt.plot(x, y2, label="Coseno")

plt.xlabel('Ángulo (rad)')
plt.ylabel('Valor')
plt.title('Funciones Seno y Coseno')
plt.legend()

plt.show()
