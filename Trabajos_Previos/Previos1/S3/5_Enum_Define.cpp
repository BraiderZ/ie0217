#include <iostream>
using namespace std;

//Eb cada lugar del código donde se escriba el nombre del define, se cambiará por su valor
#define MI_PRIMER_DEFINE 10

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

    cout << "Define: " << MI_PRIMER_DEFINE << endl;

    return 0;


}