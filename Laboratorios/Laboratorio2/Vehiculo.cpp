#include "Vehiculo.hpp"

Vehiculo::Vehiculo(int velocidad) {
    this->velocidad = velocidad;
}

void Vehiculo::acelerar(){
    cout << "Acelerar el vehiculo hasta " << velocidad << " km/h" << endl;
}

void Vehiculo::frenar(){
    cout << "Frenando el vehiculo" << endl;
}