from Practica1_CrearDataFrame import DatosCsv


def main():
    try:
        datos = DatosCsv("MER_T01_09.csv")
        datos.limpiarDatos()
        datos.analisisExhaustivo()

        diccionario_informe = datos.informe_detallado_fecha()

        autos_totales_electricos = []
        for i in datos:
            autos_totales_electricos.append(i)

        tipo_auto, porcentaje_auto = datos.iterador_dataframe_electricos()
        fechas, aumento_porcentaje = datos.iterador_dataframe_totales()

    except FileNotFoundError:
        print("Error: el archivo csv enviado para analizar no existe.")
    except Exception as e:
        print(f"A ocurrido un error: {e}")


main()
