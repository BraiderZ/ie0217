import sys
import os

sys.path.append(os.path.dirname(os.path.abspath(__file__)))
from request import obtenerDatos
from datos_pandas import DatosPandas
from regresion import Regresiones
from clustering import Clustering


def main():
    obtenerDatos()
    manejo_datos = DatosPandas()
    manejo_datos.limpezaDatos()
    datos = manejo_datos.getDatos()
    regresiones = Regresiones(datos)
    regresiones.datosRegresionLineal1()
    regresiones.datosRegresionNoLineal1()
    regresiones.datosRegresionLineal2()
    regresiones.datosRegresionNoLineal2()
    clustering = Clustering(datos)
    clustering.clusteringKMeans1()
    clustering.clusteringKMeans2()


if __name__ == "__main__":
    

    main()
