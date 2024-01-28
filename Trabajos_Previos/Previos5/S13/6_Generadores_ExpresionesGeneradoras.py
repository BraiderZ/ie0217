'''Un generador es una función wue devuelve un iterador para devolver
una secuencia de valores que se imprimirán uno a uno'''


def my_generator(n):

    value = 0

    while value < n:

        # El con control se logra por medio de yield
        # De tiene el código hasta que vuelva a ser invocada la función
        yield value

        value += 1

# Como se mencionó antes, los for pueden funcionar para usar los iteradores
for value in my_generator(3):

    print(value)

'''Las expreciones generadoras es una forma de crear generadores
Estos son más compactos y se puede iterar para producir valores'''

squares_generator = (i*i for i in range(5))

for i in squares_generator:
    print(i)

'''Se puede realizar pipeline con los generadores de la siguiente manera:
segundo_generador(primer_generador)
El segundo recibe los datos dados por el primer generador'''
