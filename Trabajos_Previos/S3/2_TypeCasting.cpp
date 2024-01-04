//Convertimos un tipo de variable en otra

#include <iostream>
using namespace std;

main() {
    //De manera inplicita
    //Asignamos un valor a una variable de tipo int
    int num_int1 = 9;
    //Declaramos una variable de otro tipo
    double num_double1;

    //Asignamos el valor de num_int a num_double
    num_double1 = num_int1;

    cout << "num_int1= " << num_int1 << endl;
    cout << "num_double1 asignado de manera implicita = " << num_double1 << endl;


    //De manera explícita
    double num_double2 = 3.56;
    cout << "num_double2 = " << num_double2 << endl;

    //Le asignamos el valor de una vez a la variable
    int num_int2 = (int)num_double2; //El paréntesis también puede ser a la variable y no al tipo
     cout << "num_int2 asignado de manera explicita = " << num_int2 << endl;
    return 0; 
}