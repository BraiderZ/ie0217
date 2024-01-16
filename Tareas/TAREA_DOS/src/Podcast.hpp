#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "MaterialAudiovisual.hpp"
#include <iostream>
#include <string>
using namespace std;

class Podcast : public MaterialAudiovisual {
    public:
        Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio);
        void imprimirInformacion() override;
        void tamano() override;
        virtual ~Podcast();
    protected:
        string resumen;
        string material_relacionado;

};

#endif 