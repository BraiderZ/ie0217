import pandas as pd
from time import sleep


class EvaluacionGeneral():
    def __init__(self):
        self.puntuacion_general = 0
        self.porcentaje_conocido = 0
        self.porcentaje_desconocido = 0

    def calcularPuntuacion(self, tipos_alergia):
        for valores in tipos_alergia.alergias_valores_usuario:
            self.puntuacion_general += valores
        self.calcularPorcentaje(tipos_alergia)
        self.imprimirResultados(tipos_alergia)

    def calcularPorcentaje(self, tipos_alergia):
        cantidad_total_alergias = len(tipos_alergia.alergias_nombres_usuario) + len(tipos_alergia.alergias_sin_nombre) + len(tipos_alergia.alergias_sin_valor)
        if (cantidad_total_alergias != 0):
            self.porcentaje_conocido = 100 * (len(tipos_alergia.alergias_nombres_usuario)/cantidad_total_alergias)
            self.porcentaje_desconocido = 100 * ((len(tipos_alergia.alergias_sin_nombre) + len(tipos_alergia.alergias_sin_valor))/cantidad_total_alergias)

    def imprimirResultados(self, tipos_alergia):
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