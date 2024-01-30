import pandas as pd
from time import sleep
"""
EvaluacionEspecifica.py

Clase encargada de tomar el puntaje de alergia y conseguir la combinación de alergias del usuario


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

class EvaluacionEspecifica():
    
    def __init__(self):
        """
        Constructor que agrega como atributo la puntuación de alergia del usuario
        """
        self.puntuacion_usuario = int(input("Ingrese su puntuacion de alergia: "))

    def imprimirResultados(self, combinacion_valores, combinacion_nombres):
        """
        Args:
            combinacion_valores (list): Lista de los valores de cada alergia del usuario
            combinacion_nombres (list): Lista de los nombres de cada alergia del usuario

        Crea un DataFrame con las alergias del usuario para ser impresas
        """       
        df = pd.DataFrame(
            {
                "Alergias del usuario": combinacion_nombres,
                "Valores": combinacion_valores,
            }
        )
        print(df.to_string(index=False))

    def encontrarCombinacion(self, alergias_sistema, actual, suma, combinacion_valores, combinacion_nombres):
        """
        Args:
            alergias_sistema (Alergias): Alergias que se encuentran en el sistema
            actual (int): Deja de lado los valores iterados anteriormente
            suma (int): Suma actual de la combinación
            combinaciones_valores: Valores actuales de las alergias en la combinación
            combinaciones_nombres: Nombres actuales de las alergias en la combinación
        
        La recursividad tiene como punto final que se llegue a una suma igual a la puntuación del usuario
        Cada vez va disminuyendo el rango del loop para dejar valores ya revisados
        Verifica que el valor que se esta iterando no se encuentre en la combinación del momento y que al sumarla no supere la puntuación del usuario
        Este proceso lo realiza hasta conseguir la cobinación correcta o se hayan revisado todas las combinaciones posibles
        Es importante resetear las variables en cada recursividad para evitar mantener datos anteriores
        """
        if suma == self.puntuacion_usuario:
            self.imprimirResultados(combinacion_valores, combinacion_nombres)
            return True

        for i in range(actual, len(alergias_sistema.valores_alergias)):
            if alergias_sistema.valores_alergias[i] not in combinacion_valores and suma + alergias_sistema.valores_alergias[i] <= self.puntuacion_usuario:
                combinacion_valores_nueva = combinacion_valores + [alergias_sistema.valores_alergias[i]]
                combinacion_nombres_nueva = combinacion_nombres + [alergias_sistema.nombres_alergias[i]]
                if self.encontrarCombinacion(alergias_sistema, i + 1, suma + alergias_sistema.valores_alergias[i], combinacion_valores_nueva, combinacion_nombres_nueva):
                    return True

        return False

    def evaluarAlergias(self, alergias_sistema):
        """
        Condiciones encargadas de invocar al método que verifica la combinación de alergias del usuario
        Si existe una combinación, invoca a la función que imprime las alergias, si no, imprime un mensaje de error
        """
        if self.encontrarCombinacion(alergias_sistema, 0, 0, [], []):
            print("Estas son tus alergias.\nPor favor, evita comer los alimentos mencionados en la lista.\n")
            sleep(3)
        else:
            print("No hay combinación que sume exactamente la puntuación del usuario.\n")