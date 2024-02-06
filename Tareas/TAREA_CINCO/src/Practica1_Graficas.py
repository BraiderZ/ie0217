import matplotlib.pyplot as plt
import seaborn as sns
import Practica1_Generadores as generadores
"""
Practica1_Graficas.py

Clase encargada de crear las diferentes gráficas.


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

class Graficas:

    def graficaFechasCantidadAutos(libreria):
        """
        Args:
            liberia(diccionario): posee como claves las fechas y como valor la cantidad de registros de auto.

        Invoca un generador para obtener los datos de la gráfica.
        Una vez almacenados los datos, crea una gráfica lineal.
        """
        fechas = []
        cantidad = []
        for fecha, valores in generadores.grafica1(libreria):
            fechas.append(fecha)
            cantidad.append(valores)

        plt.plot(fechas, cantidad, color='green', linestyle='--', marker='o')

        plt.xlabel('Años del registro')
        plt.ylabel('Cantidad de vehículos registrados (millones)')
        plt.title('Cantidad de vehículos eléctricos registrados por año')
        plt.show()

    def graficaAutosTotalesAutosElectricos(autos_totales_electricos):
        """
        Args:
            autos_totales_electricos: matriz con fechas y registros de diferentes tipos

        Invoca un generador para obtener los datos de la gráfica.
        Una vez almacenados los datos, crea una gráfica de barras.
        Esta gráfica se compone de dos datos para observar el contraste.
        """
        fechas = []
        autos_totales = []
        autos_electricos = []
        for fecha, fecha_total, fecha_electricos in generadores.grafica2(autos_totales_electricos):
            fechas.append(fecha)
            autos_totales.append(fecha_total)
            autos_electricos.append(fecha_electricos)

        plt.bar(fechas, autos_totales, label='Resgistro total de vehículos')
        plt.bar(fechas, autos_electricos, label='Registro de vehículos eléctricos')

        # Agregamos títulos a los ejes y a la gráfica
        plt.xlabel('Años')
        plt.ylabel('Cantidad de registros (cientos de millones)')
        plt.title('Cantidad registrados de autos totales vs autos eléctricos ')
        plt.legend()
        plt.show()

    def graficasAumentoPorcentualAutos(tipo_auto, porcentaje_auto):
        """
        Args:
            tipo_auto(lista): diferentes tipos de autos eléctricos.
            porcentaje_auto(lista): porcentaje del aumento de registros de cada tipo de auto

        Crea una gráfica horizontal con el porcentaje que ha aumentado
        en registros cada tipo de auto en los últimos 11 años.
        """
        sns.set(style="whitegrid")

        plt.figure(figsize=(10, 6))
        sns.barplot(x=porcentaje_auto, y=tipo_auto, hue=porcentaje_auto, palette='viridis')

        plt.xlabel('Aumento Porcentual (%)')
        plt.ylabel('Código de Vehículo')
        plt.title('Aumento Porcentual de Autos Eléctricos')

        plt.show()

    def graficasFechaPorcentajeAutos(fechas, aumento_porcentaje):
        """
        Args:
            fechas(lista): fechas de los diferentes registros.
            aumento_porcentaje(lista): porcentaje que ha aumentado en cada año los resgistros.

        Crea una de dispersión y una lineal para mejorar la visualización.
        Releja como la cantidad de autos totales ha aumentado en los registros por año.
        """
        for i in range(len(fechas)):
            fechas[i] = int(fechas[i] - 13)/100
        plt.figure(figsize=(10, 6))
        sns.lineplot(x=fechas, y=aumento_porcentaje, color='#87CEEB', linestyle='-', markersize=0)
        sns.scatterplot(x=fechas, y=aumento_porcentaje, s=200, color='#40E0D0', marker='D')

        plt.xlabel('Año')
        plt.ylabel('(%)')
        plt.title('Aumento porcentual de vehículos por año')

        plt.show()
