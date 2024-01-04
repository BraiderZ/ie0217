#include <iostream>
using namespace std;

//Se crea una función con argumentos que posee valores por defecto.
void displayNum(int n1, float n2 = 9.999) { //Solo n2 tien valor por defecto, por lo que, va al final 
    cout << "El numero int es " << n1 << "\n";
    cout << "El numero doble es " << n2;
}

int main(){

    int num1 = 5;
    //Llamar a la funcion con argumentos
    displayNum(num1); //Enviamos solo el primer argumento. Se puede enviar un segundo argumento si queremos modificar el valor por defecto.
    return 0;
}