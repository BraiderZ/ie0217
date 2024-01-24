#Los diccionarios guardar valores y se les proporciona una clave para ingresar a ellos. No poseen un orden
#Al igual que las listas, tuplas y sets, en su interior pueden haber claves o valores de diferentes tipos
capital_city = {'Nepal':'Kathmandu', 'Italy':'Rome', 'England' : 'London'}

print("Initial dictionary:",capital_city)
#Para ingresar un nuevo valor, colocamos su clave y su valor. Si queremos cambiar un valor, en vez de hacerlo pos su posición, será por su clave
capital_city['Japan'] = "Tokyo" #Clave: Japan Valor: Tokyo
print("Updated Dictiionary:", capital_city)
capital_city['Italy'] = 'Rome minus Vatican'
print("Updated Dictiionary:", capital_city)
#Imprimimos un valor si especificamos su clave
print(capital_city['Nepal'])

#Podemos eliminar valores del diccionario o el propio diccionario con del
del capital_city['Japan']

squares = {1:1,3:9,5:25,7:49,9:81}
#in sirve para veficiar si existe un elemento de la lista con la clave especificada
print(1 in squares)
print(2 not in squares)

#Podemos usar for con los elementos del diccionario, el iterador guarda las claves
for i in squares:
    print(squares[i])