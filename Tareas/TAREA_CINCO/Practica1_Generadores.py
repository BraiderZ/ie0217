def grafica1(libreria):
    for fecha in libreria:
        fecha_sin_mes = int((fecha - 13)/100)
        yield fecha_sin_mes, libreria[fecha]

def grafica2(autos_totales_electricos):
    for i in range(len(autos_totales_electricos)):
        fecha = (int((autos_totales_electricos[i][0] - 13)/100))
        fecha_total = (autos_totales_electricos[i][1] * 1000)
        fecha_electricos = (autos_totales_electricos[i][2] * 1000)
        yield fecha, fecha_total, fecha_electricos