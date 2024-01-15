#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP
#include <iostream>
#include <string>
using namespace std;

class MaterialLectura {
    public:
        MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio);
        virtual void tamano();
        virtual void imprimirInformacion();

    protected:
        string titulo;
        string grupo;
        string tipo_material;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantidad_hojas;
        int precio;

};

#endif 