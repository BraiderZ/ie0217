#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "MaterialAudiovisual.hpp"
#include <iostream>
#include <string>
using namespace std;

class Pelicula : public MaterialAudiovisual {
    public:
        Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio);
        void imprimirInformacion() override;
        void tamano() override;
        virtual ~Pelicula();
    protected:
        string resumen;
        string material_relacionado;

};

#endif 