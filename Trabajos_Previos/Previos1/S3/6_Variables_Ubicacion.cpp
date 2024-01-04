#include <iostream>
using namespace std;


int main () {
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;


    //Podemos imprimir su ubicación usando "&"
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var1: " << &var2 << endl;
    cout << "Address of var1: " << &var3 << endl;

    return 0;
}
