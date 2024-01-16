#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MaterialOrdenado  {
    public:
        void agregarMaterial(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio, string tipo);
        void agregarMaterial(string titulo, string autor, string genero, string estado, int duracion, int precio, string tipo);
        void eliminarMaterial(string titulo);
        void buscarMaterialPorTitulo(string titulo);
        void buscarMaterialesPorTipo(int tipo);
        void buscarMaterialPorPrecio(int precio);
        void tamanoMaterial(string nombre);
        virtual ~MaterialOrdenado();
        vector<Noticia*> materiales_noticia;
        vector<Libro*> materiales_libro;
        vector<Pelicula*> materiales_pelicula;
        vector<Podcast*> materiales_podcast;
};

#endif