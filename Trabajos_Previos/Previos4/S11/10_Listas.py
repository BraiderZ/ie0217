#Radom nos da opciones para realizar acciones aleatorias
import random

languages = ["Python", "Swift", "C++", "C"]

print("\nImprimimos un valor random de la lista:")
#Elegimos un valor aleatorio de la lista para imprimirlo
print(random.choice(languages)) #También podemos usar .shuflle para cambiar el orden de la lista

print("\nImprimimos toda la lista:")
print(languages)

#Accedemos a un número en la posición elegida entre paréntesis cuadrados
print("\nImprimimos el primer valor de la lista:")
print(languages[0])

#Usando número negativos accedemos a la lista al revés
print("\nÚltimo elemento de la lista:")
print(languages[-1])

#Para imprir los elementos iniciando desde una posición hasta otra (excluyendo la segunda posición indicada), usamos [posición:posición]
#En caso de querer imprimir todo lo que haya apartir de una posición: [posición: ]
#Para imprimir todo: [:]
print("\nSe imprime una parte de la lista:")
print(languages[1:3])

#Para añadir un valor, usamos apend(valor) y se añade al final de la lista
#Si queremos añadir en una posición específica, cambiamos la variable con lista[posición] = nuevo_valor
#Con extend(lista2), agregamos todos los valores de otra lista al final de la nuestra
languages.append("Java")

lista_nueva = ["Rust", "R"]

languages.extend(lista_nueva)

print("\nLista con los nuevos valores:")
print(languages)

#Puedes eliminar con del, un valor en una posición específica y con remove(valor_de_la_posicion)
languages.remove("Python")
print("\nSe elimino un elemento de la lista:")
print(languages)

#in funciona para usar o buscar en el contenido de alguna variables
for languages in languages:
    print(languages)

