import requests

# Solicitamos datos de usuarios
# Podemos usar .post en vez de get dependiendo del objetivo
# También podemos pasar parámetros (payload) como params=
# Con ello especificamos qué queremos
# Poodemo usar try para el manejo de excpciones con la excepción: requests.exceptions.HTTPError
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
users_data = users_response.json()  # Si la respuesta esta en formato Json

# Obtenemos datos de publicaiones
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
posts_data = posts_response.json()

# Procesamos los datos
# Los almacenas en un diccionario
user_posts = {}

for user in users_data:
    user_posts[user['id']] = []

for post in posts_data:
    user_id = post.get('userId')  # Verificamos que exista, si no, retorna None
    if user_id in user_posts:
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Imprimimos los resultados
for user_id, posts in user_posts.items():
    user = next((user for user in users_data if user['id'] == user_id), None)
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")
