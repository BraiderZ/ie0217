#include <iostream>
using namespace std;

int main(){
    char oper;
    float num1, num2;
    cout << "Ingrese un operador (+, -, *, /)\n";
    cin >> oper;
    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;

    //Creamos el switch. Valora los casos dependiendo del operador elegido por el usuario
    switch (oper) { 
        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;
            break;
        case '/':
            cout << num1 << "/" << num2 << "=" << num1 / num2;
            break;
        // En caso de fallar debido a que no se eligió un operador correcto
        default:
            cout << "Error! El operador no es correcto";
            break;
    }
    return 0;
}