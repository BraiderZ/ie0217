import numpy as np
import pandas as pd
"""
Practica2_Calificaciones.py

Funciones encargadas de la parte práctica 2.


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


def crearMatrizMateriasNombres():
    """
    Crea una matriz 5x5 con valores aleatorios para asignar calificaiones
    a 5 estudiantes.

    Crea la lista de los 5 estudiantes y de las 5 materias.

    Retorna las 3 variables creadas.
    """
    matriz_asignaturas = np.round(np.random.uniform(0, 101, size=(5, 5)), 2)
    nombres = ['Luis', 'Esteban', 'Veronica', 'Arnold', 'Jhonny']
    materias = ['Calculo 3', 'Circuitos Digitales', 'Fisica 3',
                'Humanidades 2', 'Circuitos Lineales 1']
    return matriz_asignaturas, nombres, materias


def imprimirDatos(matriz_asignaturas, estudiantes, materias):
    """
    Args:
        matriz_asignaturas(lista): matriz 5x5 con las calificaciones
        de los estudiantes.
        estudiantes: nombres de los estudiantes.
        materias: materias de cada estudiante.

    Toma los datos y crea un DataFrame para imprimirlos.
    """
    df_datos = pd.DataFrame(
        {
            'Estudiantes': estudiantes,
            materias[0]: matriz_asignaturas[:, 0],
            materias[1]: matriz_asignaturas[:, 1],
            materias[2]: matriz_asignaturas[:, 2],
            materias[3]: matriz_asignaturas[:, 3],
            materias[4]: matriz_asignaturas[:, 4],
        }
    )

    print("\nDatos:")
    print(df_datos)


def calculoPromedios(matriz_asignaturas, estudiantes, materias):
    """
    Args:
        matriz_asignaturas(lista): matriz 5x5 con las calificaciones
        de los estudiantes.
        estudiantes: nombres de los estudiantes.
        materias: materias de cada estudiante.

    Toma los datos por medio de un loop calcula el promedio de calificaciones
    por estudiante(promedio de filas) y por asignatura (promedio de columnas).

    Crea dos DataFrame, uno para los promedios de los estudiantes y otro
    para las asignaturas.

    Imprime los DataFrames.
    """
    promedios_estudiantes = []
    promedios_materias = []
    for i in range(len(matriz_asignaturas)):
        promedio_estudiante = np.mean(matriz_asignaturas[i, :])
        promedios_estudiantes.append(promedio_estudiante)
        promedios_materia = np.mean(matriz_asignaturas[:, i])
        promedios_materias.append(promedios_materia)

    print("\nPromedio de las calificaciones por estudiante:")
    df_promedios_estudiantes = pd.DataFrame(
        {
            'Estudiantes': estudiantes,
            'Promedios': promedios_estudiantes,
        }
    )

    print(df_promedios_estudiantes)

    print("\nPromedio por asignatura:")
    df_promedios_materias = pd.DataFrame(
        {
            'Materias': materias,
            'Promedios': promedios_materias,
        }
    )

    print(df_promedios_materias)


def calificacionMaxima(matriz_asignaturas, estudiantes):
    """
    Args:
        matriz_asignaturas(lista): matriz 5x5 con las calificaciones
        de los estudiantes.
        estudiantes: nombres de los estudiantes.

    Por medio de un loop, guarda la calificación máxima de cada estudiante.

    Imprime los datos obtenidos después de crear un DataFrame.
    """
    calificacion_maxima = []

    for i in range(len(matriz_asignaturas)):
        maxima = np.max(matriz_asignaturas[i, :])
        calificacion_maxima.append(maxima)

    df_maxima = pd.DataFrame(
        {
            'Estudiantes': estudiantes,
            'Calificacion Maxima': calificacion_maxima,
        }
    )

    print("\nCalificacion mas alta de cada estudiante:")
    print(df_maxima)


def sumaTotalMaterias(matriz_asignaturas, materias):
    """
    Args:
        matriz_asignaturas(lista): matriz 5x5 con las calificaciones
        de los estudiantes.
        materias: materias de cada estudiante.

    Suma, gracias a un loop, las calificaciones de cada asignatura.

    Cread un DataFrame con los resultados y los imprime.
    """
    sumas_materias = []

    for i in range(len(matriz_asignaturas)):
        suma = np.sum(matriz_asignaturas[:, i])
        sumas_materias.append(suma)

    df_suma_materias = pd.DataFrame(
        {
            'Materias': materias,
            'Calificacion Total': sumas_materias,
        }
    )

    print('\nSuma total de calificaciones por materia:')
    print(df_suma_materias)


def main():
    """
    Invoca las diferentes funciones.
    """
    matriz_asignaturas, estudiantes, materias = crearMatrizMateriasNombres()
    imprimirDatos(matriz_asignaturas, estudiantes, materias)
    calculoPromedios(matriz_asignaturas, estudiantes, materias)
    calificacionMaxima(matriz_asignaturas, estudiantes)
    sumaTotalMaterias(matriz_asignaturas, materias)


main()
