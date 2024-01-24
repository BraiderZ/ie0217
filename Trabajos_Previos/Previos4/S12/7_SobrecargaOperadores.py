
class Point(object):
    def __init__(self,x = 0, y= 0):
        self.x = x
        self.y = y

    #Le creamos un funcionamiento para cuando usamos print
    def __str__(self):
        return "({0},{1})".format(self.x,self.y)

    #Ahora cuando se sumando objetos de esta clase, se crea un nuevo objeto con la suma de sus atributos
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x,y)
    
    #Ahora podemos comparar dos objetos
    def __lt__(self, other):
        result = self.x < other.x
        return result

p1 = Point(1, 2)
p2 = Point(2,3)

print(p1+p2)
result = p1 < p2
print(result)