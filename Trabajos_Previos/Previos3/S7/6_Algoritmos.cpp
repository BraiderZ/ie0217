#include <iostream>
#include <algorithm>
#include <vector>

bool myfunction (int i, int j) {return (i<j);} //Retorna un booleano

struct myclass {
    bool operator() (int i, int j) {return (i<j);}
} myobject; //Estrcutura con lógica similar

int main(){
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    std::vector<int> myvector (myints, myints+8); //Se le asigna tomar valores del arreglo hasta el 8

    //Usamos el operador sort por defecto (operador <)
    std::sort (myvector.begin(), myvector.begin()+4); //Ordena los primeros 4 elementos

    //Tambien podemos asignarle que acomode usando una lógica creada por nosotros
    std::sort (myvector.begin()+4, myvector.end(), myfunction); //Ordena los otros 4 elementos
    std::sort (myvector.begin(), myvector.end(), myobject);

    std::cout << "myvector contains: ";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << " " << *it;
    std::cout << "\n";
    return 0;
}