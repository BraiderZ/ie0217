#include <iostream>

int count;
extern void write_extern(); //Toma la función de otro programa

int main() {
    count = 5;
    write_extern();
    return 0;
}