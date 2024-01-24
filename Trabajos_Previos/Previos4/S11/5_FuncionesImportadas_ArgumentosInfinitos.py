#Podemos importar módulos que poseen métodos para usar sobre los diferentes tipos de datos
import math #Usamos import para incluir la librería

square_root = math.sqrt(4) 

print("Square Root of 4 is",square_root)

power = math.pow(2,3)

print("2 to the power 3 is", power)

#Si en una función agregamos *, puede recibir infinitos argumentos
def find_sum(*numbers): 
    result = 0

    for num in numbers:
        result = result + num
    print("Sum =", result)

find_sum(1,2,3,4,5,6,7)
find_sum(4,9)