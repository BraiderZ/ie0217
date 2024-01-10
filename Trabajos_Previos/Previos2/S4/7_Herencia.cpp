#include <iostream>
#include <string>
using namespace std;

class Animal {
    //Las clases derivadas no tienen acceso a este atributo
    private: 
        string color;

    protected: 
        string type;
    
    public: 
        void run() { cout << "I can run -- Base!" << endl;}
        void eat() { cout << "I can eat!" << endl;}
        void sleep() { cout << "I can sleep!" << endl;}
        void setColor(string clr) { color = clr; }
        string getColor() { return color;}
};

// Dog se deriva de animal y adopta sus características
class Dog : public Animal {

    public:
        // Se realiza una sonbreescritura de un método. El método se cambia a conveniencia.
        void run() { cout << "I can run -- DERIVED!" << endl;}
        
        // La clase derivada puede tener sus propios métodos
        void setType(string tp) {type = tp;} // Como type es atrubuto protegido, la clase derivada puede mopdificarlo
        void displayInfo(string c){
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }
        void bark() { cout << "I can bark! Woof Woof!" << endl;}
};


int main(){
    Dog dog1;

//Métodos heredados
    dog1.run();
    // Si queremos utilizar el método no sobreescrito
    dog1.Animal::run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");
    
//Métodos propios
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}