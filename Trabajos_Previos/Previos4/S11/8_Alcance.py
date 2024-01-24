#Creamos una variable local a la cual, todos pueden acceder a su valor
num = 33

def outer():
    #Otra vez se define la variable, pero como es variable local, su valor no influye en el resto del programa
    num = 20

    def inner():
        #Al colocar la palabra global, no solo tomará el valor de la variable global, si no que, puede modificar el valor para todos
        #De la misma manera, si recibiera como algumento una variable y agrega al principio nonlocal, modifica el valor del argumento donde fue definida la variable
        global num
        num = 25
    
    print("Before calling inner", num)
    inner()
    #Sigue siendo igual porque utiliza su propia versión de num
    print("After calling inner", num)

print("Befor outer", num)
outer()
#Cambia porque sí utiliza la versión global de la variable
print("Outside", num)