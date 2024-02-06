import matplotlib.pyplot as plt
import seaborn as sns
import Practica1_Generadores as generadores


class Graficas:

    def graficaFechasCantidadAutos(libreria):
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
