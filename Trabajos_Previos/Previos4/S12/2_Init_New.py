
class Point(object):
    '''Si queremos que a la hora de crear un objeto, se cumplan ciertas restricciones
    o queremos modificar la manera de crear un objeto de manera diferente, usamos new.
    Su uso no es común'''
    def __new__(cls,*args,**kmargs):
        print("From new")
        print(cls)
        print(args)
        print(kmargs)

        obj = super().__new__(cls)
        return obj

    #Funciona como el constructor si queremos definir valores en los atributos a la vez que se crea el objeto
    def __init__(self,x = 0, y= 0):
        print("From init")
        self.x = x
        self.y = y
    '''Todos los métodos que inician con __ son llamados mágicos.
    Su función es personalizar el comportamiento de una clase'''

point1 = Point(2,9)
print(point1.x,point1.y)