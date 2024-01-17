#include <iostream>
#include <stack>
using namespace std;

int main(){
    //Crea un stack adaptado con las opciones dadas por el STL
    stack<int> numbers;

    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    while(!numbers.empty()) {
        cout << numbers.top() << ", ";
        numbers.pop();
    }
}
