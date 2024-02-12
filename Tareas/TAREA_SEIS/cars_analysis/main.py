from request import obtenerDatos
from datos_pandas import DatosPandas



def main():
    obtenerDatos()
    manejo_datos = DatosPandas()
    manejo_datos.limpezaDatos()
    datos = manejo_datos.getDatos()


main()
