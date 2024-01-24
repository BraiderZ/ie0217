class Mammal:
    def mammal_info(self):
        print("Mammals can give direct birth")
    
    def eat(self):
        print("Mammals can eat")

class WingedAnimal:
    def winged_animal_info(self):
        print("Winged animals can flap")
    def eat(self):
        print("Winged animals can eat")

#Las clases pueden heredar de diferentes clases a la vez
class Bat(Mammal,WingedAnimal):
    pass

#Una clase puede heredar de una clase que ya heredaba
class BabyBat(Bat):
    pass

bb1 = BabyBat()
bb1.mammal_info()
bb1.winged_animal_info()
#Como dos clases de las que llegó a heredar poseen el mismo método, usa el método de la primera clase que de la que se heredó
bb1.eat()

