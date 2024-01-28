def make_multiplier_of(n):
    def multiplier(x):
        return x * n
    return multiplier


'''Gracias a este diseño, la función puede almacenar dos valores
Así definimos un primer comportamiento de la función
para futuras invocaciones'''
times3 = make_multiplier_of(3)

times5 = make_multiplier_of(5)

print(times3(9))
print(times5(3))

# Pueden agruparse
print(times5(times3(2)))
