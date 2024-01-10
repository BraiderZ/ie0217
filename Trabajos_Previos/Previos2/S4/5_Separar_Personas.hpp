#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {

    private: 
        string nombre;
        int edad;

    // Solo colocamos los portotipos
    public: 
        Persona(string nombre, int edad);
        string getNombre();
        int getEdad();
        void setEdad(int edad);
};

#endif