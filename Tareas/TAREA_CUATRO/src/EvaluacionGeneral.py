import pandas as pd
from time import sleep
"""
EvaluacionGeneral.py

Clase encargada de recibir de manera organizada los diferentes resultados para el cálculo e impresión


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

class EvaluacionGeneral():
    def __init__(self):
        """
        Constructor de la clase EvaluacionGeneral.

        Inicializa las variables para almacenar la puntuación general y los porcentajes de alergias conocidas y desconocidas.

        Attributes:
            puntuacion_general (int): Puntuación total de alergias del usuario.
            porcentaje_conocido (float): Porcentaje de alergias conocidas.
            porcentaje_desconocido (float): Porcentaje de alergias desconocidas.
        """
        self.puntuacion_general = 0
        self.porcentaje_conocido = 0
        self.porcentaje_desconocido = 0

    def calcularPuntuacion(self, tipos_alergia):
        """
        Método que calcula la puntuación general de alergias, invoca el cálculo de porcentajes e invoca la impresión.

        Args:
            tipos_alergia (TiposAlergia): Instancia de la clase TiposAlergia.

        """
        for valores in tipos_alergia.alergias_valores_usuario:
            self.puntuacion_general += valores
        self.calcularPorcentaje(tipos_alergia)
        self.imprimirResultados(tipos_alergia)

    def calcularPorcentaje(self, tipos_alergia):
        """
        Método que calcula los porcentajes de alergias conocidas y desconocidas.
        Veficia cuantas alergias hay en total para dividir la cantidad de valores conocido o desconocidos sobre ello

        Args:
            tipos_alergia (TiposAlergia): Instancia de la clase TiposAlergia.

        """
        cantidad_total_alergias = len(tipos_alergia.alergias_nombres_usuario) + len(tipos_alergia.alergias_sin_nombre) + len(tipos_alergia.alergias_sin_valor)
        if (cantidad_total_alergias != 0):
            self.porcentaje_conocido = 100 * (len(tipos_alergia.alergias_nombres_usuario)/cantidad_total_alergias)
            self.porcentaje_desconocido = 100 * ((len(tipos_alergia.alergias_sin_nombre) + len(tipos_alergia.alergias_sin_valor))/cantidad_total_alergias)

    def imprimirResultados(self, tipos_alergia):
        """
        Método que imprime los resultados de la evaluación general.

        Muestra la puntuación total de alergias, datos existentes en el sistema y resultados desconocidos.
        En caso de no haber datos existentes o desconocidos, lo indica.
        La impresión se realiza con DataaFrames para mejorar la visualización

        Args:
            tipos_alergia (TiposAlergia): Instancia de la clase TiposAlergia.

        """
        existen = pd.DataFrame(
            {
                "Nombres de Alergias": tipos_alergia.alergias_nombres_usuario,
                "Valores": tipos_alergia.alergias_valores_usuario,
            }
        )
        
        existe_sort = existen.sort_values(by="Valores")

        desconocido_valores = pd.DataFrame(
            {
                "Valores Desconocidos": tipos_alergia.alergias_sin_nombre,
            }
        )

        desconocido_valores_sort = desconocido_valores.sort_values(by="Valores Desconocidos")

        desconocido_nombres = pd.DataFrame(
            {
                "Nombres Desconocidos": tipos_alergia.alergias_sin_valor,
            }
        )

        print("Puntuacion total de alergia: ", self.puntuacion_general)
        sleep(1)
        print("\n---Datos existentes en el sistema---\n")
        if (len(tipos_alergia.alergias_nombres_usuario) > 0):
            print(existe_sort.to_string(index=False))
            sleep(2)
        else:
            print("No existen valores conocidos")
        print("\n---Resultados Desconocidos---\n")
        if (len(tipos_alergia.alergias_sin_nombre) > 0):
            print(desconocido_valores_sort.to_string(index=False))
            sleep(1)
        if (len(tipos_alergia.alergias_sin_valor) > 0):
            print(desconocido_nombres.to_string(index=False))
            sleep(1)
        elif (len(tipos_alergia.alergias_sin_nombre) <= 0):
            print("No existen valores desconocidos")
            sleep(1)
        print(f"\nPorcentaje de valores conocidos {round(self.porcentaje_conocido, 2)}%")
        print(f"Porcentaje de valores desconocidos {round(self.porcentaje_desconocido, 2)}%")