from Practica1_CrearDataFrame import DatosCsv
from Practica1_Graficas import Graficas
from time import sleep


def main():
    try:
        datos = DatosCsv("MER_T01_09.csv")
        graficas = Graficas
        datos.limpiarDatos()
        datos.analisisExhaustivo()
        print("Creando las graficas...")
        sleep(5)

        diccionario_informe = datos.informe_detallado_fecha()
        graficas.graficaFechasCantidadAutos(diccionario_informe)

        autos_totales_electricos = []
        for i in datos:
            autos_totales_electricos.append(i)
        graficas.graficaAutosTotalesAutosElectricos(autos_totales_electricos)

        tipo_auto, porcentaje_auto = datos.iterador_dataframe_electricos()
        graficas.graficasAumentoPorcentualAutos(tipo_auto, porcentaje_auto)

        fechas, aumento_porcentaje = datos.iterador_dataframe_totales()
        graficas.graficasFechaPorcentajeAutos(fechas, aumento_porcentaje)

    except FileNotFoundError:
        print("Error: el archivo csv enviado para analizar no existe.")
    except Exception as e:
        print(f"A ocurrido un error: {e}")


main()
