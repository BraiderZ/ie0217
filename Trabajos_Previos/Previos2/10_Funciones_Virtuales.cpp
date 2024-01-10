#include <iostream>
using namespace std;

class Base {
    public:

        // Este método debe ser modificado siempre en clases derivadas.
        virtual void print() {
            cout << "Base Function" << endl;
        }
};

class Derivade: public Base {
    public:
        void print() {
            cout << "Derivade Function" << endl;
        }
};

int main(){
    Derivade derived1;

    // Puntero de tipo de una clase
    Base* base1 = &derived1;

    // Podemos invocar el método de la clase derivada
    base1->print();

    return 0;
}