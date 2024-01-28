import pandas as pd

datos = pd.read_csv("datos.csv")

# Creamos nueva columna realizando operaciones
# El programa es tan robusto que en caso de no poder hacer la operación, coloca un NaN 
'''Las operaciones puden ser entre dos columnas  ya  creadas.
El programa sabe que cada valor de una columna,
debe realizar la operación en el valor de la otra columna que
esten en la misma fila'''
datos["peso_libras"] = datos["peso"] * 2.2

print(datos["peso_libras"])

# Renombramos columnas
# También se puede usar colums=tipo_dato.operación para un cambio rapido
# Por ejemplo, que las etiquetas sean ahora en mayúscula
datos_renombrados = datos.rename(
    columns={
        "peso": "peso_kilos"
    }
)
print(datos_renombrados)

# Podemos sacar el promedio de una columna
# Podemos colocar más de una fila a la vez para realizar el cálculo
print(datos["edad"].mean())

# Obtener varios datos a la vez
edad_informacion = datos.agg(
    {
        "edad": ["min", "max", "mean"]
    }
)

print(edad_informacion)

# Podemos agrupar varias operaciones a la vez
# Argupados entre casados o no y el promedio de su edad
''' Dentro del mean podemos crear una condición
para que los datos que sí posean valore se agrupen'''
print(datos[["casados", "edad"]].groupby("casados").mean())

# Podemos contar la cantidad de datos que hay de cada tipo
# También podemos realizar agrupaciones antes del proceso
print(datos["casados"].value_counts())

