my_list = [4, 7, 0]

# Se crea un iterador para reproducir cada valor de la lista elegida
iterator = iter(my_list)

# next itera uno por uno los valores gracias al iterador
print(next(iterator))
print(next(iterator))
print(next(iterator))

# Podemos crear un iterador propio por medio de clases


class PowTwo:
    def __init__(self, max=0):
        self.max = max

    # En el método mágico iter colocamos la inicialización
    def __iter__(self):
        self.n = 0
        return self

    # Definimos el funcionamiento del next
    def __next__(self):
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result
        # Condición cuando se itera a un valor no existente
        else:
            raise StopIteration


numbers = PowTwo(3)

# Creamos el iterador
i = iter(numbers)

print(next(i))
print(next(i))
print(next(i))
print(next(i))

'''También se pueden utilizar bloques for tanto para semejar
iteradores como para utilizar una clase que se puede iterar'''
