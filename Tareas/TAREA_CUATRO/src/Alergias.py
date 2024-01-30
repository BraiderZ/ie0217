import pandas as pd
import math
from time import sleep
"""
Alergias.py

Clase encargada de almacenar las alergias del sistema


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

class Alergias:
    """
    Atributos:
        nombres_alergias (list): Almacena los nombres de las alergias
        valores_alergias (list): Almacena los valores de las alergias
    """
    nombres_alergias = []
    valores_alergias = []

    def __init__(self, nombre_archivo):
        """
        Abre el archivo con las alergias y las separa en su valor y su nombre
        """
        with open(nombre_archivo, 'r') as archivo:
            for linea in archivo:
                linea = linea.strip()
                if linea:
                    nombre, valor = linea.rsplit(' (', 1)
                    self.nombres_alergias.append(nombre)
                    self.valores_alergias.append(int(valor[:-1]))

    def imprimirValores(self, opcion):
        """
        Agrs:
            opcion (int): opción de impresión elegida

        En caso de elegir la opción 1, crea un DataFrame para mejor visualización y lo imprime
        En caso de elegit la opción 2, imprime el valor y nombre si la alergia ingresada existe
        """
        if (opcion == 1):
            df = pd.DataFrame(
                {
                    "Nombre de la alergia": self.nombres_alergias,
                    "Valores": self.valores_alergias,
                }
            )
            print(df.to_string(index=False), "\n")
        elif (opcion == 2):
            nombre = input("Ingrese el nombre de la alergia de la que desea saber informacion: ")
            existe_alergia = False
            for i in range(len(self.nombres_alergias)):
                nombre_sistema = self.nombres_alergias[i]
                if (nombre.lower() == nombre_sistema.lower()):
                    print(f"Nombre de la alergia: {self.nombres_alergias[i]} --- Valor: {self.valores_alergias[i]}\n")
                    existe_alergia = True
            if (existe_alergia == False):
                print("La alergia mencionada no existe en el sistema.")

    def nuevaAlergia(self):
        """
        Toma el nombre y valor elegidos para la nueva alergia y verifica que no exista ninguna en el sistema
        Si no existe, verfica que el valor sea una potencia de 2
        """
        nombre = input("Ingrese el nombre de la nueva alergia: ")
        valor = int(input("Ingrese el valor de la nueva alergia: "))
        for i in range(len(self.nombres_alergias)):
            if (nombre.lower == self.nombres_alergias[i].lower):
                print("El nombre ingresado ya existe en el sistema")
                return
            elif (valor == self.valores_alergias[i]):
                print("El valor ingresado ya existe en el sistema")
                return
        if (math.log2(valor).is_integer() and valor > 0):
            self.nombres_alergias.append(nombre)
            self.valores_alergias.append(valor)
            print("Nueva alergia agregada al sistema")
            sleep(1)
        else:
            print("El valor ingresado no es potencia de 2")