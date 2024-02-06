"""
Practica1_Generadores.py

Funciones encargadas de mejorar la forma de los datos a analizar.


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


def grafica1(libreria):
    """
    Args:
        libreria(diccionario): posee como claves las fechas y como valor la cantidad de registros de auto.
    
    Divide la liberia entre sus dos datos mientras mejora la forma de visualizar las fechas.
    """
    for fecha in libreria:
        fecha_sin_mes = int((fecha - 13)/100)
        yield fecha_sin_mes, libreria[fecha]


def grafica2(autos_totales_electricos):
    """
    Args:
        autos_totales_electricos: matriz con fechas y registros de diferentes tipos

    Mejora la visualización de la fecha y de la cantidad de registros.
    """
    for i in range(len(autos_totales_electricos)):
        fecha = (int((autos_totales_electricos[i][0] - 13)/100))
        fecha_total = (autos_totales_electricos[i][1] * 1000)
        fecha_electricos = (autos_totales_electricos[i][2] * 1000)
        yield fecha, fecha_total, fecha_electricos