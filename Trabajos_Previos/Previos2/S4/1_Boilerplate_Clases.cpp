#include <iostream>

using namespace std;

// Secrea una clase con el nombre "Molde"
class Molde {

    public: //Atributos de la clase. En este caso se han elegido atributos públicos
        double largo;
        double ancho;
        double altura;

    // Al llevar el nombre de la clase, se llama cosntructuor. Cada vez que instanciemos un objeto, esta función se ejecutará.
    Molde(){
        cout << "Esto se ejcuta en cada instanciacion" << endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
    }
    
    //Métodos de la clase molde
    double calcularArea(){
        return largo * ancho;
    }

    double calcularVolumen(){
        return largo * ancho * altura;
    }
};

int main(){
    // Se instancia un objeto llamado pared que es parte y se basa en la clase Molde
    Molde pared;

    // Se le asignan valores a cada atributo
    pared.altura = 315.2;
    pared.ancho = 20.8;
    pared.largo = 400.5;

    // Se calculan tanto el área como el volumen del objeto por medio de los métodos
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;
    
    return 0;

}
