#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP
#include "MaterialOrdenado.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class MaterialPrecio {
    public:
        void crearVectorPrecios(int ascendente_descendente, MaterialOrdenado* materiales);
        void ordenarPrecios(int ascendente_descendente, MaterialOrdenado* materiales);
        void imprimirPrecios(MaterialOrdenado* materiales);
        vector<int> precios_materiales;
};


#endif