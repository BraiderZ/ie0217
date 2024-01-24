
class Person:
    def __init__(self, name, age, salary):
        self.name = name #Este atributo es público: todos pueden acceder al atributo
        self._age = age #Este atributo es protegido: solo la clase y clases derivadas tienen acceso al atributo *por convensión*
        self.__salary = salary #Este atributo es privado: solo la clase tiene acceso a ella

p1 = Person("John", 20, 1000)
print(p1.name)
#Aunque podamos acceder a los atributos protegidos, la idea es seguir la convensión
