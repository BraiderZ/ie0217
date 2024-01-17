#include <iostream>
#include <map>
using namespace std;


int main(){
    //Almacena datos con un par: una clave y un valor. Las claves no pueden repetirse
    map<int, string> student; //La clave es un int y el valor un string

    //Usando [] para agregar elementos
    student[1] = "Jacqueline";
    student[2] = "Blake";

    //Usando insert() para agregar elementos
    student.insert(make_pair(3, "Denise")); //Se usa el make_pair para crear un par ordenado
    student.insert(make_pair(4, "Blake"));

    //Para cambiar un valor
    student[5] = "Timothy";
    student[5] = "Aron";

    for (int i = 1; i <= student.size(); ++i){
        cout << "Student[" << i << "]: " << student[i] << endl;
    }

    return 0;
}
