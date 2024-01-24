
number = -1

# Si queremos hacer una condición, usamos el if
if (number > 0):
    #Se necesita indentar el código para que funciones
    print("Positive number")
# Cada condición extra que agreguemos, se usa elif
elif (number == 0):
    print("Zero")
# Para el último caso o un caso no valorado, se usa else
else:
    print("Negative number")

print("This statement is always executed") #Siempre se ejecuta porque esta al mismo nivel que las condiciones, no indentado
