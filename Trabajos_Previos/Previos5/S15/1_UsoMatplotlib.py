# Por convención matplotlib se importa como mpl
# pyplot de matplolib como plt y en muchos casos conviene importar numpy

import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

# Se debe crear una figura y sus ejes
fig, ax = plt.subplots()
# Por defecto crea una línea entre valores
# También por defecto relaciona valor por valor
ax.plot([1, 2, 3, 4], [1, 4, 2, 3])  # Primero se define eje x y luego eje y

# Para imprimir la gráfica
plt.show()
