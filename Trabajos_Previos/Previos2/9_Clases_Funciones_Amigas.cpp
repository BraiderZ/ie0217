#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;

        // Utilizando friend puedo agregar una función o clase capaz de utilizar los atributos privados.
        friend int addFive(Distance); // Puedo colocar friend class Nombre en caso de querer agregar una clase amiga

        public:
            Distance() : meter(0) {}
};

int addFive(Distance d){
    //Puede modificar un atributo privado.
    d.meter +=5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}
