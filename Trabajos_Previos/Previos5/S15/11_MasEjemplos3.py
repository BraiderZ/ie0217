import matplotlib.pyplot as plt

categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

'''Definimos contorno'''
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Tamaño de las letras con fontsize
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Gráfico de Barras', fontsize=14)
# Los nombres del eje x tiene  rotación
plt.xticks(rotation=45)
# Modificamos el grid a gusto
plt.grid(axis='y', linestyle='--', alpha=0.7)

# Añadimos etiquetas a cada barra
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Por defcto da un grosor a las barras
plt.show()
