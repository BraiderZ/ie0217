#include <iostream>
using namespace std;

 //Creamos una enumeración. Esto nos ayuda para definile un valor específico a una variable y que si es cambiado, no haya problema
    enum seasons {
        spring = 34,
        summer = 4,
        autumn = 9,
        winter = 32
    };

int main() {
    
    seasons s; //Se define una variable que dependa del enum

    s = summer; //Se le da un valor de los enumerados

    cout << "Summer =  " << s << endl;

    return 0;


}