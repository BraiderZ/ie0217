#Implicita: Python se encarga de realizar la conversión por si solo
integer_number = 123
float_number = 1.23

new_number = integer_number + float_number

print("Value:", new_number)
print("Data Type:", type(new_number))

#Explicita: Nosotros definimos el tipo de dato al que convertilo
num_string = '12'
num_integer = 23

print("Data type of num_string before Type Casting:",type(num_string))

#Lo convertimos a integer
num_string = int(num_string)

print("Data type of num_string after Type Casting:",type(num_string))

#La conversión se realizó porque Python no suma números string
num_sum = num_integer + num_string

print("Sum:",num_sum)
print("Data type of num_sum:",type(num_sum))