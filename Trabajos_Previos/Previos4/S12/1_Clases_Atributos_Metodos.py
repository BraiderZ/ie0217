#Creamos una clase
class Room:
    #Definimos los atributos con un valor por defecto
    length = 0.0
    breadth = 0.0

    #Creamos un método para calcular el área
    def calculate_area(self): #Es necesario agregar el self para usar atributos o métodos de la función
        print("Area of Room =", self.length * self.breadth)

#Creamos un objeto
study_rom = Room()

#Podemos asignarle valor a los atributos si queremos cambiarlos
study_rom.length = 42.5
study_rom.breadth = 30.8

#Invocamos el método
study_rom.calculate_area()



