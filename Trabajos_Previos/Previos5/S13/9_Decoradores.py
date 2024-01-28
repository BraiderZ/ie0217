'''Los decoradores son funciones que tienen objetivo agregar funcionalidades
nuevas a una función  ya creada.
Esto lo puede realizar de varias maneras:
Por medio de funciones anidadas
Pasar como argumento la función original
Retornando la función'''


def add(x, y):
    return x + y


# Toma una función y la invoca
def calculate(func, x, y):
    return func(x, y)


result = calculate(add, 4, 6)
print(result)
