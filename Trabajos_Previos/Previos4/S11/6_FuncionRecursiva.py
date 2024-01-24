def factorial(x):
    #Definimos el caso base
    if x == 1:
        return 1
    #Si no se cumple el caso base, se volverá a llamar la función con ciertos cambios deseados
    else:
        return (x * factorial(x-1))

num = 3
print("The factorial of", num, "is", factorial(num))