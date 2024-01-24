'''Definimos una función con def nombre(argumentos)
Podemos o no agregar argumentos, si agregamos argumentos, podemos definirles un valor por defecto'''
def find_square(num = 9):
    result = num * num
    #Si queremos, podemos retornar valores
    return result

#Debemos de invocar la función
#En caso de retornar valores, debemos hacer que una variable invoque la función para que se guarde el valor
#Si creamos una variable e invocamos una función que no devuelve nada, la viriable se convierte en None
square = find_square(3) 
'''Si la función tiene varios argumentos a esperar ya definidos por defecto,
enviar argumentos sin especificar, los cambiará en nombre. También, podemos elegir el dato a cambiar con nombre_argumento = valor'''

print('Square:', square)