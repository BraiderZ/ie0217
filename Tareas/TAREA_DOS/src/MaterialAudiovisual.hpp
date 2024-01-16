#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP
#include <iostream>
#include <string>
using namespace std;

class MaterialAudiovisual {
    public:
        MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio);
        virtual void tamano();
        virtual void imprimirInformacion();
        string obtenerTitulo();
        string obtenerTipo();
        int obtenerPrecio();

    protected:
        string titulo;
        string grupo;
        string tipo_material;
        string autor;
        string genero;
        string estado;
        int duracion;
        int precio;

};

#endif 