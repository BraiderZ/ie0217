#include <iostream>
using namespace std;

class Mammal {
    public:
        Mammal() {
            cout << "Mammals can give direct birth." << endl;
        }
};

class WingedAnimal {
    public:
        WingedAnimal() {
            cout << "Winged animal can flap." << endl;
        }
};

// Una clase puede heredar de diferentes clases. Si se hereda de manera pública, se mantienen los accesos originales.
class Bat: public Mammal, public WingedAnimal {};
// Una clase puede heredar de una clase ya heredada. Si se hereda de manera privada, todos los atributos se vuelven privados
class Bat_Female: private Bat {};
// Dos clases pueden heredar de una misma clase. Si se hereda de manera protegida, los atributos públicos se vuelven protegidos
class Bat_Male: protected Bat{};

int main(){
    Bat b1;
    Bat_Female b2;
    Bat_Male b3;

    return 0;
}
