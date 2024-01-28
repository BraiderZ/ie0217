# Importamos la libreria pandas. Por convención se importa como pd
import pandas as pd

# Creamos unn dataframe
df = pd.DataFrame(
    {
        # Nombres de las columnas o etiqueta
        "Name": [
            # LO que hay en las columnas
            "Braund, Mr. Owen Harris",
            "Allen, MR. William Henry",
            "Bonnell, Miss. Elizabeth",
        ],
        # Pueden ser listas
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "famle"],       
    }
)

# Al  imprimir también tiene etiquetas las filas
print(df)

# Se puede crear una serie, la cual, no tiene nombre de columna
ages = pd.Series([22, 35, 58], name="Age")
# Con .max imprimimos el mayor valor
print(ages)

# Podemos imprimir una columna específica por su etiqueta
print(df["Age"])

# Imprime información sobre los datos numéricos
print(df.describe())
