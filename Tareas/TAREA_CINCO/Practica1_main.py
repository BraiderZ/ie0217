from Practica1_CrearDataFrame import DatosCsv


def main():
    try:
        datos = DatosCsv("MER_T01_09.csv")
        datos.limpiarDatos()
        datos.multiplicarValores()
        datos.analisisExhaustivo()
    except FileNotFoundError:
        print("Error: el archivo csv enviado para analizar no existe.")
    except Exception as e:
        print(f"A ocurrido un error: {e}")


main()
