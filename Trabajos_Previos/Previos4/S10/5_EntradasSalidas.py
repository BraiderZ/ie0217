#Print: sirve para las salidas
#Podemos agregar variables o datos explicitos como salidas
#Usar diferente separadores con sep=
#Definir el final de un print con end=
#Imprimir en otro archivo con file=
#Esperar a otros print con flush=

#Input: sirve para recibir entradas. Por defecto son string

num = input("Ingrese el nombre del curso: ")
print("Your entered: ", num)
print("Data type:", type(num))
cantidad = int(input("Ingrese la cantidad de estudiantes: "))
print("Your entered: ", cantidad)
print("Data type:", type(cantidad))

#Podemos unir string
print("Este curso es: " + num, end= " - ")

print("cantidad de estudiantes", cantidad, sep= ' = ')