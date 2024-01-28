# os es la blibioteca para el manejo de directorios
import os

# nos ayuda a obtener nuestra ubicación actual
# podemos usar os.chdir('Dirección') para cambiar nuesta ubicación
print(os.getcwd())

# Obtenetemos el listado de archivos en nuestra dirección o de la ubicación especificada
lista = os.listdir()
print(lista)

# Podemos crear carpetas
os.mkdir('test')
lista = os.listdir()
print(lista)

# Cambiarles el nombre
os.rename('test', 'new_one')
lista = os.listdir()
print(lista)

# Y elimiarnas. En caso de eliminar archivos se usa remove
os.rmdir('new_one')
lista = os.listdir()
print(lista)
