# Importamos las tres librerías importantes
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Generamos datos random con una semilla específica
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Creamos el modelo de regresión lineal y añadimos datos
modelo = LinearRegression()
modelo.fit(X, y)

# Imprimimos las betas
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepcion:", modelo.intercept_[0])

# Creamos la gráfica
# Los datos creados se representan con puntos
plt.scatter(X, y)
''' Podemos predecir la línea recta basada en los datos
gracias al modelo creado '''
plt.plot(X, modelo.predict(X), color='red', linewidth=3)
plt.title('Regresión Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()
