# Importamos la librería ebcargada de las solicitudes
import requests

# Le pedimos que nos devuelva información de la página
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Se imprime el tipo de respuesta
# 200 es que se tuvo éxito
print('Tipo:', type(response))
print("Respuesta:", response)
# Al ser en formato Json, podemos imprimir un texto de la información
# Esto se recibe en forma de diccionarios de python
print("Respuesta text:", response.text)
# Imprimimos la respuesta completa
# No dice toda la información de la solicitud
# Esto no tiene sentido en Python pero sí a la hora de entrar a una web
print("Respuesta:", response.__dict__)

'''Páginas como google no es formato Json,
aún más solo tiene sentido a la hora de entrar a la página
la información que devuelve'''
