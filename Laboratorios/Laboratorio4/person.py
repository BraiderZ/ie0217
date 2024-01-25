class Person:
    #Creamos el "constructor" para crear los atributos con argumentos enviados por el usuario
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    #Método encargado de imprimir los datos
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")

