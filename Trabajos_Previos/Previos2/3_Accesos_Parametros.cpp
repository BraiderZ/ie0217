#include <iostream>
using namespace std;

class Animal {

    private: // Solo la clase tiene acceso a atributos privados
        int edad;

    public: // Todos tiene acceso a atributos públicos
        
        void setEdad(int age){
            edad = age;
        }
        int getEdad(){
            return edad;
        }

        protected: // Solo la propia clase y clases derivadas tienen acceso a atributos protegidos
            string nombre;
};

// Aqu'i se da algo conocido como herencia. La clase perro hereda atributos y métodos de la clase Animeal. Se promueve el reciclaje de código.
class Perro : public Animal {

    public:
        
        void setNombre(string n){
            nombre = n;
        }
        string getNombre(){
            return nombre;
        }

};

void calcularPromedio(Perro perro1, Perro perro2){
    double promedio = (perro1.getEdad()  + perro2.getEdad()) / 2.0;

    cout << "La edad promedio entre " << perro1.getNombre() << " y " << perro2.getNombre() << " es " << promedio << endl;

}

int main(){
    
    Perro miPerro1;
    miPerro1.setNombre("Toby");
    miPerro1.setEdad(3);

    cout << "Mi perro se llama " << miPerro1.getNombre() << endl;
    cout << "Su edad es " << miPerro1.getEdad() << endl;

    Perro miPerro2;
    miPerro2.setNombre("Luca");
    miPerro2.setEdad(6);

    // Se puede enviar objetos como parámetros
    calcularPromedio(miPerro1, miPerro2);
    return 0;
}