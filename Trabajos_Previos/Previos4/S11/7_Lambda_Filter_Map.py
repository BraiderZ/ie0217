#Podemos crear una función lambda, cuando queremos crear una función con un proceso pequeño
greet_user = lambda name : print('Hey there', name) #Podemos recibir argumentos al igual que una función normal

print("Usando lambda:")
greet_user('Delilah')

#lambda se vuelve poderosa si usamos algún complemento
#filter sirve para elegir un conjunto de valores dentro de otro conjunto, según se le ordene
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
filtro = list(filter(lambda x: (x%2 == 0), my_list))

print("\nUsando filter lambda:")
print(filtro)

#map funciona para crear un nuevo conjunto basado en otro pero modificándolo a gusto
mapeo = list(map(lambda x: x * 2, my_list))

print("\nUsando map lambda:")
print(mapeo)