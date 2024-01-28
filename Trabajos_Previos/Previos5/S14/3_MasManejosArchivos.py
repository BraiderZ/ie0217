import pandas as pd

datos = pd.read_csv("datos.csv")

# Se almacenan las columnas elegidas
edad_peso = datos[["edad", "peso"]]
print(edad_peso, "\n")

# Para fias colocamos una condición que se cumpla
above_35 = datos[datos["edad"] > 35]
print(above_35, "\n")

# Podemos obtener datos que posean similitud
'''También podemos usar las condiciones normales como:
"==", "|", etc '''
# También podemos usar .notna() para imprimir los valores no nulos
casados_1 = datos[datos["casados"].isin([1])]
print(casados_1, "\n")

# Se obtine un dato de las filas que cumplen una condición
mayores_nombres = datos.loc[datos["edad"] > 35, "nombre"]
print(mayores_nombres)

# Los indices elegidos, se obtienen las columnas mencionadas
# Si es solo una columana elegida, se puede igualar para cambiar el valor
print(datos.iloc[2:4, 3:4])
