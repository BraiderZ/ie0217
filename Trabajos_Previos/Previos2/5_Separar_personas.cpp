#include "5_Separar_Personas.hpp"
#include <string>
using namespace std;

// Ahora creo las acciones de cada método
Persona::Persona (string nombre, int edad){

    //This sirve para referirnos a los atributos  de la porpia clase y diferencias con respecto a variables
    this -> nombre = nombre;
    this -> edad = edad;
}

string Persona::getNombre(){
    return nombre;
} 

int Persona::getEdad(){
    return edad;
} 

void Persona::setEdad(int edad){
    this ->edad = edad;
} 
