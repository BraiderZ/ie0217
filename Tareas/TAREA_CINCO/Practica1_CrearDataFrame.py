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
        desviacion_estandar = estadisticas_valores['std']
        
        Q1 = estadisticas_valores['25%']
        Q3 = estadisticas_valores['75%']
        IQR = Q3 - Q1
        valores_atipicos = self.datos_por_auto[(self.datos_por_auto['Value'] < (Q1 - 1.5 * IQR)) | (self.datos_por_auto['Value'] > (Q3 + 1.5 * IQR))]
        print(f"Datos sobre vehiculos electricos registrados en EEUU:\
              \nCantidad de datos relacionados a autos electricos: {cantidad_valores}\
              \nPromedio de vehículos totales registrados: {round(promedio_valores)}\
              \nValor analizado con menos registro vehículos: {round(valor_minimo)}\
              \nValor analizado con más registro vehículos: {round(valor_maximo)}\
              \nDesviacion estandar de los valores: {round(desviacion_estandar)}\
              \nAlgunos valores atipicos:\n{valores_atipicos['Value'].to_string(index=False)}")

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
        return fechas

    def __iter__(self):
        self.fecha = 201213
        return self

    def __next__(self):
        if self.fecha <= 202213:
            autos_totales = self.datos_totales[(self.datos_totales["MSN"] == "LDVHNUS") & (self.datos_totales["YYYYMM"] == self.fecha)]["Value"].values[0]
            autos_electricos = self.datos_totales[(self.datos_totales["MSN"] == "ELVHSUS") & (self.datos_totales["YYYYMM"] == self.fecha)]["Value"].values[0]
            self.fecha += 100
            return [self.fecha - 100, autos_totales, autos_totales * (autos_electricos/100)]
        else:
            raise StopIteration
    
    def generador_porcentaje_auto(self, tipo_auto, primer_registro, ultimo_registro):
        for i in range(len(tipo_auto)):
            porcentaje = ((ultimo_registro[i] - primer_registro[i])/primer_registro[i]) * 100
            yield porcentaje

    def iterador_dataframe_electricos(self):
        tipo_auto = []
        primer_registro = []
        ultimo_registro = []
        porcentaje_auto = []

        for _, filas in self.datos_por_auto.iterrows():
            if filas.iloc[0] not in tipo_auto:
                tipo_auto.append(filas.iloc[0])
                primer_registro.append(filas.iloc[2])
            
            if filas.iloc[1] == 202213:
                ultimo_registro.append(filas.iloc[2])

        for porcentaje in self.generador_porcentaje_auto(tipo_auto, primer_registro, ultimo_registro):
            porcentaje_auto.append(porcentaje)
        
        return tipo_auto, porcentaje_auto

    def generador_porcentaje_fecha(self, fechas, cantidades):
        for i in range(len(fechas)):
            if i == 0:
                yield 0
            else:
                porcentaje = ((cantidades[i] - cantidades[i - 1])/cantidades[i - 1]) * 100
                yield porcentaje

    def iterador_dataframe_totales(self):
        fechas = []
        cantidades = []
        porcentaje_total = []
        for _, filas in self.datos_totales.iterrows():
            if filas.iloc[1] not in fechas:
                fechas.append(filas.iloc[1])
                cantidades.append(filas.iloc[2])

        for porcentaje in self.generador_porcentaje_fecha(fechas, cantidades):
            porcentaje_total.append(porcentaje)

        return fechas, porcentaje_total
