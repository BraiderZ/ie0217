import sys
import os

"""
__main__.py

Función encargada de ejecutar el programa como un paquete.


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

sys.path.append(os.path.dirname(os.path.abspath(__file__)))
"""
Revisa que se encuentre en el directorio para importar las bibliotecas
"""
from request import obtenerDatos
from datos_pandas import DatosPandas
from regresion import Regresiones
from clustering import Clustering


def main():
    """
    Usa la función encargada de obtener los datos
    Crea instancias de las tres clases que componen el programa
    y ejecuta los métodos
    """
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
