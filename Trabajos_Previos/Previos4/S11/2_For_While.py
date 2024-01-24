
print("Uso del for:")

'''for necesita un valor como iterador y una secuencia
Las secuencias pueden ser strings, listas, etc
Si queremos definir un rango, podemos usar: range(valor del rango)
Si no queremos guardar un valor en un iterador, simpllemente no lo colocamos'''
for x in "Python":
    print(x)
#Podemos colocar else después de un for o un while. Una vezse cumpla todo el for o quiebre el while, se ejecuta
else:
    print("No items left.")

print("\nUsando while:")

i = 0
n= 5

'''while depende de una condición, cuando deja de cumplirse, termina el bucle
Es importante tener una condición que sea capaz de quebrar el bucle en algún momento, si no, nunca terminará de ejecutarse'''
while i <= n:
    print(i)
    i = i + 1 #Si uno aumentamos para cumplir la condición, sería un bucle infinito
