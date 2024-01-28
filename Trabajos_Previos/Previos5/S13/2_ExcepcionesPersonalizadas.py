"""Si queremos crear una escepción propia, lo hacemos por medio de una clase
La clase puede llevar cualquier nombre e incluso poseer atributos
los cuales se pueden definir en el __init__"""
class InvalidAgeException(Exception):
    "Raised when the input value is less than 18"
    pass


number = 18

try:
    input_num = int(input("Enter a number: "))
    if input_num < number:
        # Cuando queramos utilizar la excepción, usamos el comando raise seguido de la excepción
        raise InvalidAgeException
    else:
        print("Eligible to Vote")
# Al igual que con el resto de excepciones, podemos crear un except con la excpeción creada
except InvalidAgeException:
    print("Exception ocurred: Invalid Age")
