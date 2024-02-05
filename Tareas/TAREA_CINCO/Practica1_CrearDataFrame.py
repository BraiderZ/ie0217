import pandas as pd


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)

    def limpiarDatos(self):
        self.datos.dropna()
        
        columnas_mantener = ['Value', 'YYYYMM', 'Description']
        iterador_columnas = iter(self.datos)
        
        for columna in iterador_columnas:
            if columna not in columnas_mantener:
                self.datos.drop(columna, axis=1, inplace=True)
        print(self.datos)

    def multiplicarValores(self):
        for indices, _ in self.datos.iterrows():
            self.datos.at[indices, 'Value'] *= 1000

    def analisisExhaustivo(self):
        descripcion = self.datos.describe()
        estadisticas_valores = descripcion['Value']
        cantidad_valores = estadisticas_valores['count']
        promedio_valores = estadisticas_valores['mean']
        valor_minimo = estadisticas_valores['min']
        valor_maximo = estadisticas_valores['max']
        print(f"Algunos valores descriptivos en los datos analizados son:\
              \nCantidad de datos totales: {cantidad_valores}\
              \nPromedio de vehículos totales: {round(promedio_valores)}\
              \nValor analizado con menos vehículos: {round(valor_minimo)}\
              \nValor analizado con más vehículos: {round(valor_maximo)}")

