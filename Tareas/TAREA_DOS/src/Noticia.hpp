#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "MaterialLectura.hpp"
#include <iostream>
#include <string>
using namespace std;

class Noticia : public MaterialLectura {
    public:
        Noticia(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio);
        void imprimirInformacion() override;
        void tamano() override;
    protected:
        string resumen;
        string material_relacionado;

};

#endif 