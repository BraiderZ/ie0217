#include "MaterialPrecio.hpp"

void MaterialPrecio::crearVectorPrecios(int ascendente_descendente, MaterialOrdenado* materiales){
    for (Noticia* material : materiales->materiales_noticia) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Libro* material : materiales->materiales_libro) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Pelicula* material : materiales->materiales_pelicula) {
            precios_materiales.push_back(material->obtenerPrecio());
        }

        for (Podcast* material : materiales->materiales_podcast) {
            precios_materiales.push_back(material->obtenerPrecio());
        }
    ordenarPrecios(ascendente_descendente, materiales);
    imprimirPrecios(materiales);
}

void MaterialPrecio::ordenarPrecios(int ascendente_descendente, MaterialOrdenado* materiales) {
    int n = precios_materiales.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            switch (ascendente_descendente) {
                case 1:
                    if (precios_materiales[j] > precios_materiales[j + 1]) {
                        swap(precios_materiales[j], precios_materiales[j + 1]);
                    }
                    break;
                case 2:
                    if (precios_materiales[j] < precios_materiales[j + 1]) {
                        swap(precios_materiales[j], precios_materiales[j + 1]);
                    }
                    break;
            }
        }
    }
}

void MaterialPrecio::imprimirPrecios(MaterialOrdenado* materiales){
    for (int precio : precios_materiales) {
        materiales->buscarMaterialPorPrecio(precio);
    }
}