try:
    '''Para abrir un archivo utilizamos open(direccion_archivo,acciones)
    En caso de que el archivo se encuentre en la misma carpeta, podemos
    colcar su dirección completa o solo el nombre.'''
    '''Por defecto, el archivo se abre en lectura pero podemos cambiar eso
    utilizando los diferentes símbolos que los representan.'''
    file1 = open("test.txt", "r")
    read_content = file1.read()  # read es para leer el archivo
    print(read_content)

finally:
    # Es importante siempre cerrar el archivo
    # Usar un try-finally es una opción viable
    file1.close()

# La mejor opción para manejar archivos es con with
# Una vez termina el bloque with, se cierra el archivo
with open("test.txt", "w") as file2:
    # write funciona para escribir dentro del archivo
    file2.write('Progamming is Fun.')
