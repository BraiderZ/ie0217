#include <iostream>
using namespace std;

//Varaible global. Puede usarse en todo el código
int g; //int es el tipo de dato

int main(){
    //Variables locales. Solo dentro del main tienen importancia
    int a, b;

    //Damos valor a las varaibles locales 
    a = 10;
    b = 20;

    //La variable global tendrá como valor, la suma de las variables locales.
    g = a + b;


    // Imprimimos la variable global
    cout << g;

    return 0;
}