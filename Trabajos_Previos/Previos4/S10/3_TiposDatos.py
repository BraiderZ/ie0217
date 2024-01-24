# No tenemos que definir el tipo de dato de la variable

print("\nNumeros:")
num = 1+2j

print(num, 'is of type', type(num)) #Con type accedemos al tipo de dato de una variable

print("\nString:")

name = ('Python')

print(name)

#Listas: análogo a los arreglos. Pueden estar compuestas por cualquie tipo de dato

print("\nLista:")

lenguaje = ["Swift", "Java", "Python"] #Se usan paréntesis cuadrados

#Para ingresar a sus valores, lo hacemos iniciando en 0
print(lenguaje[0])

#Tuplas: sus tamaño y valores no cambian. Se usan paréntesis cuadrados para definirlas. Para ingrear a valores se realiza la misma manera que en la listas
print("\nTupla:")

product = ('Microsoft', 'XBOX', 499.99)

print(product[0])

#Set: elimina elementos repetidos. Se usan llaves. Misma manera en ingresar a un valor quen en las listas y tuplas

print("\nSet:")
student_id = {112, 114, 116, 118, 115}

print(student_id)

# Diccionario: guarda un valor y una clave para ingresar al valor. clave:valor.
print("\nDiccionario:")
capital_city = {'Nepal':'Kathmandu', 'Italy':'Rome', 'England' : 'London'}
print(capital_city)

#Se puede usar la clave para ingresar a un valor, pero no un valor para ingrear a una clave
print(capital_city['Nepal'])
 