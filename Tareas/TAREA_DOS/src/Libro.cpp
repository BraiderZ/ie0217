#include "Libro.hpp"

Libro::Libro(string titulo, string autor, string editorial, string genero, string estado, int cantidad_hojas, int precio) 
    : MaterialLectura(titulo, autor, editorial, genero, estado, cantidad_hojas, precio) {
        this->grupo = "Lectura";
        this->tipo_material = "Libro";

        cout << "Agregue un resumen sobre el libro en cuestion: ";
        getline(cin, resumen);
        cout << endl;

        cout << "Agregue material relacionado que podria agradar ser de interes para el consumidor: ";
        getline(cin, material_relacionado);
        cout << endl;

        
        cout << "Nuevo libro guardado exitosamente" << endl; 
    }

void Libro::imprimirInformacion(){
    cout << "---Informacion sobre el material de entretenimiento---" << endl;
    cout << "Grupo al que pertenece: " << grupo << endl;
    cout << "Tipo de material: " << tipo_material << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Estado: " << estado << endl;
    cout << "Tamano: " << cantidad_hojas << " hojas." << endl;
    cout << "Precio: " << precio << " colones." << endl;
    cout << "Resumen del libro: " << resumen << endl;
    cout << "Algunos materiales relacionados al libro son: " << material_relacionado << endl;
}

void Libro::tamano() {
    if (cantidad_hojas <= 100){
        cout << "El libro " << titulo << " es corto." << endl;  
    } else if (cantidad_hojas > 100 && cantidad_hojas < 200){
        cout << "El libro " << titulo << " es mediano." << endl;
    } else {
        cout << "El libro " << titulo << " es largo." << endl;
    }
}