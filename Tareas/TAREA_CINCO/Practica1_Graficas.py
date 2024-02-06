import matplotlib.pyplot as plt
import seaborn as sns


class Graficas:

    def graficaFechasCantidadAutos(self, libreria):
        fechas = []
        cantidad = []
        for fecha in libreria:
            fecha_sin_mes = int((fecha - 13)/100)
            fechas.append(fecha_sin_mes)
            cantidad.append(libreria[fecha])
        plt.plot(fechas, cantidad, color='green', linestyle='--', marker='o')

        plt.xlabel('Años del registro')
        plt.ylabel('Cantidad de vehículos registrados (millones)')
        plt.title('Cantidad de vehículos eléctricos registrados por año')
        plt.show()

    def graficaAutosTotalesAutosElectricos(autos_totales_electricos):
        fechas = []
        autos_totales = []
        autos_electricos = []
        for i in range(len(autos_totales_electricos)):
            fechas.append(int((autos_totales_electricos[i][0] - 13)/100))
            autos_totales.append(autos_totales_electricos[i][1] * 1000)
            autos_electricos.append(autos_totales_electricos[i][2] * 1000)

        plt.bar(fechas, autos_totales, label='Resgistro total de vehículos')
        plt.bar(fechas, autos_electricos, label='Registro de vehículos eléctricos')

        # Agregamos títulos a los ejes y a la gráfica
        plt.xlabel('Años')
        plt.ylabel('Cantidad de registros (cientos de millones)')
        plt.title('Cantidad registrados de autos totales vs autos eléctricos ')
        plt.legend()
        plt.show()

    def graficasAumentoPorcentualAutos(tipo_auto, porcentaje_auto):
        sns.set(style="whitegrid")

        plt.figure(figsize=(10, 6))
        sns.barplot(x=porcentaje_auto, y=tipo_auto, hue=porcentaje_auto, palette='viridis')

        plt.xlabel('Aumento Porcentual (%)')
        plt.ylabel('Código de Vehículo')
        plt.title('Aumento Porcentual de Autos Eléctricos')

        plt.show()

    def graficasFechaPorcentajeAutos(fechas, aumento_porcentaje):
        for i in range(len(fechas)):
            fechas[i] = int(fechas[i] - 13)/100
        plt.figure(figsize=(10, 6))
        sns.lineplot(x=fechas, y=aumento_porcentaje, color='#87CEEB', linestyle='-', markersize=0)
        sns.scatterplot(x=fechas, y=aumento_porcentaje, s=200, color='#40E0D0', marker='D')

        plt.xlabel('Año')
        plt.ylabel('(%)')
        plt.title('Aumento porcentual de vehículos por año')

        plt.show()
