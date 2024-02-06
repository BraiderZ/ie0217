import pandas as pd
"""
Practica1_CrearDataFrame.py

Clase encargada de almacenar los datos del csv y realizar los diferentes análisis.


@license:
Copyright 2024 [Luis José Brenes Campos]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""


class DatosCsv:
    def __init__(self, nombre_csv):
        """
        Abre el archivo csv y los almacena en un DataFrame.
        Se crean 2 DataFrame para futuros cambios.
        """
        self.datos = pd.read_csv(nombre_csv)
        self.datos_por_auto = pd.DataFrame()
        self.datos_totales = pd.DataFrame()

    def limpiarDatos(self):
        """
        Elimina los valores nulos del DataFrame y columnas innecesarias.
        """
        self.datos.dropna(inplace=True)

        columnas_mantener = ['Value', 'YYYYMM', 'MSN']
        iterador_columnas = iter(self.datos)

        """
        Las columnas innecesarias son eliminadas con el uso de iteradores.
        """
        for columna in iterador_columnas:
            if columna not in columnas_mantener:
                self.datos.drop(columna, axis=1, inplace=True)
        
        """
        Finalmente se invocan métodos para los siguientes pasos.
        """
        self.separar_datos()
        self.multiplicarValores()

    def separar_datos(self):
        """
        Separa en los otros 2 atributos de tipo DataFrame el
        DataFrame original.
        El primero almacena datos de diferentes tipos de autos eléctricos.
        El segundo almacena datos de todo tipo de autos y
        porcentaje de autos eléctricos.
        """
        self.datos_por_auto = self.datos[self.datos["MSN"].isin(["BTVHNUS", "PHVHNUS", "ELVHNUS", "HGVHNUS"])]
        self.datos_totales = self.datos[self.datos["MSN"].isin(["LDVHNUS", "ELVHSUS"])]

    def multiplicarValores(self):
        """
        Multiplica los valores por 1000 para obtener los datos reales.
        """
        self.datos_por_auto.loc[:, 'Value'] *= 1000

    def analisisExhaustivo(self):
        """
        Toma diferentes valores descriptivos del DataFrames sobre
        los diferentes autos eléctricos.
        """
        descripcion = self.datos_por_auto.describe()
        estadisticas_valores = descripcion['Value']
        cantidad_valores = estadisticas_valores['count']
        promedio_valores = estadisticas_valores['mean']
        valor_minimo = estadisticas_valores['min']
        valor_maximo = estadisticas_valores['max']
        desviacion_estandar = estadisticas_valores['std']
        
        """
        Se utiliza el método IQR para calcular valores atípicos.
        """
        Q1 = estadisticas_valores['25%']
        Q3 = estadisticas_valores['75%']
        IQR = Q3 - Q1
        valores_atipicos = self.datos_por_auto[(self.datos_por_auto['Value'] < (Q1 - 1.5 * IQR)) | (self.datos_por_auto['Value'] > (Q3 + 1.5 * IQR))]
        """
        Imprimimos los resultados del análisis.
        """

        print(f"Datos sobre vehiculos electricos registrados en EEUU:\
              \nCantidad de datos relacionados a autos electricos: {cantidad_valores}\
              \nPromedio de vehículos totales registrados: {round(promedio_valores)}\
              \nValor analizado con menos registro vehículos: {round(valor_minimo)}\
              \nValor analizado con más registro vehículos: {round(valor_maximo)}\
              \nDesviacion estandar de los valores: {round(desviacion_estandar)}\
              \nAlgunos valores atipicos:\n{valores_atipicos['Value'].to_string(index=False)}")

    def generador_informe(self, fecha):
        """
        Args:
            fecha(int): posee la fecha del año en cuestión.

        Verifica por medio de un loop que la fecha sea igual a la del DataFrame
        para retornar el valor que posea esa línea.
        """
        for _, filas in self.datos_por_auto.iterrows():
            if (filas.iloc[1] == fecha):
                yield filas.iloc[2]

    def informe_detallado_fecha(self):
        """
        Crea un diccionario con las 11 fechas posibles.
        Por medio del generador invoca, va sumando el valor
        total de autos en ese año.
        Retorna el diccionario.
        """
        fechas = {201213: 0, 201313: 0, 201413: 0, 201513: 0,
                  201613: 0, 201713: 0, 201813: 0, 201913: 0,
                  202013: 0, 202113: 0, 202213: 0}
        for fecha in fechas:
            for registro in self.generador_informe(fecha):
                fechas[fecha] += round(registro)
        return fechas

    def __iter__(self):
        """
        Iterador personalizado encargado de obtener datos.
        Inicia apartir de una fecha definida con antelación.
        """
        self.fecha = 201213
        return self

    def __next__(self):
        """
        Se encarga de cada iteración del iterador personalizado.
        Mientras no se supere la fecha indicada
        retorna una lista con el año, cantidad total de autos refistrados
        y cantidad de autos eléctricos calculado gracias al porcentaje.
        """
        if self.fecha <= 202213:
            autos_totales = self.datos_totales[(self.datos_totales["MSN"] == "LDVHNUS") & (self.datos_totales["YYYYMM"] == self.fecha)]["Value"].values[0]
            autos_electricos = self.datos_totales[(self.datos_totales["MSN"] == "ELVHSUS") & (self.datos_totales["YYYYMM"] == self.fecha)]["Value"].values[0]
            self.fecha += 100
            return [self.fecha - 100, autos_totales, autos_totales * (autos_electricos/100)]
        else:
            raise StopIteration
    
    def generador_porcentaje_auto(self, tipo_auto, primer_registro, ultimo_registro):
        """
        Args:
            tipo_auto (lista): posee una lista con los diferentes tipos de autos eléctricos
            primer_registro (listo): posee una lista con la cantidad del primer registro de autos.
            ultimo_registro (listo): posee una lista con la cantidad del último registro de autos.

        Calcula el porcentaje de aumento de cada tipo de auto y lo retorna.
        """
        for i in range(len(tipo_auto)):
            porcentaje = ((ultimo_registro[i] - primer_registro[i])/primer_registro[i]) * 100
            yield porcentaje

    def iterador_dataframe_electricos(self):
        """
        Crea listas para almacenar diferentes tipos de datos.
        Utiliza un iterdor para tomar cada uno de los tipos de auto,
        cantidad del primer registro y cantidad del último registro.

        Retorna las listas con los tipos de auto y sus porcentajes.
        """
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
        """
        Args:
            fechas (lista): lista con las diferentes fechas de registro
            cantidad(lista): posee la cantidad de registros por fecha

        Calcula el porcentaje de aumento basando en el valor del año anterior.
        """
        for i in range(len(fechas)):
            if i == 0:
                yield 0
            else:
                porcentaje = ((cantidades[i] - cantidades[i - 1])/cantidades[i - 1]) * 100
                yield porcentaje

    def iterador_dataframe_totales(self):
        """
        Divide por medio de un iterador las diferentes fechas y la
        cantidad total de registros de autos.

        Seguidamente usa el generador para obtener el porcentaje y
        retornar las fechas y el porcentaje.
        """
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
