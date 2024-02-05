import pandas as pd


class DatosCsv:
    def __init__(self, nombre_csv):
        self.datos = pd.read_csv(nombre_csv)
        self.datos_por_auto = pd.DataFrame()
        self.datos_totales = pd.DataFrame()

    def limpiarDatos(self):
        self.datos.dropna(inplace=True)

        columnas_mantener = ['Value', 'YYYYMM', 'MSN']
        iterador_columnas = iter(self.datos)

        for columna in iterador_columnas:
            if columna not in columnas_mantener:
                self.datos.drop(columna, axis=1, inplace=True)
        
        self.separar_datos()
        self.multiplicarValores()

    def separar_datos(self):
        self.datos_por_auto = self.datos[self.datos["MSN"].isin(["BTVHNUS", "PHVHNUS", "ELVHNUS", "HGVHNUS"])]
        self.datos_totales = self.datos[self.datos["MSN"].isin(["LDVHNUS", "ELVHSUS"])]

    def multiplicarValores(self):
        self.datos_por_auto['Value'] *= 1000

    def analisisExhaustivo(self):
        descripcion = self.datos_por_auto.describe()
        estadisticas_valores = descripcion['Value']
        cantidad_valores = estadisticas_valores['count']
        promedio_valores = estadisticas_valores['mean']
        valor_minimo = estadisticas_valores['min']
        valor_maximo = estadisticas_valores['max']
        print(f"Datos sobre vehiculos electricos registrados en EEUU:\
              \nCantidad de datos relacionados a autos electricos: {cantidad_valores}\
              \nPromedio de vehículos totales registrados: {round(promedio_valores)}\
              \nValor analizado con menos registro vehículos: {round(valor_minimo)}\
              \nValor analizado con más registro vehículos: {round(valor_maximo)}")

    def generador_informe(self, fecha):
        for _, filas in self.datos_por_auto.iterrows():
            if (filas.iloc[1] == fecha):
                yield filas.iloc[2]

    def informe_detallado_fecha(self):
        fechas = {201213: 0, 201313: 0, 201413: 0, 201513: 0,
                  201613: 0, 201713: 0, 201813: 0, 201913: 0,
                  202013: 0, 202113: 0, 202213: 0}
        for fecha in fechas:
            for registro in self.generador_informe(fecha):
                fechas[fecha] += round(registro)

        print("---Cantidad de vehículos electricos registrados fecha---")
        ano = 2012
        for fecha in fechas:
            print(f"{ano}/13: {fechas[fecha]}")
            ano += 1
