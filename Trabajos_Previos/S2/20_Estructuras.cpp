#include <iostream>
using namespace std; 

//Creamos una estructura con el objetivo de agrupar variables
struct Person{
    char nombre [50];
    int edad;
    float salario;
};

int main(){
    Person p1; //Creamos una variable que contenga datos de la estructura

    cout << "Ingrese el nombre: ";
    cin.get(p1.nombre, 50); //Los datos podemos obtenerlos del usuario
    cout << "Ingrese la edad: ";
    cin >> p1.edad; //strcpy(variable, dato) es la estrcutura en caso de agregarla nosotros y no el usuario
    cout << "Ingrese le salario: ";
    cin >> p1.salario;

    cout << "Desplegamos la informacion." << endl;
    cout <<  "Nombre: " << p1.nombre << endl;
    cout <<  "Edad: " << p1.edad << endl;
    cout <<  "Salario: " << p1.salario << endl;
}