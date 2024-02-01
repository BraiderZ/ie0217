import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

class Prestamo:
    # Definimos los atributos
    # Los tres aspectos importantes del préstamo
    # Invocammos el método para calcular amortización
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        try:
            # Fórmulas para calcular la tasa de interés mensual y la cuota mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual)**-self.cuotas)

            saldo_restante = self.monto_prestamo

            # Lista que almacena la amortización de cada cuota
            amortizacion = []

            # Loop que itera por cada cuota que tenga que pagar el usuario
            for cuota in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_principal

                # La lista posee un diccionario con cada uno de los datos importantes sobre el préstamo
                amortizacion.append({'Cuota': cuota, 'Interes': interes_pendiente, 'Amortizacion': amortizacion_principal, 'Saldo Restante': saldo_restante})
            return amortizacion
        
        # Si hay cero cuotas, devolvemos un array vacío
        except ZeroDivisionError:
            print("Error: La cantidad de cuotas no puede ser cero.")
            return []
    
    # Método que toma la lista y crea un dataframe para mejorar la visualización
    def generar_reporte(self, archivo_salida):
        try:
            df = pd.DataFrame(self.amortizacion)
            # El reporte se crea en un csv
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte generado con exito: {archivo_salida}')
        except Exception as e:
            print(f'Ocurrio un error al generar el reporte: {str(e)}')

    # Graficamos los datos del préstamo
    def graficar_amortizacion(self):
        df = pd.DataFrame(self.amortizacion)

        data = np.array([df['Interes'], df['Amortizacion']])

        '''Creamos una gráfica que posee tanto la cantidad que se va de la cuota a intereses
        como la parte de la cuota que será hacia el monto del préstamo.'''
        plt.bar(df['Cuota'], data[0], label='Interes')
        plt.bar(df['Cuota'], data[1], bottom=data[0], label='Amortizacion')

        # Agregamos títulos a los ejes y a la gráfica
        plt.xlabel('Numero de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortizacion e Interes por Cuota')
        plt.legend()
        plt.show()


def main():
    try:
        # 1 Pedir el monto al usuario
        monto = float(input('Ingrese el monto del prestamo a pedir: '))
        # 2 Pedir la tasa de interés anual (%)
        interes = float(input('Ingrese la tasa de interes anual: '))
        # 3 Pedir la cantidad de cuotas
        cuotas = int(input('Ingrese la cantidad de cuotas para pagar el préstamo: '))
        # 4 Instanciar el prestamo
        prestamo_usuario = Prestamo(monto, interes, cuotas)
        # 5 Generar el reporte
        prestamo_usuario.generar_reporte('Préstamo')
        # 6 Imprimir informacion, monto, tasa, cuotas.
        print(f'Informacion:\nMonto: {prestamo_usuario.monto_prestamo}\
              \nTasa de interes anual: {prestamo_usuario.tasa_interes_anual}\
              \nCuotas: {prestamo_usuario.cuotas}')
        # 7 Graficar el reporte
        prestamo_usuario.graficar_amortizacion()
        # 8 Manejo de excepciones ValueError y generico
    except ValueError:
        print("Error: Los datos de su prestamo deben ser numeros.\
              \nAdemas, las cuotas deben ser numeros enteros.")
    except Exception as e:
        print(f'Error detectado: {e}')

if __name__ == '__main__':
    main()