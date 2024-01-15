#include "Podcast.hpp"

Podcast::Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio) 
    : MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio) {
        this->grupo = "Audiovisual";
        this->tipo_material = "Podcast";

        cout << "Agregue un resumen sobre el podcast en cuestion: ";
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nuevo podcast guardado exitosamente" << endl; 
    }

void Podcast::imprimirInformacion(){
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

void Podcast::tamano() {
    if (duracion <= 30){
        cout << "La pelicula " << titulo << " es de duracion corta." << endl;  
    } else if (duracion > 30 && duracion < 90){
        cout << "La pelicula " << titulo << " es de duracion mediana." << endl;
    } else {
        cout << "La pelicula " << titulo << " es de duracion larga." << endl;
    }
}