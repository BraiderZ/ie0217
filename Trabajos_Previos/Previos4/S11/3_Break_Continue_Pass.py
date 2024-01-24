i = 1

while i <=10:
    if (i  >= 6):
        # El break para inmediatamente el bucle y continua con el resto del código
        # Tabién puede usarse en el bucle for
        break
    elif (i == 2):
        # El continue hace que la salga de la iteración y continue a la siguiente
        # Puede usarse también en el bucle for
        i = i + 1
        continue
    elif (i == 3):
        # Si aún no hemos definido una condición, clase o función, es importante indicarla el programa con un pass que se definirá luego
        # pass significa que no tiene que hacer nada
        pass
    print('6 * ',(i), '=', 6*i)
    

    i = i + 1