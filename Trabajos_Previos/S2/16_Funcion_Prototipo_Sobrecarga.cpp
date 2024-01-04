#include <iostream>
using namespace std;

//Se crea una función prototipo con argumentos, nombre y tipo que después se dirá su funcionamiento.
int suma(int a, int b); //n1 y n2 son argumentos

//Mismo nombre pero diferente funcionalidad
float suma(){
    cout << "Sumo dos flotantes: " << 1.5 + 1.3;
}
int main(){

    int sum;
    //Llamar a la funcion con argumentos 
    //Lo que retorne la función, se guarda en una variable 
    sum = suma(100, 78);

    cout << "100 + 78 = " << sum << endl;

    //Llama a la función sin argumentos
    suma();

    return 0;
}
//Definimos la función
int suma(int a, int b) {  
    return(a + b);  
}
