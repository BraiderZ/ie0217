import pandas as pd
import math
from time import sleep


class Alergias:
    nombres_alergias = []
    valores_alergias = []

    def __init__(self, nombre_archivo):
        with open(nombre_archivo, 'r') as archivo:
            for linea in archivo:
                linea = linea.strip()
                if linea:
                    nombre, valor = linea.rsplit(' (', 1)
                    self.nombres_alergias.append(nombre)
                    self.valores_alergias.append(int(valor[:-1]))

    def imprimirValores(self, opcion):
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
