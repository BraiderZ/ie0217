class TiposAlergia:
    def __init__(self):
        self.lista_inicial_valores = []
        self.lista_inicial_nombres = []
        self.alergias_nombres_usuario = []
        self.alergias_valores_usuario = []
        self.alergias_sin_nombre = []
        self.alergias_sin_valor = []
        self.opcion = 0
        self.cantidad_alergias = 0

    def opcionIngresar(self, alergias_sistema):
        print("\n---Maneras de ingresar las alergias---\n")
        print("1. Solo nombres de las alergias")
        print("2. Solo valores de las alergias")
        print("3. Nombres y valores de las alergias")
        self.opcion = int(input("Elija una manera: "))
        self.cantidad_alergias = int(input("Ingrese la cantidad de alergias a verficiar: "))
        self.ingresarAlergias(alergias_sistema)
    
    def evaluarDatos(self, alergias_sistema):
        if (self.opcion == 1):
            for i in range(len(self.lista_inicial_nombres)):
                parte_sistema = False
                for j in range(len(alergias_sistema.nombres_alergias)):
                    if (self.lista_inicial_nombres[i].lower() == alergias_sistema.nombres_alergias[j].lower()):
                        self.alergias_nombres_usuario.append(alergias_sistema.nombres_alergias[j])
                        self.alergias_valores_usuario.append(alergias_sistema.valores_alergias[j])
                        parte_sistema = True
                        break
                if (parte_sistema == False):
                    self.alergias_sin_valor.append(self.lista_inicial_nombres[i])

        elif(self.opcion == 2):
            for i in range(len(self.lista_inicial_valores)):
                parte_sistema = False
                for j in range(len(alergias_sistema.valores_alergias)):
                    if (self.lista_inicial_valores[i] == alergias_sistema.valores_alergias[j]):
                        self.alergias_nombres_usuario.append(alergias_sistema.nombres_alergias[j])
                        self.alergias_valores_usuario.append(alergias_sistema.valores_alergias[j])
                        parte_sistema = True
                        break
                if (parte_sistema == False):
                    self.alergias_sin_nombre.append(self.lista_inicial_valores[i])

        elif(self.opcion == 3):
            for i in range(len(alergias_sistema.valores_alergias)):
                parte_sistema = False
                for j in range(len(self.alergias_sin_nombre)):
                    if (self.alergias_sin_nombre[j] == alergias_sistema.valores_alergias[i]):
                        self.alergias_nombres_usuario.append(alergias_sistema.nombres_alergias[i])
                        self.alergias_valores_usuario.append(alergias_sistema.valores_alergias[i])
                        self.alergias_sin_nombre.remove(self.alergias_sin_nombre[j])
                        break
            for i in range(len(alergias_sistema.nombres_alergias)):
                parte_sistema = False
                for j in range(len(self.alergias_sin_valor)):
                    if (self.alergias_sin_valor[j].lower() == alergias_sistema.nombres_alergias[i].lower()):
                        self.alergias_nombres_usuario.append(alergias_sistema.nombres_alergias[i])
                        self.alergias_valores_usuario.append(alergias_sistema.valores_alergias[i])
                        self.alergias_sin_valor.remove(self.alergias_sin_valor[j])
                        break

    def ingresarAlergias(self, alergias_sistema):
        if (self.opcion == 1):
            for i in range(self.cantidad_alergias):
                nombre = input(f"Ingrese el nombre de la alergia {i+1}: ")
                if (nombre != ''):
                    self.lista_inicial_nombres.append(nombre)
            self.evaluarDatos(alergias_sistema)
        elif (self.opcion == 2):
            for i in range(self.cantidad_alergias):
                valor = int(input(f"Ingrese el valor de la alergia {i+1}: "))
                self.lista_inicial_valores.append(valor)
            self.evaluarDatos(alergias_sistema)
        elif (self.opcion == 3):
            for i in range(self.cantidad_alergias):
                nombre = input(f"Ingrese el nombre de la alergia {i+1}\
                               \nEn caso de que la alergia no posea nombre, presione Enter: ")
                valor = int(input(f"Ingrese el valor de la alergia {i+1}:\
                                \nEn caso de no poseer valor, ingrese 0: "))
                if (nombre == '' and valor == 0):
                    pass
                elif (nombre == ''):
                    self.alergias_sin_nombre.append(valor)
                elif (valor == 0):
                    self.alergias_sin_valor.append(nombre)
                else:
                    self.alergias_nombres_usuario.append(nombre)
                    self.alergias_valores_usuario.append(valor)
            self.evaluarDatos(alergias_sistema)
        else:
            print("La opcion elegida es invalida\n")
