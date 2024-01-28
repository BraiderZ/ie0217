import pandas as pd

# En caso de tener fecha, podemos usar parse_datres=True/False dependiendo si queremos o no que se obtengan
datos1 = pd.read_csv("datos.csv")
datos2 = pd.read_csv("datos1.csv")

# Podemos hacer subsecciones colocando cuales columnas queremos que se mantengan
datos1 = datos1[["nombre", "edad"]]
datos2 = datos2[["nombre", "edad"]]

# Concatenamos en un nuevo dataframe ambos dataframes
datos = pd.concat([datos1, datos2], axis=0)

# Unidos los datos, filtramos
datos = datos.sort_values("edad")
print(datos)
