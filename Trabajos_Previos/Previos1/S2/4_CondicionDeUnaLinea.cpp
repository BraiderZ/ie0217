#include <iostream>
using namespace std;

int main(){
    int var1 = 0;
    int var2;

    var2 = (var1 == 0) ? 15 : 27; //Para que sea de una línea la condición, primero se coloca la variable, después la condición y por último el valor dependiendo de si es real o falso

    cout << "var2:\n" << var2 << "";
    return 0;
}