import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# sklearn nos da la opción de crear datos random
# Definimos cantidad de datos, características, ruido y semilla
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Acomodamos los datos en un DataFrame, separando así las características
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia_Ciudad'])
df['Precio'] = y

# Dividimos los datos en tres "listas" diferentes
# Con ello, cada conjunto lo usaremos para diferentes pruebas
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamaño', 'Habitaciones', 'Distancia_Ciudad']],
    df['Precio'], test_size=0.2, random_state=42)

# Creamos el modelo
# Lo ajustamos a regresión múltiple
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Verificamos los coeficientes e intercepción
print("Coeficientes:", modelo.coef_)
print("Intercepción:", modelo.intercept_)

# Ahora pasamos los otros valores x y predecimos el comportamiento
y_pred = modelo.predict(X_test)

fig = plt.figure(figsize=(12, 6))


'''Separamos en subtramas donde el primer gráfico tendra las y reales
El segundo gráfico tendrá las y predichas
El último compara las y verdaderas y las predichas
Definimos proyección en 3d'''

'''Gráfica 1'''
ax1 = fig.add_subplot(131, projection='3d')
ax1.scatter(
    X_test['Tamaño'], X_test['Habitaciones'],
    y_test, c='blue', marker='o', alpha=0.5)
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamaño y Habitaciones')

'''Gráfica 2'''
ax2 = fig.add_subplot(132, projection='3d')
ax2.scatter(
    X_test['Tamaño'], X_test['Habitaciones'],
    y_pred, c='red', marker='o', alpha=0.5)
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamaño y Habitaciones')

'''Gráfica 3'''
ax3 = fig.add_subplot(133)
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
ax3.plot(
    [min(y_test), max(y_test)], [min(y_test), max(y_test)],
    linestyle='--', color='red', linewidth=2)
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax2.set_title('Comparación de Precio Verdadero y Precio Predicho')

plt.tight_layout()
plt.show()
