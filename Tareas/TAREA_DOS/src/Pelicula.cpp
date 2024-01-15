#include "Pelicula.hpp"

Pelicula::Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio) {
        this->grupo = "Audiovisual";
        this->tipo_material = "Pelicula";

        cout << "Agregue un resumen sobre de la pelicula en cuestion: ";
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nueva pelicula guardado exitosamente" << endl; 
    }

void Pelicula::imprimirInformacion(){
    cout << "---Informacion sobre el material de entretenimiento---" << endl;
    cout << "Grupo al que pertenece: " << grupo << endl;
    cout << "Tipo de material: " << tipo_material << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Duracion: " << duracion << " minutos." << endl;
    cout << "Precio: " << precio << " colones." << endl;
    cout << "Resumen del libro: " << resumen << endl;
    cout << "Algunos materiales relacionados al libro son: " << material_relacionado << endl;
}

void Pelicula::tamano() {
    if (duracion <= 90){
        cout << "La pelicula " << titulo << " es de duracion corta." << endl;  
    } else if (duracion > 90 && duracion < 150){
        cout << "La pelicula " << titulo << " es de duracion mediana." << endl;
    } else {
        cout << "La pelicula " << titulo << " es de duracion larga." << endl;
    }
}