import pandas as pd

datos = pd.read_csv("datos.csv")

# Podemos acomodar los datos
# Si agregamos ascending=False, podemos cambiar el orden del filtrado
print(datos.sort_values(by="edad"))

# Obtenemos los datos de un tipo
# A este conjunto filtrado le podemos aplicar filtrado
casados = datos[datos["casados"] == 1]
print(casados)

# Podemos realizar pivotes: agrupa valores de una manera determinada
'''Con pivot_table, no solo agrupamos diferente, sino que,
podemos modificar valores, por ejemplo, tomando el promedio'''
# Con .melt podemos volver a separar los valores
# El .melt no se puede si se usó .pivot_table porque modifica los valores
casados_edad = casados.pivot(columns="edad", values="nombre")
print(casados_edad)
