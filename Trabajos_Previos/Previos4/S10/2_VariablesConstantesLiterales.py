# Las constantes se definen en otro archivo y se important
import constanst

#Variables: su valor puede cambiar en el tiempo, no hace falta definir su tipo y podemos definir varias al mismo tiempo
print("Variables:")
a, b, c = 1901, "Hola", -5.7

print(a)
print(b)
print(c)

c = 10 # c cambia de tipo sin problema

print(c)

#Literales: son representaciones de valores fijos en un programa
print("Literales:")
value = None # None refleja literalmente nada

print(value)

#Imprimimos las constantes
print("Constantes:")
print(constanst.PI)
print(constanst.GRAVITY)