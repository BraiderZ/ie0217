#include <iostream>
using namespace std;

main() {
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximun number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i){
        cout << "Enter n" << i << ": ";
        cin >> num;

        if (num < 0.0){
            //Aqui se colocaría el goto. Saltando hasta el punto especificados de código.
            goto jump;
        }
        sum += num;
    }
//Bandera a la que salta el goto
jump:
    average = sum / (i - 1);
    cout <<  "\nAverage = " << average;
    return 0;
}