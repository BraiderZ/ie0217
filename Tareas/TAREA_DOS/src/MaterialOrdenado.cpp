#include "MaterialOrdenado.hpp"

void MaterialOrdenado::agregarMaterial(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio, string tipo){

    if (tipo == "NOTICIA"){
        Noticia* nuevoMaterial = new Noticia(titulo, autor, editorial, genero, estado, cantidad_hojas, precio);
        materiales_noticia.push_back(nuevoMaterial);
    }else if (tipo == "LIBRO"){
        Libro* nuevoMaterial = new Libro(titulo, autor, editorial, genero, estado, cantidad_hojas, precio);
        materiales_libro.push_back(nuevoMaterial);
    }        
}

void MaterialOrdenado::agregarMaterial(string titulo, string autor, string genero, string estado, int duracion, int precio, string tipo){
    if (tipo == "PELICULA"){
        Pelicula* nuevoMaterial = new Pelicula(titulo, autor, genero, estado, duracion, precio);
        materiales_pelicula.push_back(nuevoMaterial);
    }else if (tipo == "PODCAST"){
        Podcast* nuevoMaterial = new Podcast(titulo, autor, genero, estado, duracion, precio);
        materiales_podcast.push_back(nuevoMaterial);
    }  
}

void MaterialOrdenado::eliminarMaterial(string titulo) {
    int bandera = 1;
    for (Noticia* material : materiales_noticia) {
        if (material->obtenerTitulo() == titulo) {
            delete material;
            materiales_noticia.erase(remove(materiales_noticia.begin(), materiales_noticia.end(), material), materiales_noticia.end());
            cout << "Eliminado correctamente" << endl;
            bandera = 2;
            return;
        }
    }
    for (Libro* material : materiales_libro) {
        if (material->obtenerTitulo() == titulo) {
            delete material;
            materiales_libro.erase(remove(materiales_libro.begin(), materiales_libro.end(), material), materiales_libro.end());
            cout << "Eliminado correctamente" << endl;
            bandera = 2;
            return;
        }
    }
    for (Pelicula* material : materiales_pelicula) {
        if (material->obtenerTitulo() == titulo) {
            delete material;
            materiales_pelicula.erase(remove(materiales_pelicula.begin(), materiales_pelicula.end(), material), materiales_pelicula.end());
            cout << "Eliminado correctamente" << endl;
            bandera = 2;
            return;
        }
    }
    for (Podcast* material : materiales_podcast) {
        if (material->obtenerTitulo() == titulo) {
            delete material;
            materiales_podcast.erase(remove(materiales_podcast.begin(), materiales_podcast.end(), material), materiales_podcast.end());
            cout << "Eliminado correctamente" << endl;
            bandera = 2;
            return;
        }
    }
    if (bandera == 1){
        cout << "No existe un material con ese titulo." << endl;
    }
}

void MaterialOrdenado::buscarMaterialPorTitulo(string titulo){
    for (Noticia* material : materiales_noticia) {
        if (material->obtenerTitulo() == titulo) {
            material->imprimirInformacion();
            return;
        }
    }

    for (Libro* material : materiales_libro) {
        if (material->obtenerTitulo() == titulo) {
            material->imprimirInformacion();
            return;
        }
    }

    for (Pelicula* material : materiales_pelicula) {
        if (material->obtenerTitulo() == titulo) {
            material->imprimirInformacion();
            return;
        }
    }

    for (Podcast* material : materiales_podcast) {
        if (material->obtenerTitulo() == titulo) {
            material->imprimirInformacion();
            return;
        }
    }

    cout << "Material no encontro ningun material de entretenimiento con el titulo: " << titulo << endl;
}

void MaterialOrdenado::buscarMaterialPorPrecio(int precio){
    for (Noticia* material : materiales_noticia) {
        if (material->obtenerPrecio() == precio) {
            cout << "Precio: "<< material->obtenerPrecio() << " | Titulo: " << material->obtenerTitulo() << " | Tipo: " << material->obtenerTipo() << endl ;
            return;
        }
    }

    for (Libro* material : materiales_libro) {
        if (material->obtenerPrecio() == precio) {
            cout << "Precio: "<< material->obtenerPrecio() << " | Titulo: " << material->obtenerTitulo() << " | Tipo: " << material->obtenerTipo() << endl ;
            return;
        }
    }

    for (Pelicula* material : materiales_pelicula) {
        if (material->obtenerPrecio() == precio) {
            cout << "Precio: "<< material->obtenerPrecio() << " | Titulo: " << material->obtenerTitulo() << " | Tipo: " << material->obtenerTipo() << endl ;
            return;
        }
    }

    for (Podcast* material : materiales_podcast) {
        if (material->obtenerPrecio() == precio) {
            cout << "Precio: "<< material->obtenerPrecio() << " | Titulo: " << material->obtenerTitulo() << " | Tipo: " << material->obtenerTipo() << endl ;
            return;
        }
    }
}

void MaterialOrdenado::buscarMaterialesPorTipo(int tipo){
        bool encontrado = false;

    switch(tipo) {
        case 1:
            for (Noticia* material : materiales_noticia) {
                material->imprimirInformacion();
                encontrado = true;
            }
            break;
        case 2:
            for (Libro* material : materiales_libro) {
                material->imprimirInformacion();
                encontrado = true;
            }
            break;
        case 3:
            for (Pelicula* material : materiales_pelicula) {
                material->imprimirInformacion();
                encontrado = true;
            }
            break;
        case 4:
            for (Podcast* material : materiales_podcast) {
                material->imprimirInformacion();
                encontrado = true;
            }
            break;
        default:
            cout << "Tipo de material no válido." << endl;
            return;
    }

    if (!encontrado) {
        cout << "No se encontraron materiales del tipo especificado." << endl;
    }
}


MaterialOrdenado::~MaterialOrdenado() {
    for (Libro* material : materiales_libro) {
        delete material;
    }
    for (Noticia* material : materiales_noticia) {
        delete material;
    }
    for (Pelicula* material : materiales_pelicula) {
        delete material;
    }
    for (Podcast* material : materiales_podcast) {
        delete material;
    }
    materiales_libro.clear();
    materiales_noticia.clear();
    materiales_pelicula.clear();
    materiales_podcast.clear();
}

void MaterialOrdenado::tamanoMaterial(string nombre){
    for (Noticia* material : materiales_noticia) {
        if (material->obtenerTitulo() == nombre) {
            material->tamano();
            return;
        }
    }

    for (Libro* material : materiales_libro) {
        if (material->obtenerTitulo() == nombre) {
            material->tamano();
            return;
        }
    }

    for (Pelicula* material : materiales_pelicula) {
        if (material->obtenerTitulo() == nombre) {
            material->tamano();
            return;
        }
    }

    for (Podcast* material : materiales_podcast) {
        if (material->obtenerTitulo() == nombre) {
            material->tamano();
            return;
        }
    }

    cout << "Material no encontro ningun material de entretenimiento con el titulo: " << nombre << endl;
}