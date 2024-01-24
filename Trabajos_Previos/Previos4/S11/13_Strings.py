#Los strings poseen las mismas posibilidades para leer dentro de ellas como las listas, pero no para cambiar datos
string1 = "Song:"
print(string1[2:4])

#Podemos hacer strings de más de una línea
string2 = """
Never gonna give you up
Never gonna let you down
"""
#Podemos verificar que un string sea igual que otro usando ==
print(string1 == string2)
#O podemos verificar con in si un string se encuentra dentro de otro string
#in también sirve como en las listas para crear un iterador con cada valor de la cadena
print("a" in string2)

#Podemos sumar strings para juntarlos en uno solo
print(string1 + string2)

#Con len podemos ver el tamaño de una lista o un string
print(len(string1))

#Si queremos agregar comillas dentro del string o algún otro símbolo reservado, usamos \
string2 = """
\"Never gonna give you up
Never gonna let you down\"
"""
print(string2)
