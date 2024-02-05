import pandas as pd
from time import sleep


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)

    def limpiarDatos(self):
        filas_eliminar = []

        for indices, filas in self.datos.iterrows():
            for valores in filas:
                if pd.isna(valores):
                    filas_eliminar.append(indices)
                    print(filas)
                    break
        if not len(filas_eliminar) == 0:
            print("Limpiando datos...")
            sleep(3)
            self.datos = self.datos.drop(filas_eliminar)
            print(self.datos)
        
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

