import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
from math import sqrt

# Generamos datos random con una semilla específica
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Dividimos los datos
X_train, X_test, y_train, y_test = \
  train_test_split(X, y, test_size=0.2, random_state=42)

# Creamos el modelo y lo ajustamos
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Realizamos las predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Calculamos las métricas
'''MAE: Error Medio Absoluto
MSE: Error Cuadrático Medio
RMSE:  Raíz Cuadrada del Erro Cuadrático Medio
RAE: Error Absoluto Relativo
RSE: Error Cuadrático Relativo'''
mae = mean_absolute_error(y_test, y_pred)
mse = mean_squared_error(y_test, y_pred)
rmse = sqrt(mse)
rae = np.sum(np.abs(y_test - y_pred)) / \
  np.sum(np.abs(y_test - np.mean(y_test)))
rse = np.sum(np.abs(y_test - y_pred)**2) / np.sum((y_test - np.mean(y_test))**2)

# Calculamos el coeficiente de determinación R^2
# Sus valores van entre 1 y 0
# Entre más cercano a 1, mejor fue la regresión
r2 = r2_score(y_test, y_pred)

# Imprimimos los resultados de las métricas
print(f'MAE: {mae:.2f}')
print(f'MSE: {mse:.2f}')
print(f'RMSE: {rmse:.2f}')
print(f'RAE: {rae:.2f}')
print(f'RSE: {rse:.2f}')

# Agregamos el R^2 en la gráfica
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test, y_pred, label=f'Predicciones (R^2={r2:.2f})', 
         color='red')
plt.title('Regresión Lineal y Errores')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()

# Mostramos los errores también en la gráfica
for i in range(len(X_test)):
    plt.plot([X_test[i], X_test[i]],
             [y_test[i], y_pred[i]],
             linestyle='--', color='gray')

plt.show()
