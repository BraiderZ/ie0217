from Practica1_CrearDataFrame import DatosCsv
from Practica1_Graficas import Graficas
from time import sleep
"""
Practica1_main.py

Función encarga de iniciar el programa.


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


def main():
    """
    Crea instancias de las diferentes clases mietras
    invoca sus métodos para analizar o graficar los
    datos.

    Posee un manejo de excepciones por si el csv no existe o
    sucede algún otro fallo.
    """
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
