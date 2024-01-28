# Función de corador encargada de verificar si se divide entre 0

def smart_divide(func):
    def inner(a, b):
        print("I am going to divide", a, "and", b)
        if b == 0:
            print("Whoops! cannot divide")
            return
        return func(a, b)
    return inner


def decorador_extra(func):
    def inner(*args, **kwargs):
        print("*" * 15)
        func(*args, **kwargs)
        print("*" * 15)
    return inner


# De esta manera le agregamos el decorador a la función
# Podemos encadenar varios decoradores
@decorador_extra
@smart_divide
def divide(a, b):
    print(a/b)


'''En caso de no colocar el decorador desde un creación, usamos el siguiente
diseño a la hora de invocar:
decorador(función)'''
divide(2, 5)
divide(2, 0)
