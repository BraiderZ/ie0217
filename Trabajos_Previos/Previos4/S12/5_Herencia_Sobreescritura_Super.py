class Animal:
    name = ""

    def eat(self):
        print("I can eat")

#Creamos la clase derivada
class Dog(Animal):

    #Podemos sobreescribir el método de la clase padre
    def eat(self):
        
        #Si queremos que aún siga sucediendo lo del método base, usamos super para invocarlo
        super().eat()

        print("I like to eat bones")

labrador = Dog()

labrador.eat()