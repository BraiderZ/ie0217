class Polygon:
    def render(sef):
        print("Rendering Polygon...")

#Polimorfismo consiste en que una misma entidad, actua diferente dependiendo de la situación
#En el caso de las clases, lo vemos reflejado cuando heredamos de una clase y sobreescribimos un método
class Square(Polygon):
    def render(sef):
        print("Rendering Square...")

class Circle(Polygon):
    def render(sef):
        print("Rendering Circle...")

s1 = Square()
s1.render()

c1 = Circle()
c1.render()