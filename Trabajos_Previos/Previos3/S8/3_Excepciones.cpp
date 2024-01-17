#include <iostream>
#include <stdexcept> //Excepciones por defecto

using namespace std;

int main(){
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    //try le dice al programa que intente ejecutar las siguientes líneas de código
    try{
        //Las excepciones podemos tratarlas con if
        if (denominador == 0){
            //throw brinca el programa hasta el catch. Con esto, si sabemos que existe un tipo de error posible, enviamos una valor
            throw runtime_error("Error: el denominador no puede ser cero."); //En este caso usamos un error por defecto gracias a la biblioteca. Pero nosotros mismo podemos elegir el tipo de valor a enviar
        }
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;
    } catch (const exception& e) { //Colocamos el tipo de error a recibir y su nombre
        cerr << e.what() << endl;
    }
    //Podemos definir diferentes catch 
    catch (...){ //Los tres puntos se usan cuando no sabemos el tipo de error que podría ocurrir, pero queremos estar seguros de que no sucedan
        cout << "Ha ocurrido un error" << endl;
    }
}