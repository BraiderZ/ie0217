#include "Coche.hpp"

Coche::Coche(int velocidad, int numPuertas) : Vehiculo(velocidad), numPuertas(numPuertas){}

void Coche:: abrirPuertas(){
    //Código para activar sensores que abren las puertas
    cout << "Abriendo las " << numPuertas << " puertas del coche" << endl;
}


