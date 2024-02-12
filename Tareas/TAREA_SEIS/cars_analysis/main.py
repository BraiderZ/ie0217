from request import obtenerDatos
from datos_pandas import DatosPandas
from regresion import Regresiones


def main():
    obtenerDatos()
    manejo_datos = DatosPandas()
    manejo_datos.limpezaDatos()
    datos = manejo_datos.getDatos()
    regresiones = Regresiones(datos)
    regresiones.datosRegresion1_lineal()


main()
