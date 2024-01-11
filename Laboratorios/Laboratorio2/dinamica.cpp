#include <iostream>
using namespace std;

//Data section
int variable_global = 10;

//.text section
void funcionGlobal(){

    //.data
    static int variable_local_estatica = 5;

    //Stack section
    int variable_local = 20;

    //Mostrar valores
    cout << "Variable global: " << variable_global << endl;
    cout << "Variable local estatica: " << variable_local_estatica << endl;
    cout << "Variable local: " << variable_local << endl;
}

int main(){

    //Stack section
    int variable_local_main = 15;

    funcionGlobal();

    //Heap section
    int* variable_dinamica = new int;
    *variable_dinamica = 25;

    cout << "Variable dinamica " << *variable_dinamica << endl;

    delete variable_dinamica;

    return 0;
}