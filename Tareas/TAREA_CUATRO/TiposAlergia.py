class TiposAlergia:
    lista_inicial_valores = []
    lista_inicial_nombres = []
    alergias_nombre = []
    alergias_valores = []
    alergias_sin_nombre = []
    alergias_sin_valor = []
    opcion = 0

    def opcionIngresar(self):
        print("---Maneras de ingresar las alergias---")
        print("1. Solo nombres de las alergias")
        print("2. Solo valores de las alergias")
        print("3. Nombres y valores de las alergias")
        self.opcion = int(input("Elija una manera: "))

    def ingresarAlergias(self):
        if (self.opcion == 1):
            pass
        elif (self.opcion == 2):
            pass
        elif (self.opcion == 3):
            pass
        else:
            print("La opcion elegida es invalida\n")
