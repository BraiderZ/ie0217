#include <iostream>
using namespace std;
//Template crea una plantilla de una función que puede ser de diferentes tipos
template<typename T> //T es definido como el nombre para el tipo de variable que puede cambiar
T add(T num1, T num2) {
    return (num1 + num2);
}

int main (){
    int result1;
    double result2;
    //Se llama a la función y el crea con la plantilla, la versión para el tipo de dato recibido
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    result2 = add<double>(2.2,3.3);
    cout << result2 << endl;

    return 0;
}