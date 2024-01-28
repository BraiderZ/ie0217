'''Si queremos valorar excepciones, colocamos el código
dentro de un bloque try'''
try:
    num = int(input("Enter a number: "))

    '''assert tiene como objetivo que salte una excepción
    si no se cumple la condición'''
    assert num % 2 == 0

    '''El except se encarga de manejar los diferentes errores.
    Podemos definirle tanto un tipo de excepción o ninguno en caso
    de qu queramos que cualquier tipo de error ejecute el código
    en el bloque except'''
except:
    print("Not an even number!")

# El else siempre se ejecuta si no salta ninguna excepción
else:
    reciprocal = 1/num
    print(reciprocal)

# finally siempre se ejecuta sin importar si suceden excepciones o no
finally:
    print("This is a finally block")
