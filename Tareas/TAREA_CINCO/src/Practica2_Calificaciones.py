import numpy as np
import pandas as pd


def crearMatrizMateriasNombres():
    matriz_asignaturas = np.round(np.random.uniform(0, 101, size=(5, 5)), 2)
    nombres = ['Luis', 'Esteban', 'Veronica', 'Arnold', 'Jhonny']
    materias = ['Calculo 3', 'Circuitos Digitales', 'Fisica 3',
                'Humanidades 2', 'Circuitos Lineales 1']
    return matriz_asignaturas, nombres, materias


def imprimirDatos(matriz_asignaturas, estudiantes, materias):
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
    matriz_asignaturas, estudiantes, materias = crearMatrizMateriasNombres()
    imprimirDatos(matriz_asignaturas, estudiantes, materias)
    calculoPromedios(matriz_asignaturas, estudiantes, materias)
    calificacionMaxima(matriz_asignaturas, estudiantes)
    sumaTotalMaterias(matriz_asignaturas, materias)


main()
