#include <iostream>
#include "1_Encabezados_Sum.hpp"
using namespace std;
//Creamos el main
int main () {
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);
    cout << "El resultado de sumar " << num1 << " y " << num2 << " es: " << result << endl;
    
    return 0;
}