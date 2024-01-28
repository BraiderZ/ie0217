'''Los clouses tiene como objetivo ser una función dentro de otra
que ayuda a obtener los valores dados a su variable externa y acceder
a ella en algún otro momento'''


def calculate():
    num = 1

    def inner_func():
        nonlocal num
        num += 2
        return num
    # Para que funcione, se invoca la función anidada dentro de la externa
    # También pueden ser funciones lambda
    return inner_func


# odd almacena la función creada
odd = calculate()

# Cada vez que invocamos odd, avanzarán los valores que retornan
print(odd())
print(odd())
print(odd())

'''La ventaja recae en que si varias variables almacenan la misma función
cada una tiene valores independientes de las otras.'''
odd2 = calculate()

print(odd2())
