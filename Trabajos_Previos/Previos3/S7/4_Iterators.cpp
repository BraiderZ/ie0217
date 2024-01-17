#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> languages = {"Python", "C++", "Java"};

    //Creamos un iterador: puntero para poder acceder a los valores dentro de un container
    vector<string>:: iterator itr;

    //Utilizamos el iterador como un puntero normal
    for (itr = languages.begin(); itr != languages.end(); itr++){ //Begin apunta al inicio y end marca el final del container
        cout << *itr << ", ";
    }

    return 0;
}
