#include "5_Separar_Personas.hpp"
#include <iostream>

using namespace std;

int main(){
    Persona p("Juan", 25);

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    p.setEdad(26);

    cout << "Nueva edad: " << p.getEdad() << endl;
    return 0;
}
