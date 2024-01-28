import pandas as pd

# Obtiene los datos de unarchivo para crear un dataframe
datos = pd.read_csv("datos.csv")
# Podemos crear un excel con los datos usando:
# dataframe_nombre.to_excel("Nombre_Excel", sheet_name="nombre_hoja", index=True/False)

# Imprimimos los primeros valores. Sin o se especifica, se hace automático
print(datos.head(1))

# Informacion sobre los tipos de datos en el dataframe
print(datos.dtypes)

# Informacion sobre el contenido en general
print(datos.info())

'''De igual manera podemos crear una serie basada en el dataframe, usar head,
type si queremos saber el tipo de la serie,
shape para saber el tamaño'''
